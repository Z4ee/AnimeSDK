#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_EC335C1F34DF1320;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_8607800D97BB03E5___C_METHOD_1_5FFF477DE12718CC_OFFSET UNITYSDK_OFFSET(0xE53AD50)
#define CLASS_2_8607800D97BB03E5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE53AD00)
#define CLASS_2_8607800D97BB03E5___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE53AD40)

inline static constexpr unsigned int Class_2_8607800D97BB03E5___c_TypeDefinitionIndex = 49733;

class Class_2_8607800D97BB03E5___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_EC335C1F34DF1320*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_EC335C1F34DF1320*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8607800D97BB03E5___c_TypeDefinitionIndex)->GetStaticField(0x373C0);
	}
	static ::Class_2_8607800D97BB03E5___c** StaticGet___9()
	{
		return (::Class_2_8607800D97BB03E5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8607800D97BB03E5___c_TypeDefinitionIndex)->GetStaticField(0x373C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8607800D97BB03E5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8607800D97BB03E5___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5FFF477DE12718CC(::Class_3_EC335C1F34DF1320* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EC335C1F34DF1320*))((::PBYTE)hIl2Cpp + CLASS_2_8607800D97BB03E5___C_METHOD_1_5FFF477DE12718CC_OFFSET))(this, a1);
	}
};
