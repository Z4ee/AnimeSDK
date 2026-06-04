#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InfiniteWavePosition.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_CF3E94650AC20098_CLASS_1_42B54E988F80C53A__CTOR_OFFSET UNITYSDK_OFFSET(0xB502A60)

inline static constexpr unsigned int Class_3_CF3E94650AC20098_Class_1_42B54E988F80C53A_TypeDefinitionIndex = 51487;

class Class_3_CF3E94650AC20098_Class_1_42B54E988F80C53A : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::RPG::GameCore::InfiniteWavePosition Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF3E94650AC20098_CLASS_1_42B54E988F80C53A__CTOR_OFFSET))(this);
	}
};
