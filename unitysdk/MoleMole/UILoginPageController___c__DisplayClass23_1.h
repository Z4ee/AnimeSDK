#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILoginPageController___c__DisplayClass23_0; }
namespace System { class String; }

#define MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS23_1__CTOR_OFFSET UNITYSDK_OFFSET(0x147B5510)
#define MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS23_1__REQUESTSERVERLIST_B__3_OFFSET UNITYSDK_OFFSET(0x147B5700)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginPageController___c__DisplayClass23_1_TypeDefinitionIndex = 76791;

	class UILoginPageController___c__DisplayClass23_1 : public ::System::Object
	{
	public:
		::MoleMole::UILoginPageController___c__DisplayClass23_0* CS___8__locals1; // 0x10
		::System::String* url; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS23_1__CTOR_OFFSET))(this);
		}

		::System::Void _RequestServerList_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___C__DISPLAYCLASS23_1__REQUESTSERVERLIST_B__3_OFFSET))(this);
		}
	};
}
