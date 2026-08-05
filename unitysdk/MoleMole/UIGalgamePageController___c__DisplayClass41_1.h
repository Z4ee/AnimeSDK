#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D36393D5F41E9497;
namespace MoleMole { class UIGalgamePageController___c__DisplayClass41_0; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18400FB0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_1__PLAYARGUEHEALTHCHANGENODE_B__2_OFFSET UNITYSDK_OFFSET(0x18400FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass41_1_TypeDefinitionIndex = 62778;

	class UIGalgamePageController___c__DisplayClass41_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass41_0* CS___8__locals1; // 0x10
		::Class_1_D36393D5F41E9497* capturedSetting; // 0x18
		::System::String* facialKey; // 0x20
		::System::String* poseKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayArgueHealthChangeNode_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_1__PLAYARGUEHEALTHCHANGENODE_B__2_OFFSET))(this);
		}
	};
}
