#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLELIGHT_INITLIGHT_OFFSET UNITYSDK_OFFSET(0xDD328D0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLELIGHT_SETSELECTEDNUMBER_OFFSET UNITYSDK_OFFSET(0xDD329D0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLELIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0xDD32AE0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int StableSystemPuzzleLight_TypeDefinitionIndex = 78402;

	class StableSystemPuzzleLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLELIGHT__CTOR_OFFSET))(this);
		}

		::System::Void InitLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLELIGHT_INITLIGHT_OFFSET))(this);
		}

		::System::Void SetSelectedNumber(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLELIGHT_SETSELECTEDNUMBER_OFFSET))(this, a1);
		}
	};
}
