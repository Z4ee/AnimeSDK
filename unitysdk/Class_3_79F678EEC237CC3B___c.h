#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_11169EF287A415D4;
class Class_3_D2F36DA3858F3459;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_79F678EEC237CC3B___C_METHOD_1_962C4BC72078A0B4_OFFSET UNITYSDK_OFFSET(0x16DF4870)
#define CLASS_3_79F678EEC237CC3B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DF4820)
#define CLASS_3_79F678EEC237CC3B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF4860)

inline static constexpr unsigned int Class_3_79F678EEC237CC3B___c_TypeDefinitionIndex = 71377;

class Class_3_79F678EEC237CC3B___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_11169EF287A415D4*, ::Class_3_D2F36DA3858F3459*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_3_11169EF287A415D4*, ::Class_3_D2F36DA3858F3459*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_79F678EEC237CC3B___c_TypeDefinitionIndex)->GetStaticField(0x33900);
	}
	static ::Class_3_79F678EEC237CC3B___c** StaticGet___9()
	{
		return (::Class_3_79F678EEC237CC3B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_79F678EEC237CC3B___c_TypeDefinitionIndex)->GetStaticField(0x33908);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_79F678EEC237CC3B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_79F678EEC237CC3B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_962C4BC72078A0B4(::Class_3_11169EF287A415D4* a1, ::Class_3_D2F36DA3858F3459* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_11169EF287A415D4*, ::Class_3_D2F36DA3858F3459*))((::PBYTE)hIl2Cpp + CLASS_3_79F678EEC237CC3B___C_METHOD_1_962C4BC72078A0B4_OFFSET))(this, a1, a2);
	}
};
