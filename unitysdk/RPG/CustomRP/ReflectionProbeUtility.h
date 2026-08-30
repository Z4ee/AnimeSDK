#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }

#define RPG_CUSTOMRP_REFLECTIONPROBEUTILITY_SETGLOBALPROBE_OFFSET UNITYSDK_OFFSET(0x1C6E6440)
#define RPG_CUSTOMRP_REFLECTIONPROBEUTILITY_SETNULLGLOBALPROBE_OFFSET UNITYSDK_OFFSET(0x1C6E64A0)
#define RPG_CUSTOMRP_REFLECTIONPROBEUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E64D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ReflectionProbeUtility_TypeDefinitionIndex = 36891;

	class ReflectionProbeUtility : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_REFLECTIONPROBEUTILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void SetGlobalProbe(::UnityEngine::Texture* a1, ::UnityEngine::Vector4 a2, ::UnityEngine::Texture* a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_REFLECTIONPROBEUTILITY_SETGLOBALPROBE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SetNullGlobalProbe(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_REFLECTIONPROBEUTILITY_SETNULLGLOBALPROBE_OFFSET))(a1);
		}
	};
}
