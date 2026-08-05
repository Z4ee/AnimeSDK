#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_458606D78183C8FA;
namespace MoleMole { class UIGalgamePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS140_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18809050)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS140_0__PLAYSHOW3DMODELNODE_B__0_OFFSET UNITYSDK_OFFSET(0x18809060)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS140_0__PLAYSHOW3DMODELNODE_B__1_OFFSET UNITYSDK_OFFSET(0x18809560)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass140_0_TypeDefinitionIndex = 62816;

	class UIGalgamePageController___c__DisplayClass140_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::Class_2_458606D78183C8FA* show3DModelNode; // 0x18
		::MoleMole::UIGalgamePageController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS140_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayShow3DModelNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS140_0__PLAYSHOW3DMODELNODE_B__0_OFFSET))(this);
		}

		::System::Void _PlayShow3DModelNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS140_0__PLAYSHOW3DMODELNODE_B__1_OFFSET))(this);
		}
	};
}
