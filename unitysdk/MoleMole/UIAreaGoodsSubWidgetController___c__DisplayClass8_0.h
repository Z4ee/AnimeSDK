#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x176BCAB0)
#define MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCARDNUM_B__1_OFFSET UNITYSDK_OFFSET(0x176BCAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaGoodsSubWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 58431;

	class UIAreaGoodsSubWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* sameGenreList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshCardNum_b__1(::Class_1_0D6706375CDAAE8C* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREAGOODSSUBWIDGETCONTROLLER___C__DISPLAYCLASS8_0__REFRESHCARDNUM_B__1_OFFSET))(this, x);
		}
	};
}
