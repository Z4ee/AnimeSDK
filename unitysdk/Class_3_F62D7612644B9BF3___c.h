#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_456958B23DC020CE;
class Class_3_A5F292C87217469A;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F62D7612644B9BF3___C_METHOD_1_331A2272D8C0851A_OFFSET UNITYSDK_OFFSET(0x1208EB30)
#define CLASS_3_F62D7612644B9BF3___C_METHOD_1_CA252EB53D5BC15A_OFFSET UNITYSDK_OFFSET(0x1208EB40)
#define CLASS_3_F62D7612644B9BF3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1208EAE0)
#define CLASS_3_F62D7612644B9BF3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1208EB20)

inline static constexpr unsigned int Class_3_F62D7612644B9BF3___c_TypeDefinitionIndex = 75899;

class Class_3_F62D7612644B9BF3___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_A5F292C87217469A*>** StaticGet___9__36_0()
	{
		return (::System::Action_1<::Class_3_A5F292C87217469A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F62D7612644B9BF3___c_TypeDefinitionIndex)->GetStaticField(0x2FAE0);
	}
	static ::System::Action_1<::Class_2_456958B23DC020CE*>** StaticGet___9__47_0()
	{
		return (::System::Action_1<::Class_2_456958B23DC020CE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F62D7612644B9BF3___c_TypeDefinitionIndex)->GetStaticField(0x2FAE8);
	}
	static ::Class_3_F62D7612644B9BF3___c** StaticGet___9()
	{
		return (::Class_3_F62D7612644B9BF3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F62D7612644B9BF3___c_TypeDefinitionIndex)->GetStaticField(0x2FAF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F62D7612644B9BF3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F62D7612644B9BF3___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_331A2272D8C0851A(::Class_2_456958B23DC020CE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_456958B23DC020CE*))((::PBYTE)hIl2Cpp + CLASS_3_F62D7612644B9BF3___C_METHOD_1_331A2272D8C0851A_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA252EB53D5BC15A(::Class_3_A5F292C87217469A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_A5F292C87217469A*))((::PBYTE)hIl2Cpp + CLASS_3_F62D7612644B9BF3___C_METHOD_1_CA252EB53D5BC15A_OFFSET))(this, a1);
	}
};
