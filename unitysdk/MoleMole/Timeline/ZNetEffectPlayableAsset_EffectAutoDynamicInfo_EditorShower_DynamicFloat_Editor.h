#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_DYNAMICFLOAT_EDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x123811B0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor_TypeDefinitionIndex = 79667;

	class ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower_DynamicFloat_Editor : public ::System::Object
	{
	public:
		::System::Single val; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_EFFECTAUTODYNAMICINFO_EDITORSHOWER_DYNAMICFLOAT_EDITOR__CTOR_OFFSET))(this);
		}
	};
}
