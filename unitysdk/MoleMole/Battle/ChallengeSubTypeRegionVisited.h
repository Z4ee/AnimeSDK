#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ChallengeSubTypeItem.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_807;
namespace System { class String; }

#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_GETCURRENTCOUNT_OFFSET UNITYSDK_OFFSET(0x123F9B10)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_GETPROGRESSSTRING_OFFSET UNITYSDK_OFFSET(0x123F9BA0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x123F9B50)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x123F98E0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x123F98F0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED__CTOR_OFFSET UNITYSDK_OFFSET(0x123F94E0)
#define MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x123F9C40)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeRegionVisited_TypeDefinitionIndex = 76682;

	class ChallengeSubTypeRegionVisited : public ::MoleMole::Battle::ChallengeSubTypeItem
	{
	public:
		::System::String* anchor; // 0x20
		::System::Boolean reached; // 0x28
		::System::Single sqrRadius; // 0x2C
		::UnityEngine::Vector3 targetPos; // 0x30

		::System::Void _ctor(::Class_2_208CC9941471731A_807* inTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_807*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED__CTOR_OFFSET))(this, inTemplate);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Void OnUpdate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_ONUPDATE_OFFSET))(this, dt);
		}

		::System::Int32 GetCurrentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_GETCURRENTCOUNT_OFFSET))(this);
		}

		::System::Single GetProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_GETPROGRESS_OFFSET))(this);
		}

		::System::String* GetProgressString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED_GETPROGRESSSTRING_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHALLENGESUBTYPEREGIONVISITED___BASE_ONUPDATE_OFFSET))(this, P0);
		}
	};
}
