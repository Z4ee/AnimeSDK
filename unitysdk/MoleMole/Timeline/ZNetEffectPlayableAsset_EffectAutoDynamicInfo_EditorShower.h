#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D4F14A9976FAEBF1_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor; }

#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_METHOD_1_02DAEF5283702E75_OFFSET UNITYSDK_OFFSET(0x15B6AC40)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_METHOD_1_914D8C3F79DB2AF9_OFFSET UNITYSDK_OFFSET(0x15B6B100)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_METHOD_1_9DA2AA71419777F5_OFFSET UNITYSDK_OFFSET(0x15B6ABA0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_METHOD_1_DF7E81ADDCFE3A0C_OFFSET UNITYSDK_OFFSET(0x15B6B060)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6AB90)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_TypeDefinitionIndex = 79666;

	class ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower : public ::System::Object
	{
	public:
		::Enum_3_D4F14A9976FAEBF1_1 EffectTarget; // 0x10
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* EffStartSizeX; // 0x18
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* EffStartSizeY; // 0x20
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* EffFadeInTime; // 0x28
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* EffHoldTime; // 0x30
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* EffFadeOutTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Config::DynamicFloat* Method_1_9DA2AA71419777F5(::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* a1)
		{
			return ((::MoleMole::Config::DynamicFloat*(*)(::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_METHOD_1_9DA2AA71419777F5_OFFSET))(a1);
		}

		::System::Void Method_1_02DAEF5283702E75(::MoleMole::Config::EffectAutoDynamicValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectAutoDynamicValue*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_METHOD_1_02DAEF5283702E75_OFFSET))(this, a1);
		}

		static ::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor* Method_1_DF7E81ADDCFE3A0C(::MoleMole::Config::DynamicFloat* a1)
		{
			return ((::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor*(*)(::MoleMole::Config::DynamicFloat*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_METHOD_1_DF7E81ADDCFE3A0C_OFFSET))(a1);
		}

		::MoleMole::Config::EffectAutoDynamicValue* Method_1_914D8C3F79DB2AF9(::MoleMole::Config::EffectAutoDynamicValue* a1)
		{
			return ((::MoleMole::Config::EffectAutoDynamicValue*(*)(::PVOID, ::MoleMole::Config::EffectAutoDynamicValue*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_METHOD_1_914D8C3F79DB2AF9_OFFSET))(this, a1);
		}
	};
}
