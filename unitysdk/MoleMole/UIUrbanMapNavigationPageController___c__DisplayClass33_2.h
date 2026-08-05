#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A7DCC2EAB8522504.h"
#include "unitysdk/Struct_2_ABF9DCB0C904F609.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIUrbanMapNavigationPageController___c__DisplayClass33_1; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16103EC0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__ONSKIPFADEINANIMATION_B__4_OFFSET UNITYSDK_OFFSET(0x16103ED0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__ONSKIPFADEINANIMATION_B__5_OFFSET UNITYSDK_OFFSET(0x16103F70)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationPageController___c__DisplayClass33_2_TypeDefinitionIndex = 71782;

	class UIUrbanMapNavigationPageController___c__DisplayClass33_2 : public ::System::Object
	{
	public:
		::MoleMole::UIUrbanMapNavigationPageController___c__DisplayClass33_1* CS___8__locals2; // 0x10
		::System::Action_1<::Struct_2_ABF9DCB0C904F609>* __9__4; // 0x18
		::System::Action_1<::Struct_2_ABF9DCB0C904F609>* __9__5; // 0x20
		::Struct_2_A7DCC2EAB8522504 sMapTrackInfo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnSkipFadeInAnimation_b__4(::Struct_2_ABF9DCB0C904F609 res)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_ABF9DCB0C904F609))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__ONSKIPFADEINANIMATION_B__4_OFFSET))(this, res);
		}

		::System::Void _OnSkipFadeInAnimation_b__5(::Struct_2_ABF9DCB0C904F609 res)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_ABF9DCB0C904F609))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__ONSKIPFADEINANIMATION_B__5_OFFSET))(this, res);
		}
	};
}
