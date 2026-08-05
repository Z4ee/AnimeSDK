#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ICharacterScriptConfig.h"

namespace MoleMole { class DitherConfig; }
namespace MoleMole { class QTECameraBaseInfo; }
namespace MoleMole { class QTECameraInfo; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_FILTERQTECAMERABASEINFO_OFFSET UNITYSDK_OFFSET(0x12CA96D0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_GETALLCONFIGABILITYIDS_OFFSET UNITYSDK_OFFSET(0x12CA8760)
#define MOLEMOLE_CHARACTERSCRIPTCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA98B0)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfigBase_TypeDefinitionIndex = 70279;

	class CharacterScriptConfigBase : public ::MoleMole::ICharacterScriptConfig
	{
	public:
		::System::Single OverrideHUDUIHeight; // 0x60
		::Il2CppArray<::System::String*>* DefaultAbilityList; // 0x68
		::Il2CppArray<::System::Int32>* ConfigAbilityList; // 0x70
		::Il2CppArray<::System::String*>* MPBattleAbilityList; // 0x78
		::Il2CppArray<::System::Int32>* MPConfigAbilityList; // 0x80
		::MoleMole::Config::ConfigPosRot* UltimatePosRot; // 0x88
		::System::Boolean CheckStunResetOnlyUseRootPos; // 0x90
		::System::Single ExtraStunResetDistance; // 0x94
		::MoleMole::Config::ConfigPosRot* QTEOverridePosRot; // 0x98
		::MoleMole::Config::ConfigPosRot* ExQTEOverridePosRot; // 0xA0
		::MoleMole::Config::ConfigPosRot* BeQTEOverridePosRot; // 0xA8
		::MoleMole::Config::ConfigPosRot* BangbooQTEOverridePosRot; // 0xB0
		::System::Boolean HasBangbooQTE; // 0xB8
		::System::Boolean IsExtraAvatarCount; // 0xB9
		::System::Single OverrideBangbooQTEGlobalCD; // 0xBC
		::System::Boolean UseOverrideBangbooQTEGlobalCD; // 0xC0
		::System::Boolean QTENoSwitchAvatar; // 0xC1
		::MoleMole::Config::ConfigPosRot* CommonAidOverridePosRotByBangbooQTE; // 0xC8
		::MoleMole::QTECameraBaseInfo* DefautQTECameraInfo; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::QTECameraInfo*>*>* QteCameraInfosList; // 0xD8
		::MoleMole::Config::ConfigPosRot* BangbooAidSkillOverridePosRot; // 0xE0
		::MoleMole::QTECameraBaseInfo* BangbooAidSkillDefaultCameraInfo; // 0xE8
		::MoleMole::Config::ConfigPosRot* BangbooAidSkillEndAvatarPosRot; // 0xF0
		::System::Single ExQTEThresholdValue; // 0xF8
		::System::Single ExQTEConsumeValue; // 0xFC
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigPosRot*>* CoAttackPartnerOverridePosRotMap; // 0x100
		::MoleMole::DitherConfig* CharacterDitherConfig; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Collections::IEnumerable* GetAllConfigAbilityIDs()
		{
			return ((::System::Collections::IEnumerable*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_GETALLCONFIGABILITYIDS_OFFSET))();
		}

		::System::Collections::Generic::IEnumerable_1<::System::Type*>* FilterQTECameraBaseInfo()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIGBASE_FILTERQTECAMERABASEINFO_OFFSET))(this);
		}
	};
}
