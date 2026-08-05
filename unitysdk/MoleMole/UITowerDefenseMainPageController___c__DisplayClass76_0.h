#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_325;
namespace MoleMole { class UITowerDefenseMainPageController; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS76_0__ADDBANGBOOCARD_G__ISFEEENOUGH_1_OFFSET UNITYSDK_OFFSET(0x15EBB040)
#define MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS76_0__ADDBANGBOOCARD_G__ONPOINTERDOWN_0_OFFSET UNITYSDK_OFFSET(0x15EBB010)
#define MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBB000)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseMainPageController___c__DisplayClass76_0_TypeDefinitionIndex = 51881;

	class UITowerDefenseMainPageController___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::MoleMole::UITowerDefenseMainPageController* __4__this; // 0x10
		::UnityEngine::GameObject* previewModel; // 0x18
		::System::Int32 index; // 0x20
		::System::Int32 templateID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_325* _AddBangBooCard_g__OnPointerDown_0()
		{
			return ((::Class_0_16E4307DCC419505_325*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS76_0__ADDBANGBOOCARD_G__ONPOINTERDOWN_0_OFFSET))(this);
		}

		::System::Boolean _AddBangBooCard_g__IsFeeEnough_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSEMAINPAGECONTROLLER___C__DISPLAYCLASS76_0__ADDBANGBOOCARD_G__ISFEEENOUGH_1_OFFSET))(this);
		}
	};
}
