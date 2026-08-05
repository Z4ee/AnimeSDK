#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_409;
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F6AE80)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS49_0__REFRESHTOPTABS_B__1_OFFSET UNITYSDK_OFFSET(0x15F6AE90)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSelectLevelPageController___c__DisplayClass49_0_TypeDefinitionIndex = 76798;

	class UIRidusGotBooSelectLevelPageController___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::Class_2_208CC9941471731A_409*>* __9__1; // 0x10
		::System::Int32 questID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshTopTabs_b__1(::Class_2_208CC9941471731A_409* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_409*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS49_0__REFRESHTOPTABS_B__1_OFFSET))(this, x);
		}
	};
}
