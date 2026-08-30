#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0F24EAFEC305197B;
namespace RPG::GameCore { class GameEntity; }

#define STRUCT_2_EF7C37AF69DC7CE6_METHOD_2_C44E07B1A96C9D8E_OFFSET UNITYSDK_OFFSET(0x3AF9280)
#define STRUCT_2_EF7C37AF69DC7CE6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x3AF9230)

inline static constexpr unsigned int Struct_2_EF7C37AF69DC7CE6_TypeDefinitionIndex = 57853;

struct alignas(8) Struct_2_EF7C37AF69DC7CE6
{
	::Class_1_0F24EAFEC305197B* HAFKKAFAJPL; // 0x10
	::RPG::GameCore::FixPoint ICCFLGMOHEH; // 0x18

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EF7C37AF69DC7CE6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C44E07B1A96C9D8E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_EF7C37AF69DC7CE6_METHOD_2_C44E07B1A96C9D8E_OFFSET))(this, a1);
	}
};
