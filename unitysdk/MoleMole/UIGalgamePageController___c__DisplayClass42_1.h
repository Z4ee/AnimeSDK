#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D36393D5F41E9497;
namespace MoleMole { class UIGalgamePageController___c__DisplayClass42_0; }
namespace System { class String; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS42_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18401670)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS42_1__PLAYARGUESETTLENODE_B__8_OFFSET UNITYSDK_OFFSET(0x18401680)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass42_1_TypeDefinitionIndex = 62766;

	class UIGalgamePageController___c__DisplayClass42_1 : public ::System::Object
	{
	public:
		::System::String* poseKey; // 0x10
		::Class_1_D36393D5F41E9497* capturedSetting; // 0x18
		::MoleMole::UIGalgamePageController___c__DisplayClass42_0* CS___8__locals1; // 0x20
		::System::String* facialKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS42_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayArgueSettleNode_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS42_1__PLAYARGUESETTLENODE_B__8_OFFSET))(this);
		}
	};
}
