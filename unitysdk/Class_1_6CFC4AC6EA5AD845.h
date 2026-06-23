#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6CFC4AC6EA5AD845_METHOD_1_179D080BB9B72242_OFFSET UNITYSDK_OFFSET(0x1310FA20)
#define CLASS_1_6CFC4AC6EA5AD845__CTOR_OFFSET UNITYSDK_OFFSET(0x1310F9D0)

inline static constexpr unsigned int Class_1_6CFC4AC6EA5AD845_TypeDefinitionIndex = 48217;

class Class_1_6CFC4AC6EA5AD845 : public ::System::Object
{
public:
	::Foundation::Unreal::FGameplayTagContainer Field_1_0; // 0x10

	::System::Void _ctor(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_1_6CFC4AC6EA5AD845__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_179D080BB9B72242(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_6CFC4AC6EA5AD845_METHOD_1_179D080BB9B72242_OFFSET))(this, a1);
	}
};
