#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIUrbanMapNavigationPageController___c__DisplayClass33_0; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10401970)
#define MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_1__ONSKIPFADEINANIMATION_B__3_OFFSET UNITYSDK_OFFSET(0x10401980)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationPageController___c__DisplayClass33_1_TypeDefinitionIndex = 67404;

	class UIUrbanMapNavigationPageController___c__DisplayClass33_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _markSinkToBottom; // 0x10
		::MoleMole::UIUrbanMapNavigationPageController___c__DisplayClass33_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_1__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnSkipFadeInAnimation_b__3(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONPAGECONTROLLER___C__DISPLAYCLASS33_1__ONSKIPFADEINANIMATION_B__3_OFFSET))(this, a, b);
		}
	};
}
