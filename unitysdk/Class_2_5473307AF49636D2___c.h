#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;

#define CLASS_2_5473307AF49636D2___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x15035D60)
#define CLASS_2_5473307AF49636D2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15035D10)
#define CLASS_2_5473307AF49636D2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15035D50)

inline static constexpr unsigned int Class_2_5473307AF49636D2___c_TypeDefinitionIndex = 48015;

class Class_2_5473307AF49636D2___c : public ::System::Object
{
public:
	static ::Class_2_5473307AF49636D2___c** StaticGet___9()
	{
		return (::Class_2_5473307AF49636D2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5473307AF49636D2___c_TypeDefinitionIndex)->GetStaticField(0x438D0);
	}
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__4_0()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5473307AF49636D2___c_TypeDefinitionIndex)->GetStaticField(0x438D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5473307AF49636D2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5473307AF49636D2___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_5473307AF49636D2___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};
