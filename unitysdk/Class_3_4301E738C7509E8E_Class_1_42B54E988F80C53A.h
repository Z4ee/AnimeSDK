#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InfiniteWavePosition.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_4301E738C7509E8E_CLASS_1_42B54E988F80C53A__CTOR_OFFSET UNITYSDK_OFFSET(0x1189C6B0)

inline static constexpr unsigned int Class_3_4301E738C7509E8E_Class_1_42B54E988F80C53A_TypeDefinitionIndex = 44114;

class Class_3_4301E738C7509E8E_Class_1_42B54E988F80C53A : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::RPG::GameCore::InfiniteWavePosition Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4301E738C7509E8E_CLASS_1_42B54E988F80C53A__CTOR_OFFSET))(this);
	}
};
