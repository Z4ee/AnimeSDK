#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D36393D5F41E9497;
namespace MoleMole { class UIGalgamePageController___c__DisplayClass33_0; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19FA8C40)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_1__PLAYARGUESTARTNODE_B__6_OFFSET UNITYSDK_OFFSET(0x19FA8C50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass33_1_TypeDefinitionIndex = 62790;

	class UIGalgamePageController___c__DisplayClass33_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGalgamePageController___c__DisplayClass33_0* CS___8__locals1; // 0x10
		::System::String* poseKey; // 0x18
		::System::String* facialKey; // 0x20
		::Class_1_D36393D5F41E9497* capturedSetting; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayArgueStartNode_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS33_1__PLAYARGUESTARTNODE_B__6_OFFSET))(this);
		}
	};
}
