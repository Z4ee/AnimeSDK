#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_11FD83788053949F_3.h"
#include "unitysdk/Struct_2_A840136A4E657746.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_STYLISHSCORESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1817B0F0)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1817B410)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM_REGISTERINDIVIDUALDAMAGESCORE_OFFSET UNITYSDK_OFFSET(0x1817B710)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM_REGISTERINDIVIDUALSKILLSCORE_OFFSET UNITYSDK_OFFSET(0x1817B9D0)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM_REGISTERLOSEPLATINUMTROPHY_OFFSET UNITYSDK_OFFSET(0x1817BCD0)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM_REGISTEROPENTREASURE_OFFSET UNITYSDK_OFFSET(0x1817BD10)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM_REGISTERSTYLISHSKILLID_OFFSET UNITYSDK_OFFSET(0x1817B650)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1817C420)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1817C440)
#define MOLEMOLE_STYLISHSCORESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1817C4D0)

namespace MoleMole
{
	inline static constexpr unsigned int StylishScoreSubsystem_TypeDefinitionIndex = 51461;

	class StylishScoreSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::StylishScoreSubsystem*>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_A840136A4E657746>* IndividualDamageScoreMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* StylishSkillCount; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* StylishLevelTimer; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_11FD83788053949F_3>* IndividualSkillScoreMap; // 0x28
		::System::Boolean LosePlatinumTrophy; // 0x30
		::System::Int32 CurrentModifierStackCount; // 0x34
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
