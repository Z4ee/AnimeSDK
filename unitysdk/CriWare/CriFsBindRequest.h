#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriFsBindRequest_BindType.h"
#include "unitysdk/CriWare/CriFsRequest.h"

namespace CriWare { class CriFsBinder; }
namespace System { class String; }

#define CRIWARE_CRIFSBINDREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E81E590)
#define CRIWARE_CRIFSBINDREQUEST_GET_BINDID_OFFSET UNITYSDK_OFFSET(0x1E81E160)
#define CRIWARE_CRIFSBINDREQUEST_SET_BINDID_OFFSET UNITYSDK_OFFSET(0x1E81E170)
#define CRIWARE_CRIFSBINDREQUEST_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1E81E150)
#define CRIWARE_CRIFSBINDREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E81E520)
#define CRIWARE_CRIFSBINDREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E81E180)

namespace CriWare
{
	inline static constexpr unsigned int CriFsBindRequest_TypeDefinitionIndex = 34319;

	class CriFsBindRequest : public ::CriWare::CriFsRequest
	{
	public:
		::System::String* _path_k__BackingField; // 0x38
		::System::UInt32 _bindId_k__BackingField; // 0x40

		::System::Void _ctor(::CriWare::CriFsBindRequest_BindType type, ::CriWare::CriFsBinder* targetBinder, ::CriWare::CriFsBinder* srcBinder, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBindRequest_BindType, ::CriWare::CriFsBinder*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDREQUEST__CTOR_OFFSET))(this, type, targetBinder, srcBinder, path);
		}

		::System::Void set_path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDREQUEST_SET_PATH_OFFSET))(this, value);
		}

		::System::UInt32 get_bindId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDREQUEST_GET_BINDID_OFFSET))(this);
		}

		::System::Void set_bindId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDREQUEST_SET_BINDID_OFFSET))(this, value);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDREQUEST_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
