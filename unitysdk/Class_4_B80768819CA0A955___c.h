#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_DFD5D1FDB9D2A4AC;
class Class_4_C2BA23F5AA27FA67;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_4_B80768819CA0A955___C_METHOD_1_980D629295C7971F_OFFSET UNITYSDK_OFFSET(0x10E95440)
#define CLASS_4_B80768819CA0A955___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E953F0)
#define CLASS_4_B80768819CA0A955___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10E95430)

inline static constexpr unsigned int Class_4_B80768819CA0A955___c_TypeDefinitionIndex = 68799;

class Class_4_B80768819CA0A955___c : public ::System::Object
{
public:
	static ::Class_4_B80768819CA0A955___c** StaticGet___9()
	{
		return (::Class_4_B80768819CA0A955___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_B80768819CA0A955___c_TypeDefinitionIndex)->GetStaticField(0x36290);
	}
	static ::System::Action_2<::Class_4_C2BA23F5AA27FA67*, ::Class_3_DFD5D1FDB9D2A4AC*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::Class_4_C2BA23F5AA27FA67*, ::Class_3_DFD5D1FDB9D2A4AC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_B80768819CA0A955___c_TypeDefinitionIndex)->GetStaticField(0x36298);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_980D629295C7971F(::Class_4_C2BA23F5AA27FA67* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_C2BA23F5AA27FA67*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_4_B80768819CA0A955___C_METHOD_1_980D629295C7971F_OFFSET))(this, a1, a2);
	}
};
