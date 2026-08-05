#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_760EF2F1E6039882_METHOD_1_5C9D7E3992A8C3CC_OFFSET UNITYSDK_OFFSET(0x17072250)
#define CLASS_1_760EF2F1E6039882__CTOR_OFFSET UNITYSDK_OFFSET(0x17072200)

inline static constexpr unsigned int Class_1_760EF2F1E6039882_TypeDefinitionIndex = 82265;

class Class_1_760EF2F1E6039882 : public ::System::Object
{
public:
	::Foundation::Unreal::FGameplayTagContainer Field_1_0; // 0x10

	::System::Void _ctor(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_1_760EF2F1E6039882__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5C9D7E3992A8C3CC(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_760EF2F1E6039882_METHOD_1_5C9D7E3992A8C3CC_OFFSET))(this, a1);
	}
};
