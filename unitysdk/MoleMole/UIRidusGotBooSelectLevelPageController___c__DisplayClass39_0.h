#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_877;
namespace MoleMole { class UIRidusGotBooSelectLevelPageController; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x147F2AD0)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS39_0__GETDEFAULTLEVELID_B__0_OFFSET UNITYSDK_OFFSET(0x147F2AE0)
#define MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS39_0__GETDEFAULTLEVELID_B__2_OFFSET UNITYSDK_OFFSET(0x147F2B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooSelectLevelPageController___c__DisplayClass39_0_TypeDefinitionIndex = 68329;

	class UIRidusGotBooSelectLevelPageController___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::Class_2_208CC9941471731A_877*>* __9__2; // 0x10
		::MoleMole::UIRidusGotBooSelectLevelPageController* __4__this; // 0x18
		::System::Int32 questID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDefaultLevelID_b__0(::Class_2_208CC9941471731A_877* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_877*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS39_0__GETDEFAULTLEVELID_B__0_OFFSET))(this, x);
		}

		::System::Boolean _GetDefaultLevelID_b__2(::Class_2_208CC9941471731A_877* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_877*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOSELECTLEVELPAGECONTROLLER___C__DISPLAYCLASS39_0__GETDEFAULTLEVELID_B__2_OFFSET))(this, x);
		}
	};
}
