#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4E990E7B03DDCE80_Struct_2_251F1B827E8CC10E.h"
#include "unitysdk/Enum_3_5DA5A8B5C7266F47.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4E990E7B03DDCE80_METHOD_1_0DE8B4092C368D9D_OFFSET UNITYSDK_OFFSET(0xFEF2D80)
#define CLASS_1_4E990E7B03DDCE80_METHOD_1_3E9D38749D34ADA8_OFFSET UNITYSDK_OFFSET(0xFEF2BA0)
#define CLASS_1_4E990E7B03DDCE80_METHOD_1_4E22A557C69DEFFE_OFFSET UNITYSDK_OFFSET(0xFEF2FF0)
#define CLASS_1_4E990E7B03DDCE80_METHOD_1_609597AE5EDC82C3_OFFSET UNITYSDK_OFFSET(0xFEF27D0)
#define CLASS_1_4E990E7B03DDCE80_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xFEF32F0)
#define CLASS_1_4E990E7B03DDCE80_METHOD_1_E59A65F4327321E2_OFFSET UNITYSDK_OFFSET(0xFEF28F0)
#define CLASS_1_4E990E7B03DDCE80__CCTOR_OFFSET UNITYSDK_OFFSET(0xFEF2740)

inline static constexpr unsigned int Class_1_4E990E7B03DDCE80_TypeDefinitionIndex = 74649;

class Class_1_4E990E7B03DDCE80 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::Class_1_4E990E7B03DDCE80_Struct_2_251F1B827E8CC10E>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_4E990E7B03DDCE80_Struct_2_251F1B827E8CC10E>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4E990E7B03DDCE80_TypeDefinitionIndex)->GetStaticField(0x47380);
	}
	static ::Il2CppArray<::Enum_3_5DA5A8B5C7266F47>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Enum_3_5DA5A8B5C7266F47>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4E990E7B03DDCE80_TypeDefinitionIndex)->GetStaticField(0x47388);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4E990E7B03DDCE80__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_609597AE5EDC82C3(::System::Boolean a1, ::MoleMole::Config::InputGroup a2, ::Enum_3_5DA5A8B5C7266F47 a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::InputGroup, ::Enum_3_5DA5A8B5C7266F47, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E990E7B03DDCE80_METHOD_1_609597AE5EDC82C3_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_4E22A557C69DEFFE(::System::Boolean a1, ::MoleMole::Config::InputGroup a2, ::Enum_3_5DA5A8B5C7266F47 a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::InputGroup, ::Enum_3_5DA5A8B5C7266F47, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E990E7B03DDCE80_METHOD_1_4E22A557C69DEFFE_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4E990E7B03DDCE80_METHOD_1_B9A97467188E4B69_OFFSET))();
	}

	static ::System::Void Method_1_0DE8B4092C368D9D(::System::Boolean a1, ::MoleMole::Config::InputGroup a2, ::Enum_3_5DA5A8B5C7266F47 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::InputGroup, ::Enum_3_5DA5A8B5C7266F47, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4E990E7B03DDCE80_METHOD_1_0DE8B4092C368D9D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_E59A65F4327321E2(::Enum_3_5DA5A8B5C7266F47 a1, ::MoleMole::Config::InputGroup a2)
	{
		return ((::System::Void(*)(::Enum_3_5DA5A8B5C7266F47, ::MoleMole::Config::InputGroup))((::PBYTE)hIl2Cpp + CLASS_1_4E990E7B03DDCE80_METHOD_1_E59A65F4327321E2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3E9D38749D34ADA8(::System::Boolean a1, ::MoleMole::Config::InputGroup a2, ::Enum_3_5DA5A8B5C7266F47 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::InputGroup, ::Enum_3_5DA5A8B5C7266F47, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4E990E7B03DDCE80_METHOD_1_3E9D38749D34ADA8_OFFSET))(a1, a2, a3, a4);
	}
};
