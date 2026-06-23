#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_725BA55314C58F1B_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x16D39B70)
#define CLASS_1_725BA55314C58F1B_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x16D39C10)
#define CLASS_1_725BA55314C58F1B__CTOR_OFFSET UNITYSDK_OFFSET(0x16D39C80)

inline static constexpr unsigned int Class_1_725BA55314C58F1B_TypeDefinitionIndex = 87361;

class Class_1_725BA55314C58F1B : public ::System::Object
{
public:
	::Foundation::Unreal::FGameplayTagContainer Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_725BA55314C58F1B__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_725BA55314C58F1B_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_725BA55314C58F1B_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
