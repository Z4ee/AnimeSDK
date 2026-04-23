#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_92C4F468C62D6105;

#define CLASS_1_E06A85EB8B5A35E3_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x12487720)
#define CLASS_1_E06A85EB8B5A35E3_METHOD_1_CB90D463EEA11F23_OFFSET UNITYSDK_OFFSET(0x12487790)
#define CLASS_1_E06A85EB8B5A35E3__CCTOR_OFFSET UNITYSDK_OFFSET(0x12487970)
#define CLASS_1_E06A85EB8B5A35E3__CTOR_OFFSET UNITYSDK_OFFSET(0x12487780)

inline static constexpr unsigned int Class_1_E06A85EB8B5A35E3_TypeDefinitionIndex = 69333;

class Class_1_E06A85EB8B5A35E3 : public ::System::Object
{
public:
	static ::Class_1_E06A85EB8B5A35E3** StaticGet_Field_1_0()
	{
		return (::Class_1_E06A85EB8B5A35E3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E06A85EB8B5A35E3_TypeDefinitionIndex)->GetStaticField(0xC900);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E06A85EB8B5A35E3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E06A85EB8B5A35E3__CCTOR_OFFSET))();
	}

	static ::Class_1_E06A85EB8B5A35E3* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_E06A85EB8B5A35E3*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E06A85EB8B5A35E3_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::System::Void Method_1_CB90D463EEA11F23(::Class_2_92C4F468C62D6105* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_92C4F468C62D6105*))((::PBYTE)hIl2Cpp + CLASS_1_E06A85EB8B5A35E3_METHOD_1_CB90D463EEA11F23_OFFSET))(this, a1);
	}
};
