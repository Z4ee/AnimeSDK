#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define CLASS_1_19A417E49B62529B___C_METHOD_1_8BB6D7C6B8E56F41_OFFSET UNITYSDK_OFFSET(0x13D59BE0)
#define CLASS_1_19A417E49B62529B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D59B90)
#define CLASS_1_19A417E49B62529B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D59BD0)

inline static constexpr unsigned int Class_1_19A417E49B62529B___c_TypeDefinitionIndex = 39764;

class Class_1_19A417E49B62529B___c : public ::System::Object
{
public:
	static ::Class_1_19A417E49B62529B___c** StaticGet___9()
	{
		return (::Class_1_19A417E49B62529B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_19A417E49B62529B___c_TypeDefinitionIndex)->GetStaticField(0x38D60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_19A417E49B62529B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19A417E49B62529B___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8BB6D7C6B8E56F41(::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32> a1, ::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>, ::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_19A417E49B62529B___C_METHOD_1_8BB6D7C6B8E56F41_OFFSET))(this, a1, a2);
	}
};
