#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B9D4232CE6441715_Struct_2_CF1754DDA8B382D4.h"
#include "unitysdk/Enum_3_2E8B563F910AABF2.h"
#include "unitysdk/MoleMole/LogicAxis3DInputType.h"
#include "unitysdk/System/Object.h"

class Class_2_0206DD479BB5C906;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::InputSystem { class Sensor; }

#define CLASS_1_B9D4232CE6441715_METHOD_1_09B013582619F7A1_OFFSET UNITYSDK_OFFSET(0x10FD70C0)
#define CLASS_1_B9D4232CE6441715_METHOD_1_60DB74FC4A162B4A_OFFSET UNITYSDK_OFFSET(0x10FD6B90)
#define CLASS_1_B9D4232CE6441715_METHOD_1_7519ACADC6E45E6D_OFFSET UNITYSDK_OFFSET(0x10FD76D0)
#define CLASS_1_B9D4232CE6441715_METHOD_1_8546B835EB200719_1_OFFSET UNITYSDK_OFFSET(0x10FD84A0)
#define CLASS_1_B9D4232CE6441715_METHOD_1_8546B835EB200719_OFFSET UNITYSDK_OFFSET(0x10FD8280)
#define CLASS_1_B9D4232CE6441715_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x10FD66F0)
#define CLASS_1_B9D4232CE6441715_METHOD_1_D21D06748B8350D9_OFFSET UNITYSDK_OFFSET(0x10FD7360)
#define CLASS_1_B9D4232CE6441715_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x10FD8850)
#define CLASS_1_B9D4232CE6441715_METHOD_1_D80637ACAA691130_1_OFFSET UNITYSDK_OFFSET(0x10FD8E40)
#define CLASS_1_B9D4232CE6441715_METHOD_1_D80637ACAA691130_OFFSET UNITYSDK_OFFSET(0x10FD86C0)
#define CLASS_1_B9D4232CE6441715__CCTOR_OFFSET UNITYSDK_OFFSET(0x10FD7BC0)
#define CLASS_1_B9D4232CE6441715__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD6650)

inline static constexpr unsigned int Class_1_B9D4232CE6441715_TypeDefinitionIndex = 87457;

class Class_1_B9D4232CE6441715 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LogicAxis3DInputType, ::Il2CppArray<::Enum_3_2E8B563F910AABF2>*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::LogicAxis3DInputType, ::Il2CppArray<::Enum_3_2E8B563F910AABF2>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9D4232CE6441715_TypeDefinitionIndex)->GetStaticField(0x40190);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_2E8B563F910AABF2, ::System::Func_1<::UnityEngine::InputSystem::Sensor*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_2E8B563F910AABF2, ::System::Func_1<::UnityEngine::InputSystem::Sensor*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9D4232CE6441715_TypeDefinitionIndex)->GetStaticField(0x40198);
	}
	::System::Collections::Generic::Dictionary_2<::Enum_3_2E8B563F910AABF2, ::Class_2_0206DD479BB5C906*>* Field_1_2; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D4232CE6441715__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B9D4232CE6441715__CCTOR_OFFSET))();
	}

	::Class_1_B9D4232CE6441715_Struct_2_CF1754DDA8B382D4 Method_1_60DB74FC4A162B4A(::Enum_3_2E8B563F910AABF2 a1, ::System::String* a2)
	{
		return ((::Class_1_B9D4232CE6441715_Struct_2_CF1754DDA8B382D4(*)(::PVOID, ::Enum_3_2E8B563F910AABF2, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B9D4232CE6441715_METHOD_1_60DB74FC4A162B4A_OFFSET))(this, a1, a2);
	}

	::Class_1_B9D4232CE6441715_Struct_2_CF1754DDA8B382D4 Method_1_09B013582619F7A1(::MoleMole::LogicAxis3DInputType a1, ::System::String* a2)
	{
		return ((::Class_1_B9D4232CE6441715_Struct_2_CF1754DDA8B382D4(*)(::PVOID, ::MoleMole::LogicAxis3DInputType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B9D4232CE6441715_METHOD_1_09B013582619F7A1_OFFSET))(this, a1, a2);
	}

	::Class_1_B9D4232CE6441715_Struct_2_CF1754DDA8B382D4 Method_1_D21D06748B8350D9(::MoleMole::LogicAxis3DInputType a1, ::MoleMole::LogicAxis3DInputType a2, ::System::String* a3)
	{
		return ((::Class_1_B9D4232CE6441715_Struct_2_CF1754DDA8B382D4(*)(::PVOID, ::MoleMole::LogicAxis3DInputType, ::MoleMole::LogicAxis3DInputType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B9D4232CE6441715_METHOD_1_D21D06748B8350D9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7519ACADC6E45E6D(::Enum_3_2E8B563F910AABF2 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_2E8B563F910AABF2, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B9D4232CE6441715_METHOD_1_7519ACADC6E45E6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8546B835EB200719(::Enum_3_2E8B563F910AABF2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_2E8B563F910AABF2))((::PBYTE)hIl2Cpp + CLASS_1_B9D4232CE6441715_METHOD_1_8546B835EB200719_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D4232CE6441715_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_1_8546B835EB200719_1(::Enum_3_2E8B563F910AABF2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_2E8B563F910AABF2))((::PBYTE)hIl2Cpp + CLASS_1_B9D4232CE6441715_METHOD_1_8546B835EB200719_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D80637ACAA691130(::MoleMole::LogicAxis3DInputType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LogicAxis3DInputType))((::PBYTE)hIl2Cpp + CLASS_1_B9D4232CE6441715_METHOD_1_D80637ACAA691130_OFFSET))(this, a1);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D4232CE6441715_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_1_D80637ACAA691130_1(::MoleMole::LogicAxis3DInputType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LogicAxis3DInputType))((::PBYTE)hIl2Cpp + CLASS_1_B9D4232CE6441715_METHOD_1_D80637ACAA691130_1_OFFSET))(this, a1);
	}
};
