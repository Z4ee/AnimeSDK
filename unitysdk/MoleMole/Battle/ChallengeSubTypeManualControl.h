#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ChallengeSubTypeItem.h"

class Class_2_208CC9941471731A_373;
namespace System { class String; }

#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMANUALCONTROL_GETCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x12C4B650)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMANUALCONTROL_GETPROGRESSSTRING_OFFSET UNITYSDK_OFFSET(0x12C4B6F0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMANUALCONTROL_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x12C4B690)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMANUALCONTROL_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x12C4B600)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMANUALCONTROL_OFFSETPROGRESS_OFFSET UNITYSDK_OFFSET(0x12C4B850)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMANUALCONTROL_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12C4B7E0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMANUALCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x12C4B570)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEMANUALCONTROL___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12C4B8A0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeManualControl_TypeDefinitionIndex = 68400;

	class ChallengeSubTypeManualControl : public ::MoleMole::Battle::ChallengeSubTypeItem
	{
	public:
		::System::Int32 currentCount; // 0x20
		::System::Int32 targetCount; // 0x24

		::System::Void _ctor(::Class_2_208CC9941471731A_373* inTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_373*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMANUALCONTROL__CTOR_OFFSET))(this, inTemplate);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMANUALCONTROL_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Int32 GetCurrentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMANUALCONTROL_GETCURRENTCOUNT_OFFSET))(this);
		}

		::System::Single GetProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMANUALCONTROL_GETPROGRESS_OFFSET))(this);
		}

		::System::String* GetProgressString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMANUALCONTROL_GETPROGRESSSTRING_OFFSET))(this);
		}

		::System::Void OnUpdate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMANUALCONTROL_ONUPDATE_OFFSET))(this, dt);
		}

		::System::Void OffsetProgress(::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMANUALCONTROL_OFFSETPROGRESS_OFFSET))(this, offset);
		}

		::System::Void __base_OnUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEMANUALCONTROL___BASE_ONUPDATE_OFFSET))(this, P0);
		}
	};
}
