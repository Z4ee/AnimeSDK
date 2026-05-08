#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;

#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169B8110)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169B8150)
#define MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DOPOWERACTION_B__21_0_OFFSET UNITYSDK_OFFSET(0x169B8160)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemUsePopWindowController___c_TypeDefinitionIndex = 58122;

	class UIGeneralItemUsePopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGeneralItemUsePopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralItemUsePopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemUsePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40830);
		}
		static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__21_0()
		{
			return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralItemUsePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x40838);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _DoPowerAction_b__21_0(::Class_0_16E4307DCC419505_11* e)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEPOPWINDOWCONTROLLER___C__DOPOWERACTION_B__21_0_OFFSET))(this, e);
		}
	};
}
