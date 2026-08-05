#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_B99AA5AE371451AA;
class Class_5_2B047B81D949C4E6;
class Class_5_F60EFCE4D76BF533;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_99FDA6CBD7007348___C_METHOD_1_363ECE086128BAC2_OFFSET UNITYSDK_OFFSET(0x135BFCA0)
#define CLASS_3_99FDA6CBD7007348___C_METHOD_1_67B2428B7EC27CA5_OFFSET UNITYSDK_OFFSET(0x135BFC90)
#define CLASS_3_99FDA6CBD7007348___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x135BFC40)
#define CLASS_3_99FDA6CBD7007348___C__CTOR_OFFSET UNITYSDK_OFFSET(0x135BFC80)

inline static constexpr unsigned int Class_3_99FDA6CBD7007348___c_TypeDefinitionIndex = 79888;

class Class_3_99FDA6CBD7007348___c : public ::System::Object
{
public:
	static ::Class_3_99FDA6CBD7007348___c** StaticGet___9()
	{
		return (::Class_3_99FDA6CBD7007348___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_99FDA6CBD7007348___c_TypeDefinitionIndex)->GetStaticField(0x41CD0);
	}
	static ::System::Action_2<::Class_4_B99AA5AE371451AA*, ::Class_5_F60EFCE4D76BF533*>** StaticGet___9__6_1()
	{
		return (::System::Action_2<::Class_4_B99AA5AE371451AA*, ::Class_5_F60EFCE4D76BF533*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_99FDA6CBD7007348___c_TypeDefinitionIndex)->GetStaticField(0x41CD8);
	}
	static ::System::Action_2<::Class_4_B99AA5AE371451AA*, ::Class_5_2B047B81D949C4E6*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_4_B99AA5AE371451AA*, ::Class_5_2B047B81D949C4E6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_99FDA6CBD7007348___c_TypeDefinitionIndex)->GetStaticField(0x41CE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_99FDA6CBD7007348___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_99FDA6CBD7007348___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_67B2428B7EC27CA5(::Class_4_B99AA5AE371451AA* a1, ::Class_5_F60EFCE4D76BF533* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B99AA5AE371451AA*, ::Class_5_F60EFCE4D76BF533*))((::PBYTE)hIl2Cpp + CLASS_3_99FDA6CBD7007348___C_METHOD_1_67B2428B7EC27CA5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_363ECE086128BAC2(::Class_4_B99AA5AE371451AA* a1, ::Class_5_2B047B81D949C4E6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_B99AA5AE371451AA*, ::Class_5_2B047B81D949C4E6*))((::PBYTE)hIl2Cpp + CLASS_3_99FDA6CBD7007348___C_METHOD_1_363ECE086128BAC2_OFFSET))(this, a1, a2);
	}
};
