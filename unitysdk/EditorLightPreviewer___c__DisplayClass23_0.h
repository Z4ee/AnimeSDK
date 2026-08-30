#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/System/Object.h"

namespace ScenenLightManager { class LightSetQualityExportData; }

#define EDITORLIGHTPREVIEWER___C__DISPLAYCLASS23_0__CHANGEQUALITY_B__0_OFFSET UNITYSDK_OFFSET(0x10674AF0)
#define EDITORLIGHTPREVIEWER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10672D30)

inline static constexpr unsigned int EditorLightPreviewer___c__DisplayClass23_0_TypeDefinitionIndex = 47805;

class EditorLightPreviewer___c__DisplayClass23_0 : public ::System::Object
{
public:
	::RPG::CustomRP::CustomLightQualityFilter qf; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ChangeQuality_b__0(::ScenenLightManager::LightSetQualityExportData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::ScenenLightManager::LightSetQualityExportData*))((::PBYTE)hIl2Cpp + EDITORLIGHTPREVIEWER___C__DISPLAYCLASS23_0__CHANGEQUALITY_B__0_OFFSET))(this, a1);
	}
};
