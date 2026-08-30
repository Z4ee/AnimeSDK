#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LocalizedText; }

#define RPG_CLIENT_MATCHTHREEPOWERNUMBERANIM_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x1C989B90)
#define RPG_CLIENT_MATCHTHREEPOWERNUMBERANIM_STOPANIM_OFFSET UNITYSDK_OFFSET(0x1C989C40)
#define RPG_CLIENT_MATCHTHREEPOWERNUMBERANIM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C989C80)
#define RPG_CLIENT_MATCHTHREEPOWERNUMBERANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C989D10)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreePowerNumberAnim_TypeDefinitionIndex = 66008;

	class MatchThreePowerNumberAnim : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single fillAmount; // 0x18
		::System::Int32 _Start; // 0x1C
		::System::Int32 _End; // 0x20
		::System::Boolean _Playing; // 0x24
		::RPG::Client::LocalizedText* _Text; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPOWERNUMBERANIM__CTOR_OFFSET))(this);
		}

		::System::Void PlayAnim(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPOWERNUMBERANIM_PLAYANIM_OFFSET))(this, a1, a2);
		}

		::System::Void StopAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPOWERNUMBERANIM_STOPANIM_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPOWERNUMBERANIM_UPDATE_OFFSET))(this);
		}
	};
}
