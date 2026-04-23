#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_29;
class Class_2_354AD1D19898E348;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELATIONBUFFPRESENTER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA216950)
#define RPG_CLIENT_ELATIONBUFFPRESENTER___C__DISPLAYCLASS8_0__SETUPVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xA217010)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenter___c__DisplayClass8_0_TypeDefinitionIndex = 65610;

	class ElationBuffPresenter___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_29*>* mergedList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupView_b__0(::Class_2_354AD1D19898E348* panel, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_354AD1D19898E348*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C__DISPLAYCLASS8_0__SETUPVIEW_B__0_OFFSET))(this, panel, i);
		}
	};
}
