#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIYorozuyaChapterMap3DModelController; }

#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11E3CAC0)
#define MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___C__DISPLAYCLASS44_0__PLAYSTARTMAP_B__0_OFFSET UNITYSDK_OFFSET(0x11E3CAD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaChapterMap3DModelController___c__DisplayClass44_0_TypeDefinitionIndex = 73885;

	class UIYorozuyaChapterMap3DModelController___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::MoleMole::UIYorozuyaChapterMap3DModelController* __4__this; // 0x10
		::System::Int32 selectSphereIndex; // 0x18
		::System::Int32 defaultQuestID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStartMap_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYACHAPTERMAP3DMODELCONTROLLER___C__DISPLAYCLASS44_0__PLAYSTARTMAP_B__0_OFFSET))(this);
		}
	};
}
