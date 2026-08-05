#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_56567EA8F746EF1A;
class Class_3_C93CC3D2C2AC4067;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_26DC86C2DC9F9DC2___C_METHOD_1_32D402F719F71321_OFFSET UNITYSDK_OFFSET(0x180ECD00)
#define CLASS_3_26DC86C2DC9F9DC2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x180ECCB0)
#define CLASS_3_26DC86C2DC9F9DC2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x180ECCF0)

inline static constexpr unsigned int Class_3_26DC86C2DC9F9DC2___c_TypeDefinitionIndex = 74278;

class Class_3_26DC86C2DC9F9DC2___c : public ::System::Object
{
public:
	static ::Class_3_26DC86C2DC9F9DC2___c** StaticGet___9()
	{
		return (::Class_3_26DC86C2DC9F9DC2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_26DC86C2DC9F9DC2___c_TypeDefinitionIndex)->GetStaticField(0x43A80);
	}
	static ::System::Action_2<::Class_3_C93CC3D2C2AC4067*, ::Class_3_56567EA8F746EF1A*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::Class_3_C93CC3D2C2AC4067*, ::Class_3_56567EA8F746EF1A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_26DC86C2DC9F9DC2___c_TypeDefinitionIndex)->GetStaticField(0x43A88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_26DC86C2DC9F9DC2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26DC86C2DC9F9DC2___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_32D402F719F71321(::Class_3_C93CC3D2C2AC4067* a1, ::Class_3_56567EA8F746EF1A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_56567EA8F746EF1A*))((::PBYTE)hIl2Cpp + CLASS_3_26DC86C2DC9F9DC2___C_METHOD_1_32D402F719F71321_OFFSET))(this, a1, a2);
	}
};
