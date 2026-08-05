#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_430D60B7258267AD;
class Class_3_C93CC3D2C2AC4067;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_3B818E9B7F6DF69E___C_METHOD_1_569C2660C14CC1BC_OFFSET UNITYSDK_OFFSET(0x1157C350)
#define CLASS_3_3B818E9B7F6DF69E___C_METHOD_1_8C583511E6063393_OFFSET UNITYSDK_OFFSET(0x1157C340)
#define CLASS_3_3B818E9B7F6DF69E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1157C2F0)
#define CLASS_3_3B818E9B7F6DF69E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1157C330)

inline static constexpr unsigned int Class_3_3B818E9B7F6DF69E___c_TypeDefinitionIndex = 74066;

class Class_3_3B818E9B7F6DF69E___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_430D60B7258267AD*, ::Class_3_C93CC3D2C2AC4067*>** StaticGet___9__6_1()
	{
		return (::System::Action_2<::Class_3_430D60B7258267AD*, ::Class_3_C93CC3D2C2AC4067*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3B818E9B7F6DF69E___c_TypeDefinitionIndex)->GetStaticField(0x35C30);
	}
	static ::Class_3_3B818E9B7F6DF69E___c** StaticGet___9()
	{
		return (::Class_3_3B818E9B7F6DF69E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3B818E9B7F6DF69E___c_TypeDefinitionIndex)->GetStaticField(0x35C38);
	}
	static ::System::Action_1<::Class_3_430D60B7258267AD*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_3_430D60B7258267AD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_3B818E9B7F6DF69E___c_TypeDefinitionIndex)->GetStaticField(0x35C40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3B818E9B7F6DF69E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B818E9B7F6DF69E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8C583511E6063393(::Class_3_430D60B7258267AD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_430D60B7258267AD*))((::PBYTE)hIl2Cpp + CLASS_3_3B818E9B7F6DF69E___C_METHOD_1_8C583511E6063393_OFFSET))(this, a1);
	}

	::System::Void Method_1_569C2660C14CC1BC(::Class_3_430D60B7258267AD* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_430D60B7258267AD*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_3B818E9B7F6DF69E___C_METHOD_1_569C2660C14CC1BC_OFFSET))(this, a1, a2);
	}
};
