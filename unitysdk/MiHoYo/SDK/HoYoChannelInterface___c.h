#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class String; }
namespace UnityEngine { class Application_LogCallback; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFFE9C0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFEA00)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__SETUP_B__13_0_OFFSET UNITYSDK_OFFSET(0x1DFFEA10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c_TypeDefinitionIndex = 37571;

	class HoYoChannelInterface___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoChannelInterface___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::HoYoChannelInterface___c**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___c_TypeDefinitionIndex)->GetStaticField(0x29B30);
		}
		static ::UnityEngine::Application_LogCallback** StaticGet___9__13_0()
		{
			return (::UnityEngine::Application_LogCallback**)Il2CppClass::FromTypeDefinitionIndex(HoYoChannelInterface___c_TypeDefinitionIndex)->GetStaticField(0x29B38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__CTOR_OFFSET))(this);
		}

		::System::Void _Setup_b__13_0(::System::String* logString, ::System::String* stackTrace, ::UnityEngine::LogType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__SETUP_B__13_0_OFFSET))(this, logString, stackTrace, type);
		}
	};
}
