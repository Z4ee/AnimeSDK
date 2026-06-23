#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F8B5571A10EB0C4A.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_FDF004B094F6A736_1___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x197E75B0)
#define CLASS_3_FDF004B094F6A736_1___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x197E75C0)
#define CLASS_3_FDF004B094F6A736_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197E7560)
#define CLASS_3_FDF004B094F6A736_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197E75A0)

inline static constexpr unsigned int Class_3_FDF004B094F6A736_1___c_TypeDefinitionIndex = 22658;

class Class_3_FDF004B094F6A736_1___c : public ::System::Object
{
public:
	static ::Class_3_FDF004B094F6A736_1___c** StaticGet___9()
	{
		return (::Class_3_FDF004B094F6A736_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FDF004B094F6A736_1___c_TypeDefinitionIndex)->GetStaticField(0xBA40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FDF004B094F6A736_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FDF004B094F6A736_1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_F8B5571A10EB0C4A a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_F8B5571A10EB0C4A))((::PBYTE)hIl2Cpp + CLASS_3_FDF004B094F6A736_1___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}

	::Enum_3_F8B5571A10EB0C4A Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_F8B5571A10EB0C4A(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FDF004B094F6A736_1___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}
};
