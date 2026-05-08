#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_A840136A4E657746_1.h"
#include "unitysdk/Struct_2_A840136A4E657746_4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_STYLISHSCORESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13874ED0)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x138751F0)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM_REGISTERINDIVIDUALDAMAGESCORE_OFFSET UNITYSDK_OFFSET(0x138754F0)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM_REGISTERINDIVIDUALSKILLSCORE_OFFSET UNITYSDK_OFFSET(0x138757B0)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM_REGISTERLOSEPLATINUMTROPHY_OFFSET UNITYSDK_OFFSET(0x13875A70)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM_REGISTEROPENTREASURE_OFFSET UNITYSDK_OFFSET(0x13875AB0)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM_REGISTERSTYLISHSKILLID_OFFSET UNITYSDK_OFFSET(0x13875430)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x138761C0)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x138761E0)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13876270)

namespace MoleMole
{
	inline static constexpr unsigned int StylishScoreSubsystem_TypeDefinitionIndex = 55911;

	class StylishScoreSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::StylishScoreSubsystem*>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* StylishSkillCount; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_A840136A4E657746_1>* IndividualSkillScoreMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_A840136A4E657746_4>* IndividualDamageScoreMap; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* StylishLevelTimer; // 0x28
		::System::Int32 CurrentModifierStackCount; // 0x30
		::System::Boolean LosePlatinumTrophy; // 0x34
		::System::Int32 MaxModifierStackCount; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STYLISHSCORESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STYLISHSCORESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STYLISHSCORESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterStylishSkillID(::System::Int32 stylishSkillID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STYLISHSCORESUBSYSTEM_REGISTERSTYLISHSKILLID_OFFSET))(this, stylishSkillID);
		}

		::System::Void RegisterIndividualDamageScore(::MoleMole::EntityHandle entity, ::System::Single score)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STYLISHSCORESUBSYSTEM_REGISTERINDIVIDUALDAMAGESCORE_OFFSET))(this, entity, score);
		}

		::System::Void RegisterIndividualSkillScore(::MoleMole::EntityHandle entity, ::System::Single score)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_STYLISHSCORESUBSYSTEM_REGISTERINDIVIDUALSKILLSCORE_OFFSET))(this, entity, score);
		}

		::System::Void RegisterLosePlatinumTrophy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STYLISHSCORESUBSYSTEM_REGISTERLOSEPLATINUMTROPHY_OFFSET))(this);
		}

		::System::Void RegisterOpenTreasure()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STYLISHSCORESUBSYSTEM_REGISTEROPENTREASURE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STYLISHSCORESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STYLISHSCORESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
