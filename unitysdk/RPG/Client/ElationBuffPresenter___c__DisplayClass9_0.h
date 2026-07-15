#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_32;
class Class_2_2DB5DEF3EA4B57A8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELATIONBUFFPRESENTER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0E6B0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER___C__DISPLAYCLASS9_0__SETUPVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x18E0EE90)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenter___c__DisplayClass9_0_TypeDefinitionIndex = 67980;

	class ElationBuffPresenter___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_32*>* mergedList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupView_b__0(::Class_2_2DB5DEF3EA4B57A8* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_2DB5DEF3EA4B57A8*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C__DISPLAYCLASS9_0__SETUPVIEW_B__0_OFFSET))(this, a1, a2);
		}
	};
}
