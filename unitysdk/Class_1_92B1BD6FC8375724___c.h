#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DDB796240B07BA45;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_92B1BD6FC8375724___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1091B080)
#define CLASS_1_92B1BD6FC8375724___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1091B0B0)
#define CLASS_1_92B1BD6FC8375724___C__SEND_B__6_0_OFFSET UNITYSDK_OFFSET(0x1091B0C0)

inline static constexpr unsigned int Class_1_92B1BD6FC8375724___c_TypeDefinitionIndex = 56682;

class Class_1_92B1BD6FC8375724___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_DDB796240B07BA45*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_1_DDB796240B07BA45*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92B1BD6FC8375724___c_TypeDefinitionIndex)->GetStaticField(0x29550);
	}
	static ::Class_1_92B1BD6FC8375724___c** StaticGet___9()
	{
		return (::Class_1_92B1BD6FC8375724___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92B1BD6FC8375724___c_TypeDefinitionIndex)->GetStaticField(0x29558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724___C__CTOR_OFFSET))(this);
	}

	::System::Void _Send_b__6_0(::Class_1_DDB796240B07BA45* rsp)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724___C__SEND_B__6_0_OFFSET))(this, rsp);
	}
};
