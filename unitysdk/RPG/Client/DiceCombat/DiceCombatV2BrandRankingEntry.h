#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_GET_PERCENT_OFFSET UNITYSDK_OFFSET(0x1C42EA10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_METHOD_5_13E8B1F3F0042AA5_OFFSET UNITYSDK_OFFSET(0x1C42EC30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_METHOD_5_226558B48AF9A6C1_OFFSET UNITYSDK_OFFSET(0x1C42EA30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_METHOD_5_70459B7C790C82DB_OFFSET UNITYSDK_OFFSET(0x1C42EF50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_METHOD_5_AC088C028EF9B921_OFFSET UNITYSDK_OFFSET(0x1C42EE10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_SET_PERCENT_OFFSET UNITYSDK_OFFSET(0x1C42EA20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C42F0E0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BrandRankingEntry_TypeDefinitionIndex = 75726;

	class DiceCombatV2BrandRankingEntry : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LocalizedText* _RankText; // 0x18
		::UnityEngine::UI::Slider* _RankSlider; // 0x20
		::UnityEngine::UI::Slider* _RankHorizontalSlider; // 0x28
		::RPG::Client::UIValueChangeAnimation* _RankSliderAnimation; // 0x30
		::RPG::Client::LocalizedText* _PercentText; // 0x38
		::UnityEngine::UI::Slider* _PercentSlider; // 0x40
		::System::Single _Percent_k__BackingField; // 0x48
		::System::Int32 OAIEBAKJKIG; // 0x4C
		::System::Boolean DLDPAGEBIKA; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Single get_Percent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_GET_PERCENT_OFFSET))(this);
		}

		::System::Void set_Percent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_SET_PERCENT_OFFSET))(this, a1);
		}

		::System::Void Method_5_226558B48AF9A6C1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_METHOD_5_226558B48AF9A6C1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_13E8B1F3F0042AA5(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_METHOD_5_13E8B1F3F0042AA5_OFFSET))(this, a1);
		}

		::System::Void Method_5_AC088C028EF9B921(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_METHOD_5_AC088C028EF9B921_OFFSET))(this, a1);
		}

		::System::Void Method_5_70459B7C790C82DB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BRANDRANKINGENTRY_METHOD_5_70459B7C790C82DB_OFFSET))(this, a1);
		}
	};
}
