#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingDamageType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3001A102CF1F3847__CTOR_OFFSET UNITYSDK_OFFSET(0x1D04F730)

inline static constexpr unsigned int Class_1_3001A102CF1F3847_TypeDefinitionIndex = 42133;

class Class_1_3001A102CF1F3847 : public ::System::Object
{
public:
	::System::Boolean NFJCFJABEBD; // 0x10
	::RPG::GameCore::ChenLingDamageType HODMHEGIDOF; // 0x14
	::System::Int32 CCKOKPOPKKK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3001A102CF1F3847__CTOR_OFFSET))(this);
	}
};
