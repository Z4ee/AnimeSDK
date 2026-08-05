#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_758D79FBA4563ECB_Struct_2_251F1B827E8CC10E.h"
#include "unitysdk/Enum_3_5DA5A8B5C7266F47.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_758D79FBA4563ECB_METHOD_1_0DE8B4092C368D9D_OFFSET UNITYSDK_OFFSET(0x198F6670)
#define CLASS_1_758D79FBA4563ECB_METHOD_1_4E22A557C69DEFFE_OFFSET UNITYSDK_OFFSET(0x198F6B90)
#define CLASS_1_758D79FBA4563ECB_METHOD_1_5983692E229F7553_OFFSET UNITYSDK_OFFSET(0x198F68E0)
#define CLASS_1_758D79FBA4563ECB_METHOD_1_A17981F7DA696C7D_OFFSET UNITYSDK_OFFSET(0x198F6E90)
#define CLASS_1_758D79FBA4563ECB_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x198F7070)
#define CLASS_1_758D79FBA4563ECB_METHOD_1_DCD20DAA04D9D1E2_OFFSET UNITYSDK_OFFSET(0x198F7270)
#define CLASS_1_758D79FBA4563ECB__CCTOR_OFFSET UNITYSDK_OFFSET(0x198F65E0)

inline static constexpr unsigned int Class_1_758D79FBA4563ECB_TypeDefinitionIndex = 45779;

class Class_1_758D79FBA4563ECB : public ::System::Object
{
public:
	static ::Il2CppArray<::Enum_3_5DA5A8B5C7266F47>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::Enum_3_5DA5A8B5C7266F47>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_758D79FBA4563ECB_TypeDefinitionIndex)->GetStaticField(0x4CC60);
	}
	static ::System::Collections::Generic::List_1<::Class_1_758D79FBA4563ECB_Struct_2_251F1B827E8CC10E>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Class_1_758D79FBA4563ECB_Struct_2_251F1B827E8CC10E>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_758D79FBA4563ECB_TypeDefinitionIndex)->GetStaticField(0x4CC68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_758D79FBA4563ECB__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0DE8B4092C368D9D(::System::Boolean a1, ::MoleMole::Config::InputGroup a2, ::Enum_3_5DA5A8B5C7266F47 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::InputGroup, ::Enum_3_5DA5A8B5C7266F47, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_758D79FBA4563ECB_METHOD_1_0DE8B4092C368D9D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5983692E229F7553(::Enum_3_5DA5A8B5C7266F47 a1, ::MoleMole::Config::InputGroup a2)
	{
		return ((::System::Void(*)(::Enum_3_5DA5A8B5C7266F47, ::MoleMole::Config::InputGroup))((::PBYTE)hIl2Cpp + CLASS_1_758D79FBA4563ECB_METHOD_1_5983692E229F7553_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4E22A557C69DEFFE(::System::Boolean a1, ::MoleMole::Config::InputGroup a2, ::Enum_3_5DA5A8B5C7266F47 a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::InputGroup, ::Enum_3_5DA5A8B5C7266F47, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_758D79FBA4563ECB_METHOD_1_4E22A557C69DEFFE_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_A17981F7DA696C7D(::System::Boolean a1, ::MoleMole::Config::InputGroup a2, ::Enum_3_5DA5A8B5C7266F47 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::InputGroup, ::Enum_3_5DA5A8B5C7266F47, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_758D79FBA4563ECB_METHOD_1_A17981F7DA696C7D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_758D79FBA4563ECB_METHOD_1_B9A97467188E4B69_OFFSET))();
	}

	static ::System::Void Method_1_DCD20DAA04D9D1E2(::System::Boolean a1, ::MoleMole::Config::InputGroup a2, ::Enum_3_5DA5A8B5C7266F47 a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::InputGroup, ::Enum_3_5DA5A8B5C7266F47, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_758D79FBA4563ECB_METHOD_1_DCD20DAA04D9D1E2_OFFSET))(a1, a2, a3, a4, a5);
	}
};
