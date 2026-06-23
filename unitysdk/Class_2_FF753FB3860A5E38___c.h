#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1D257F0D6462A2AD;
namespace MoleMole { class UISummerEventPopGetRowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_FF753FB3860A5E38___C_METHOD_1_DC5B1ED314A5A5DE_OFFSET UNITYSDK_OFFSET(0x12E45F30)
#define CLASS_2_FF753FB3860A5E38___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E45EE0)
#define CLASS_2_FF753FB3860A5E38___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12E45F20)

inline static constexpr unsigned int Class_2_FF753FB3860A5E38___c_TypeDefinitionIndex = 68715;

class Class_2_FF753FB3860A5E38___c : public ::System::Object
{
public:
	static ::Class_2_FF753FB3860A5E38___c** StaticGet___9()
	{
		return (::Class_2_FF753FB3860A5E38___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FF753FB3860A5E38___c_TypeDefinitionIndex)->GetStaticField(0x475C0);
	}
	static ::System::Func_2<::Class_1_1D257F0D6462A2AD*, ::MoleMole::UISummerEventPopGetRowWidgetController_Data*>** StaticGet___9__5_2()
	{
		return (::System::Func_2<::Class_1_1D257F0D6462A2AD*, ::MoleMole::UISummerEventPopGetRowWidgetController_Data*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FF753FB3860A5E38___c_TypeDefinitionIndex)->GetStaticField(0x475C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FF753FB3860A5E38___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF753FB3860A5E38___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UISummerEventPopGetRowWidgetController_Data* Method_1_DC5B1ED314A5A5DE(::Class_1_1D257F0D6462A2AD* a1)
	{
		return ((::MoleMole::UISummerEventPopGetRowWidgetController_Data*(*)(::PVOID, ::Class_1_1D257F0D6462A2AD*))((::PBYTE)hIl2Cpp + CLASS_2_FF753FB3860A5E38___C_METHOD_1_DC5B1ED314A5A5DE_OFFSET))(this, a1);
	}
};
