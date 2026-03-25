#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;

#define CLASS_1_41BD4C7DF157B06A_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x87896A0)
#define CLASS_1_41BD4C7DF157B06A_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x87896D0)
#define CLASS_1_41BD4C7DF157B06A_2___C___CCTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x87896E0)

inline static constexpr unsigned int Class_1_41BD4C7DF157B06A_2___c_TypeDefinitionIndex = 38576;

class Class_1_41BD4C7DF157B06A_2___c : public ::System::Object
{
public:
	static ::Class_1_41BD4C7DF157B06A_2___c** StaticGet___9()
	{
		return (::Class_1_41BD4C7DF157B06A_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41BD4C7DF157B06A_2___c_TypeDefinitionIndex)->GetStaticField(0x1FAF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41BD4C7DF157B06A_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41BD4C7DF157B06A_2___C__CTOR_OFFSET))(this);
	}

	::System::Void __cctor_b__3_0(::Class_1_7B4E9156998275BE* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_41BD4C7DF157B06A_2___C___CCTOR_B__3_0_OFFSET))(this, _);
	}
};
