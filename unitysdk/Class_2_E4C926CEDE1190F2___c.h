#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;
namespace System { class Action; }

#define CLASS_2_E4C926CEDE1190F2___C_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x10F309C0)
#define CLASS_2_E4C926CEDE1190F2___C_METHOD_1_4C81D6FB33195411_OFFSET UNITYSDK_OFFSET(0x10F30A00)
#define CLASS_2_E4C926CEDE1190F2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F30970)
#define CLASS_2_E4C926CEDE1190F2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10F309B0)

inline static constexpr unsigned int Class_2_E4C926CEDE1190F2___c_TypeDefinitionIndex = 87561;

class Class_2_E4C926CEDE1190F2___c : public ::System::Object
{
public:
	static ::Class_2_E4C926CEDE1190F2___c** StaticGet___9()
	{
		return (::Class_2_E4C926CEDE1190F2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E4C926CEDE1190F2___c_TypeDefinitionIndex)->GetStaticField(0x4B0C0);
	}
	static ::System::Action** StaticGet___9__4_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E4C926CEDE1190F2___c_TypeDefinitionIndex)->GetStaticField(0x4B0C8);
	}
	static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__11_0()
	{
		return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E4C926CEDE1190F2___c_TypeDefinitionIndex)->GetStaticField(0x4B0D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E4C926CEDE1190F2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4C926CEDE1190F2___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4C926CEDE1190F2___C_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_4C81D6FB33195411(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_E4C926CEDE1190F2___C_METHOD_1_4C81D6FB33195411_OFFSET))(this, a1);
	}
};
