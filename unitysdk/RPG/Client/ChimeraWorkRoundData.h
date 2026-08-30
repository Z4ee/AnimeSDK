#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraWorkRoundOptionsData; }
namespace RPG::GameCore { class ChimeraWorkRoundRow; }
namespace System { class String; }

#define RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_ARRANGEHINTIMAGE_OFFSET UNITYSDK_OFFSET(0xCC1B380)
#define RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_DISPLAYTEAMID_OFFSET UNITYSDK_OFFSET(0xCC1B4C0)
#define RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_ISSSR_OFFSET UNITYSDK_OFFSET(0xCC1B210)
#define RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_NEWCHIMERAIDARR_OFFSET UNITYSDK_OFFSET(0xCC1B170)
#define RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0xCC1B2B0)
#define RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_RECOMMENDEDARRANGEMENTPRESETIDARR_OFFSET UNITYSDK_OFFSET(0xCC1B420)
#define RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_ROUNDID_OFFSET UNITYSDK_OFFSET(0xCC1B060)
#define RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_WARNINGTEXT_OFFSET UNITYSDK_OFFSET(0xCC1B2C0)
#define RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_WORKIDARR_OFFSET UNITYSDK_OFFSET(0xCC1B0D0)
#define RPG_CLIENT_CHIMERAWORKROUNDDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xCC1B070)
#define RPG_CLIENT_CHIMERAWORKROUNDDATA_ISFINAL_OFFSET UNITYSDK_OFFSET(0xCC1B890)
#define RPG_CLIENT_CHIMERAWORKROUNDDATA_ISINTUTORIALONACCELERATION_OFFSET UNITYSDK_OFFSET(0xCC1B830)
#define RPG_CLIENT_CHIMERAWORKROUNDDATA_ISINTUTORIALONARRANGE_OFFSET UNITYSDK_OFFSET(0xCC1B770)
#define RPG_CLIENT_CHIMERAWORKROUNDDATA_ISINTUTORIALONMISSION_OFFSET UNITYSDK_OFFSET(0xCC1B7D0)
#define RPG_CLIENT_CHIMERAWORKROUNDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCC1B560)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkRoundData_TypeDefinitionIndex = 63567;

	class ChimeraWorkRoundData : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraWorkRoundOptionsData* _Options_k__BackingField; // 0x10
		::System::UInt32 _RoundID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoundID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_ROUNDID_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraWorkRoundRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraWorkRoundRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDDATA_GET__ROW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_WorkIDArr()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_WORKIDARR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_NewChimeraIDArr()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_NEWCHIMERAIDARR_OFFSET))(this);
		}

		::System::Boolean get_IsSsr()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_ISSSR_OFFSET))(this);
		}

		::RPG::Client::ChimeraWorkRoundOptionsData* get_Options()
		{
			return ((::RPG::Client::ChimeraWorkRoundOptionsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_OPTIONS_OFFSET))(this);
		}

		::RPG::Client::TextID get_WarningText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_WARNINGTEXT_OFFSET))(this);
		}

		::System::String* get_ArrangeHintImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_ARRANGEHINTIMAGE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RecommendedArrangementPresetIDArr()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_RECOMMENDEDARRANGEMENTPRESETIDARR_OFFSET))(this);
		}

		::System::UInt32 get_DisplayTeamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDDATA_GET_DISPLAYTEAMID_OFFSET))(this);
		}

		::System::Boolean IsInTutorialOnArrange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDDATA_ISINTUTORIALONARRANGE_OFFSET))(this);
		}

		::System::Boolean IsInTutorialOnMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDDATA_ISINTUTORIALONMISSION_OFFSET))(this);
		}

		::System::Boolean IsInTutorialOnAcceleration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDDATA_ISINTUTORIALONACCELERATION_OFFSET))(this);
		}

		::System::Boolean IsFinal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDDATA_ISFINAL_OFFSET))(this);
		}
	};
}
