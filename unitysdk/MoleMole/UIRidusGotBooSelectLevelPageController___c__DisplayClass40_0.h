#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_125;
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x161524E0)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS40_0__GETDEFAULTTABINDEXANDLEVELINDEX_B__1_OFFSET UNITYSDK_OFFSET(0x16154870)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSelectLevelPageController___c__DisplayClass40_0_TypeDefinitionIndex = 39586;

	class UIRidusGotBooSelectLevelPageController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::Class_2_208CC9941471731A_125*>* __9__1; // 0x10
		::System::Int32 defaultLevelID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDefaultTabIndexAndLevelIndex_b__1(::Class_2_208CC9941471731A_125* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_125*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS40_0__GETDEFAULTTABINDEXANDLEVELINDEX_B__1_OFFSET))(this, x);
		}
	};
}
