#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITape3DModelController; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12E40E50)
#define MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS67_0__PUSHBOOKPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0x12E40E60)

namespace MoleMole
{
	inline static constexpr unsigned int UITape3DModelController___c__DisplayClass67_0_TypeDefinitionIndex = 77370;

	class UITape3DModelController___c__DisplayClass67_0 : public ::System::Object
	{
	public:
		::MoleMole::UITape3DModelController* __4__this; // 0x10
		::UnityEngine::AnimationCurve* scaleCurve; // 0x18
		::System::Single scaleDelayTime; // 0x20
		::System::Single scale; // 0x24
		::System::Single duration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
		}

		::System::Void _PushBookPerformance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPE3DMODELCONTROLLER___C__DISPLAYCLASS67_0__PUSHBOOKPERFORMANCE_B__0_OFFSET))(this);
		}
	};
}
