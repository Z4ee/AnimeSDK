#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class String; }
namespace UnityEngine { class Application_LogCallback; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA16A020)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA16A050)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__SETUP_B__4_0_OFFSET UNITYSDK_OFFSET(0xA16A060)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c_TypeDefinitionIndex = 43922;

	class HoYoChannelInterface___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoChannelInterface___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::HoYoChannelInterface___c**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___c_TypeDefinitionIndex)->GetStaticField(0xC690);
		}
		static ::UnityEngine::Application_LogCallback** StaticGet___9__4_0()
		{
			return (::UnityEngine::Application_LogCallback**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___c_TypeDefinitionIndex)->GetStaticField(0xC698);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__CTOR_OFFSET))(this);
		}

		::System::Void _Setup_b__4_0(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__SETUP_B__4_0_OFFSET))(this, a1, a2, a3);
		}
	};
}
