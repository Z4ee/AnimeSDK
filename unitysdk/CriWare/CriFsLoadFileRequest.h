#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriFsLoadFileRequest_Phase.h"
#include "unitysdk/CriWare/CriFsRequest.h"

namespace CriWare { class CriFsBinder; }
namespace CriWare { class CriFsLoader; }
namespace CriWare { class CriFsRequest_DoneDelegate; }
namespace System { class String; }

#define CRIWARE_CRIFSLOADFILEREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E7F3660)
#define CRIWARE_CRIFSLOADFILEREQUEST_GET_BYTES_OFFSET UNITYSDK_OFFSET(0x1E7F33D0)
#define CRIWARE_CRIFSLOADFILEREQUEST_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1E7F33B0)
#define CRIWARE_CRIFSLOADFILEREQUEST_ONERROR_OFFSET UNITYSDK_OFFSET(0x1E7F3CA0)
#define CRIWARE_CRIFSLOADFILEREQUEST_SET_BYTES_OFFSET UNITYSDK_OFFSET(0x1E7F33E0)
#define CRIWARE_CRIFSLOADFILEREQUEST_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1E7F33C0)
#define CRIWARE_CRIFSLOADFILEREQUEST_UPDATEBINDER_OFFSET UNITYSDK_OFFSET(0x1E7F3970)
#define CRIWARE_CRIFSLOADFILEREQUEST_UPDATELOADER_OFFSET UNITYSDK_OFFSET(0x1E7F3A80)
#define CRIWARE_CRIFSLOADFILEREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E7F3740)
#define CRIWARE_CRIFSLOADFILEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F33F0)

namespace CriWare
{
	inline static constexpr unsigned int CriFsLoadFileRequest_TypeDefinitionIndex = 34313;

	class CriFsLoadFileRequest : public ::CriWare::CriFsRequest
	{
	public:
		::System::String* _path_k__BackingField; // 0x38
		::CriWare::CriFsLoader* loader; // 0x40
		::Il2CppArray<::System::Byte>* _bytes_k__BackingField; // 0x48
		::CriWare::CriFsBinder* refBinder; // 0x50
		::CriWare::CriFsBinder* newBinder; // 0x58
		::CriWare::CriFsLoadFileRequest_Phase phase; // 0x60
		::System::Int32 readUnitSize; // 0x64
		::System::Int64 fileSize; // 0x68
		::System::UInt32 bindId; // 0x70

		::System::Void _ctor(::CriWare::CriFsBinder* srcBinder, ::System::String* path, ::CriWare::CriFsRequest_DoneDelegate* doneDelegate, ::System::Int32 readUnitSize)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::CriWare::CriFsRequest_DoneDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST__CTOR_OFFSET))(this, srcBinder, path, doneDelegate, readUnitSize);
		}

		::System::String* get_path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_GET_PATH_OFFSET))(this);
		}

		::System::Void set_path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_SET_PATH_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_bytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_GET_BYTES_OFFSET))(this);
		}

		::System::Void set_bytes(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_SET_BYTES_OFFSET))(this, value);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADFILEREQUEST_DISPOSE_OFFSET))(this, disposing);
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
