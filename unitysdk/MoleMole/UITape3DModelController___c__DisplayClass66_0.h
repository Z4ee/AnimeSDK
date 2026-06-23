#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITape3DModelController; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12C7C510)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS66_0__FIRSTBOOKPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0x12C7C520)

namespace MoleMole
{
	inline static constexpr unsigned int UITape3DModelController___c__DisplayClass66_0_TypeDefinitionIndex = 68362;

	class UITape3DModelController___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::MoleMole::UITape3DModelController* __4__this; // 0x10
		::UnityEngine::AnimationCurve* scaleCurve; // 0x18
		::System::Single scale; // 0x20
		::System::Single scaleDelayTime; // 0x24
		::System::Single duration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Void _FirstBookPerformance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS66_0__FIRSTBOOKPERFORMANCE_B__0_OFFSET))(this);
		}
	};
}
