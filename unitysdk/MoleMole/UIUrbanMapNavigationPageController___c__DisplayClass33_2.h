#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A78060E28BD2CBDD.h"
#include "unitysdk/Struct_2_A7DCC2EAB8522504.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIUrbanMapNavigationPageController___c__DisplayClass33_1; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15C403F0)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__ONSKIPFADEINANIMATION_B__4_OFFSET UNITYSDK_OFFSET(0x15C40400)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__ONSKIPFADEINANIMATION_B__5_OFFSET UNITYSDK_OFFSET(0x15C404A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationPageController___c__DisplayClass33_2_TypeDefinitionIndex = 67403;

	class UIUrbanMapNavigationPageController___c__DisplayClass33_2 : public ::System::Object
	{
	public:
		::Struct_2_A7DCC2EAB8522504 sMapTrackInfo; // 0x10
		::System::Action_1<::Struct_2_A78060E28BD2CBDD>* __9__4; // 0x70
		::System::Action_1<::Struct_2_A78060E28BD2CBDD>* __9__5; // 0x78
		::MoleMole::UIUrbanMapNavigationPageController___c__DisplayClass33_1* CS___8__locals2; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__CTOR_OFFSET))(this);
		}

		::System::Void _OnSkipFadeInAnimation_b__4(::Struct_2_A78060E28BD2CBDD res)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_A78060E28BD2CBDD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__ONSKIPFADEINANIMATION_B__4_OFFSET))(this, res);
		}

		::System::Void _OnSkipFadeInAnimation_b__5(::Struct_2_A78060E28BD2CBDD res)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_A78060E28BD2CBDD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_2__ONSKIPFADEINANIMATION_B__5_OFFSET))(this, res);
		}
	};
}
