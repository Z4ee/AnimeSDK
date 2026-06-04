#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriFsLoadFileRequest_Phase.h"
#include "unitysdk/CriWare/CriFsRequest.h"

namespace CriWare { class CriFsBinder; }
namespace CriWare { class CriFsLoader; }
namespace CriWare { class CriFsRequest_DoneDelegate; }
namespace System { class String; }

#define CRIWARE_CRIFSLOADFILEREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146C1BB0)
#define CRIWARE_CRIFSLOADFILEREQUEST_GET_BYTES_OFFSET UNITYSDK_OFFSET(0x146C1900)
#define CRIWARE_CRIFSLOADFILEREQUEST_GET_PATH_OFFSET UNITYSDK_OFFSET(0x146C18E0)
#define CRIWARE_CRIFSLOADFILEREQUEST_ONERROR_OFFSET UNITYSDK_OFFSET(0x146C21F0)
#define CRIWARE_CRIFSLOADFILEREQUEST_SET_BYTES_OFFSET UNITYSDK_OFFSET(0x146C1910)
#define CRIWARE_CRIFSLOADFILEREQUEST_SET_PATH_OFFSET UNITYSDK_OFFSET(0x146C18F0)
#define CRIWARE_CRIFSLOADFILEREQUEST_STOP_OFFSET UNITYSDK_OFFSET(0x146C1D30)
#define CRIWARE_CRIFSLOADFILEREQUEST_UPDATEBINDER_OFFSET UNITYSDK_OFFSET(0x146C1E90)
#define CRIWARE_CRIFSLOADFILEREQUEST_UPDATELOADER_OFFSET UNITYSDK_OFFSET(0x146C1FA0)
#define CRIWARE_CRIFSLOADFILEREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x146C1E40)
#define CRIWARE_CRIFSLOADFILEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x146C1920)

namespace CriWare
{
	inline static constexpr unsigned int CriFsLoadFileRequest_TypeDefinitionIndex = 37150;

	class CriFsLoadFileRequest : public ::CriWare::CriFsRequest
	{
	public:
		::System::String* _path_k__BackingField; // 0x38
		::CriWare::CriFsBinder* newBinder; // 0x40
		::CriWare::CriFsLoader* loader; // 0x48
		::Il2CppArray<::System::Byte>* _bytes_k__BackingField; // 0x50
		::CriWare::CriFsBinder* refBinder; // 0x58
		::System::UInt32 bindId; // 0x60
		::CriWare::CriFsLoadFileRequest_Phase phase; // 0x64
		::System::Int32 readUnitSize; // 0x68
		::System::Int64 fileSize; // 0x70

		::System::Void _ctor(::CriWare::CriFsBinder* a1, ::System::String* a2, ::CriWare::CriFsRequest_DoneDelegate* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* get_path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_GET_PATH_OFFSET))(this);
		}

		::System::Void set_path(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_SET_PATH_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_bytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_GET_BYTES_OFFSET))(this);
		}

		::System::Void set_bytes(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_SET_BYTES_OFFSET))(this, a1);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_STOP_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateBinder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_UPDATEBINDER_OFFSET))(this);
		}

		::System::Void UpdateLoader()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_UPDATELOADER_OFFSET))(this);
		}

		::System::Void OnError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_ONERROR_OFFSET))(this);
		}
	};
}
