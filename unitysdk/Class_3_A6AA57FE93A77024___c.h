#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B9814F859AB43FFE;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_A6AA57FE93A77024___C_METHOD_1_D64F95BC0D197749_OFFSET UNITYSDK_OFFSET(0x14E80310)
#define CLASS_3_A6AA57FE93A77024___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E802C0)
#define CLASS_3_A6AA57FE93A77024___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14E80300)

inline static constexpr unsigned int Class_3_A6AA57FE93A77024___c_TypeDefinitionIndex = 61843;

class Class_3_A6AA57FE93A77024___c : public ::System::Object
{
public:
	static ::Class_3_A6AA57FE93A77024___c** StaticGet___9()
	{
		return (::Class_3_A6AA57FE93A77024___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A6AA57FE93A77024___c_TypeDefinitionIndex)->GetStaticField(0x31C60);
	}
	static ::System::Action_1<::Class_3_B9814F859AB43FFE*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_B9814F859AB43FFE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A6AA57FE93A77024___c_TypeDefinitionIndex)->GetStaticField(0x31C68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A6AA57FE93A77024___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6AA57FE93A77024___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D64F95BC0D197749(::Class_3_B9814F859AB43FFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B9814F859AB43FFE*))((::PBYTE)hIl2Cpp + CLASS_3_A6AA57FE93A77024___C_METHOD_1_D64F95BC0D197749_OFFSET))(this, a1);
	}
};
