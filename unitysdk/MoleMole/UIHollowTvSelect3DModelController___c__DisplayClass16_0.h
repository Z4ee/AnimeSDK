#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowTvSelect3DModelController; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16F94970)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___C__DISPLAYCLASS16_0__LOOPBLENDTOENDANIM_B__0_OFFSET UNITYSDK_OFFSET(0x16F94980)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTvSelect3DModelController___c__DisplayClass16_0_TypeDefinitionIndex = 43005;

	class UIHollowTvSelect3DModelController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowTvSelect3DModelController* __4__this; // 0x10
		::System::Action* onFinishOrInterrupt; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoopBlendToEndAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___C__DISPLAYCLASS16_0__LOOPBLENDTOENDANIM_B__0_OFFSET))(this);
		}
	};
}
