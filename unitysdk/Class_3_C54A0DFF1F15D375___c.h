#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3F053D39E8E0E58E;
class Class_3_C93CC3D2C2AC4067;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_C54A0DFF1F15D375___C_METHOD_1_8738831578484598_OFFSET UNITYSDK_OFFSET(0x12183370)
#define CLASS_3_C54A0DFF1F15D375___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12183320)
#define CLASS_3_C54A0DFF1F15D375___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12183360)

inline static constexpr unsigned int Class_3_C54A0DFF1F15D375___c_TypeDefinitionIndex = 90044;

class Class_3_C54A0DFF1F15D375___c : public ::System::Object
{
public:
	static ::Class_3_C54A0DFF1F15D375___c** StaticGet___9()
	{
		return (::Class_3_C54A0DFF1F15D375___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C54A0DFF1F15D375___c_TypeDefinitionIndex)->GetStaticField(0x43730);
	}
	static ::System::Action_2<::Class_3_3F053D39E8E0E58E*, ::Class_3_C93CC3D2C2AC4067*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_3_3F053D39E8E0E58E*, ::Class_3_C93CC3D2C2AC4067*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C54A0DFF1F15D375___c_TypeDefinitionIndex)->GetStaticField(0x43738);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C54A0DFF1F15D375___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C54A0DFF1F15D375___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8738831578484598(::Class_3_3F053D39E8E0E58E* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3F053D39E8E0E58E*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_C54A0DFF1F15D375___C_METHOD_1_8738831578484598_OFFSET))(this, a1, a2);
	}
};
