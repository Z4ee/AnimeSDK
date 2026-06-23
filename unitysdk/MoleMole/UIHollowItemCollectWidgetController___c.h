#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowItemCollectWidgetController_GridCollectionData; }

#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x177AD520)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x177AD560)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__ONUIINIT_G__CREATEVIDEOPLAYER_4_0_OFFSET UNITYSDK_OFFSET(0x177AD570)
#define MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__ONUIINIT_G__ONRELEASE_4_1_OFFSET UNITYSDK_OFFSET(0x177AD740)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemCollectWidgetController___c_TypeDefinitionIndex = 43357;

	class UIHollowItemCollectWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHollowItemCollectWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowItemCollectWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowItemCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x49FD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::MoleMole::UIHollowItemCollectWidgetController_GridCollectionData* _OnUIInit_g__CreateVideoPlayer_4_0()
		{
			return ((::MoleMole::UIHollowItemCollectWidgetController_GridCollectionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__ONUIINIT_G__CREATEVIDEOPLAYER_4_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_g__OnRelease_4_1(::MoleMole::UIHollowItemCollectWidgetController_GridCollectionData* o)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowItemCollectWidgetController_GridCollectionData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMCOLLECTWIDGETCONTROLLER___C__ONUIINIT_G__ONRELEASE_4_1_OFFSET))(this, o);
		}
	};
}
