#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7FCEFD11BF5FFFA5;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_8607800D97BB03E5___C_METHOD_1_5FFF477DE12718CC_OFFSET UNITYSDK_OFFSET(0x161DA3D0)
#define CLASS_2_8607800D97BB03E5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x161DA380)
#define CLASS_2_8607800D97BB03E5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x161DA3C0)

inline static constexpr unsigned int Class_2_8607800D97BB03E5___c_TypeDefinitionIndex = 39974;

class Class_2_8607800D97BB03E5___c : public ::System::Object
{
public:
	static ::Class_2_8607800D97BB03E5___c** StaticGet___9()
	{
		return (::Class_2_8607800D97BB03E5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8607800D97BB03E5___c_TypeDefinitionIndex)->GetStaticField(0x36D90);
	}
	static ::System::Action_1<::Class_3_7FCEFD11BF5FFFA5*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_7FCEFD11BF5FFFA5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8607800D97BB03E5___c_TypeDefinitionIndex)->GetStaticField(0x36D98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8607800D97BB03E5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8607800D97BB03E5___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5FFF477DE12718CC(::Class_3_7FCEFD11BF5FFFA5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7FCEFD11BF5FFFA5*))((::PBYTE)hIl2Cpp + CLASS_2_8607800D97BB03E5___C_METHOD_1_5FFF477DE12718CC_OFFSET))(this, a1);
	}
};
