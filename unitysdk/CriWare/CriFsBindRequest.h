#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriFsBindRequest_BindType.h"
#include "unitysdk/CriWare/CriFsRequest.h"

namespace CriWare { class CriFsBinder; }
namespace System { class String; }

#define CRIWARE_CRIFSBINDREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16701F20)
#define CRIWARE_CRIFSBINDREQUEST_GET_BINDID_OFFSET UNITYSDK_OFFSET(0x16701580)
#define CRIWARE_CRIFSBINDREQUEST_GET_PATH_OFFSET UNITYSDK_OFFSET(0x16701560)
#define CRIWARE_CRIFSBINDREQUEST_SET_BINDID_OFFSET UNITYSDK_OFFSET(0x16701590)
#define CRIWARE_CRIFSBINDREQUEST_SET_PATH_OFFSET UNITYSDK_OFFSET(0x16701570)
#define CRIWARE_CRIFSBINDREQUEST_STOP_OFFSET UNITYSDK_OFFSET(0x16701C10)
#define CRIWARE_CRIFSBINDREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x16701C20)
#define CRIWARE_CRIFSBINDREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x167015A0)

namespace CriWare
{
	inline static constexpr unsigned int CriFsBindRequest_TypeDefinitionIndex = 40114;

	class CriFsBindRequest : public ::CriWare::CriFsRequest
	{
	public:
		::System::String* _path_k__BackingField; // 0x38
		::System::UInt32 _bindId_k__BackingField; // 0x40

		::System::Void _ctor(::CriWare::CriFsBindRequest_BindType a1, ::CriWare::CriFsBinder* a2, ::CriWare::CriFsBinder* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBindRequest_BindType, ::CriWare::CriFsBinder*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDREQUEST__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* get_path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDREQUEST_GET_PATH_OFFSET))(this);
		}

		::System::Void set_path(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDREQUEST_SET_PATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_bindId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDREQUEST_GET_BINDID_OFFSET))(this);
		}

		::System::Void set_bindId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDREQUEST_SET_BINDID_OFFSET))(this, a1);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDREQUEST_STOP_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDREQUEST_DISPOSE_OFFSET))(this, a1);
		}
	};
}
