#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_40264A1FD04B14F7;
namespace MoleMole { class UISummerEventPopGetRowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_BAD38169B46760F2___C_METHOD_1_DC5B1ED314A5A5DE_OFFSET UNITYSDK_OFFSET(0x15ADCA80)
#define CLASS_2_BAD38169B46760F2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15ADCA30)
#define CLASS_2_BAD38169B46760F2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15ADCA70)

inline static constexpr unsigned int Class_2_BAD38169B46760F2___c_TypeDefinitionIndex = 43574;

class Class_2_BAD38169B46760F2___c : public ::System::Object
{
public:
	static ::Class_2_BAD38169B46760F2___c** StaticGet___9()
	{
		return (::Class_2_BAD38169B46760F2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BAD38169B46760F2___c_TypeDefinitionIndex)->GetStaticField(0x31600);
	}
	static ::System::Func_2<::Class_1_40264A1FD04B14F7*, ::MoleMole::UISummerEventPopGetRowWidgetController_Data*>** StaticGet___9__6_2()
	{
		return (::System::Func_2<::Class_1_40264A1FD04B14F7*, ::MoleMole::UISummerEventPopGetRowWidgetController_Data*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BAD38169B46760F2___c_TypeDefinitionIndex)->GetStaticField(0x31608);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BAD38169B46760F2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAD38169B46760F2___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UISummerEventPopGetRowWidgetController_Data* Method_1_DC5B1ED314A5A5DE(::Class_1_40264A1FD04B14F7* a1)
	{
		return ((::MoleMole::UISummerEventPopGetRowWidgetController_Data*(*)(::PVOID, ::Class_1_40264A1FD04B14F7*))((::PBYTE)hIl2Cpp + CLASS_2_BAD38169B46760F2___C_METHOD_1_DC5B1ED314A5A5DE_OFFSET))(this, a1);
	}
};
