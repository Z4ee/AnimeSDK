#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ScreenPlayData;
namespace MoleMole { class SceneObjectStateWidget; }

#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_CLASS_1_FB312CF27A1E37F0_METHOD_1_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x1190B6A0)
#define MOLEMOLE_SCENEOBJECTSTATEWIDGET_CLASS_1_FB312CF27A1E37F0__CTOR_OFFSET UNITYSDK_OFFSET(0x1190B690)

namespace MoleMole
{
	inline static constexpr unsigned int SceneObjectStateWidget_Class_1_FB312CF27A1E37F0_TypeDefinitionIndex = 52738;

	class SceneObjectStateWidget_Class_1_FB312CF27A1E37F0 : public ::System::Object
	{
	public:
		::MoleMole::SceneObjectStateWidget* Field_1_1; // 0x10
		::ScreenPlayData* Field_1_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_CLASS_1_FB312CF27A1E37F0__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_C706B1EC6D2E1C64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECTSTATEWIDGET_CLASS_1_FB312CF27A1E37F0_METHOD_1_C706B1EC6D2E1C64_OFFSET))(this);
		}
	};
}
