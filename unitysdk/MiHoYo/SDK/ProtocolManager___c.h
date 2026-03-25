#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PROTOCOLMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FCCD00)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FCCD40)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__REQUESTOPERATEAGREEMENT_B__34_0_OFFSET UNITYSDK_OFFSET(0x15FCCD50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager___c_TypeDefinitionIndex = 7043;

	class ProtocolManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__34_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(ProtocolManager___c_TypeDefinitionIndex)->GetStaticField(0x17950);
		}
		static ::MiHoYo::SDK::ProtocolManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::ProtocolManager___c**)Il2CppClass::FromTypeDefinitionIndex(ProtocolManager___c_TypeDefinitionIndex)->GetStaticField(0x17958);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RequestOperateAgreement_b__34_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__REQUESTOPERATEAGREEMENT_B__34_0_OFFSET))(this, response);
		}
	};
}
