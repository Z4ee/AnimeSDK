#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LocalizedText; }

#define RPG_CLIENT_MATCHTHREEPOWERNUMBERANIM_PLAYANIM_OFFSET UNITYSDK_OFFSET(0xA845B90)
#define RPG_CLIENT_MATCHTHREEPOWERNUMBERANIM_STOPANIM_OFFSET UNITYSDK_OFFSET(0xA845C40)
#define RPG_CLIENT_MATCHTHREEPOWERNUMBERANIM_UPDATE_OFFSET UNITYSDK_OFFSET(0xA845C80)
#define RPG_CLIENT_MATCHTHREEPOWERNUMBERANIM__CTOR_OFFSET UNITYSDK_OFFSET(0xA845D10)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreePowerNumberAnim_TypeDefinitionIndex = 60727;

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

		::System::Void PlayAnim(::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPOWERNUMBERANIM_PLAYANIM_OFFSET))(this, start, end);
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
