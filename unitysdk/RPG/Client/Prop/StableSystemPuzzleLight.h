#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLELIGHT_INITLIGHT_OFFSET UNITYSDK_OFFSET(0xC628520)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLELIGHT_SETSELECTEDNUMBER_OFFSET UNITYSDK_OFFSET(0xC628620)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLELIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0xC628730)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int StableSystemPuzzleLight_TypeDefinitionIndex = 73391;

	class StableSystemPuzzleLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Field_5_0; // 0x18

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
