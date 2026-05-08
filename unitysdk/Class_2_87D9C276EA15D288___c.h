#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISwitchTeamBattleLevelRowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_87D9C276EA15D288___C_METHOD_1_5F89D3552ABC9645_OFFSET UNITYSDK_OFFSET(0x10F94620)
#define CLASS_2_87D9C276EA15D288___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F945D0)
#define CLASS_2_87D9C276EA15D288___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F94610)

inline static constexpr unsigned int Class_2_87D9C276EA15D288___c_TypeDefinitionIndex = 58109;

class Class_2_87D9C276EA15D288___c : public ::System::Object
{
public:
	static ::Class_2_87D9C276EA15D288___c** StaticGet___9()
	{
		return (::Class_2_87D9C276EA15D288___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_87D9C276EA15D288___c_TypeDefinitionIndex)->GetStaticField(0x394C0);
	}
	static ::System::Func_2<::MoleMole::UISwitchTeamBattleLevelRowWidgetController_Data*, ::System::UInt32>** StaticGet___9__22_0()
	{
		return (::System::Func_2<::MoleMole::UISwitchTeamBattleLevelRowWidgetController_Data*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_87D9C276EA15D288___c_TypeDefinitionIndex)->GetStaticField(0x394C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_87D9C276EA15D288___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87D9C276EA15D288___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_5F89D3552ABC9645(::MoleMole::UISwitchTeamBattleLevelRowWidgetController_Data* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::MoleMole::UISwitchTeamBattleLevelRowWidgetController_Data*))((::PBYTE)hIl2Cpp + CLASS_2_87D9C276EA15D288___C_METHOD_1_5F89D3552ABC9645_OFFSET))(this, a1);
	}
};
