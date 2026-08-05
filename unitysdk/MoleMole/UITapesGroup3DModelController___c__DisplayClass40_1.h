#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UITape3DModelController; }
namespace MoleMole { class UITapesGroup3DModelController___c__DisplayClass40_0; }
namespace System { class Action; }

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS40_1__CTOR_OFFSET UNITYSDK_OFFSET(0x140D0A50)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS40_1__PERFORMANCEEXPAND_B__1_OFFSET UNITYSDK_OFFSET(0x140D0A60)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS40_1__PERFORMANCEEXPAND_B__2_OFFSET UNITYSDK_OFFSET(0x140D0C20)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController___c__DisplayClass40_1_TypeDefinitionIndex = 60811;

	class UITapesGroup3DModelController___c__DisplayClass40_1 : public ::System::Object
	{
	public:
		::MoleMole::UITapesGroup3DModelController___c__DisplayClass40_0* CS___8__locals1; // 0x10
		::System::Action* __9__2; // 0x18
		::MoleMole::UITape3DModelController* tape; // 0x20
		::UnityEngine::Vector3 targetPos; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS40_1__CTOR_OFFSET))(this);
		}

		::System::Void _PerformanceExpand_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS40_1__PERFORMANCEEXPAND_B__1_OFFSET))(this);
		}

		::System::Void _PerformanceExpand_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS40_1__PERFORMANCEEXPAND_B__2_OFFSET))(this);
		}
	};
}
