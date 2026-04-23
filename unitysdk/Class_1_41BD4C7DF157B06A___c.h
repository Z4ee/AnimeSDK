#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;

#define CLASS_1_41BD4C7DF157B06A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB48F0F0)
#define CLASS_1_41BD4C7DF157B06A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB48F120)
#define CLASS_1_41BD4C7DF157B06A___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0xB48F130)
#define CLASS_1_41BD4C7DF157B06A___C___CCTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0xB48F2C0)

inline static constexpr unsigned int Class_1_41BD4C7DF157B06A___c_TypeDefinitionIndex = 44458;

class Class_1_41BD4C7DF157B06A___c : public ::System::Object
{
public:
	static ::Class_1_41BD4C7DF157B06A___c** StaticGet___9()
	{
		return (::Class_1_41BD4C7DF157B06A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41BD4C7DF157B06A___c_TypeDefinitionIndex)->GetStaticField(0x68760);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41BD4C7DF157B06A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41BD4C7DF157B06A___C__CTOR_OFFSET))(this);
	}

	::System::Void __cctor_b__2_0(::Class_1_7B4E9156998275BE* container)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_41BD4C7DF157B06A___C___CCTOR_B__2_0_OFFSET))(this, container);
	}

	::System::Void __cctor_b__2_1(::Class_1_7B4E9156998275BE* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_41BD4C7DF157B06A___C___CCTOR_B__2_1_OFFSET))(this, _);
	}
};
