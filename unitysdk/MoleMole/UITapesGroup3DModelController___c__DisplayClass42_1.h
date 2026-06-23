#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UITape3DModelController; }
namespace MoleMole { class UITapesGroup3DModelController___c__DisplayClass42_0; }

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS42_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16DEAEE0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS42_1__PERFORMANCESHRINK_B__1_OFFSET UNITYSDK_OFFSET(0x16DEAEF0)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController___c__DisplayClass42_1_TypeDefinitionIndex = 72711;

	class UITapesGroup3DModelController___c__DisplayClass42_1 : public ::System::Object
	{
	public:
		::MoleMole::UITape3DModelController* tape; // 0x10
		::MoleMole::UITapesGroup3DModelController___c__DisplayClass42_0* CS___8__locals1; // 0x18
		::UnityEngine::Vector3 targetPos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS42_1__CTOR_OFFSET))(this);
		}

		::System::Void _PerformanceShrink_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS42_1__PERFORMANCESHRINK_B__1_OFFSET))(this);
		}
	};
}
