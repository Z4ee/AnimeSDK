#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GrounderIKThreadSolver.h"
#include "unitysdk/Struct_2_05A67A9E2D5889AA.h"
#include "unitysdk/Struct_2_1E36AD6D9A5F486C.h"
#include "unitysdk/Struct_2_346961915DAEB39E.h"
#include "unitysdk/Struct_2_934D15C6B55FFFEC.h"
#include "unitysdk/Struct_2_9FC3BF6B16C6AFE6.h"
#include "unitysdk/Struct_2_F15D3B4A9D0D9701.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_43BD383C98B4C0C5_147_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9992C60)
#define CLASS_1_43BD383C98B4C0C5_147__CTOR_OFFSET UNITYSDK_OFFSET(0x9992C50)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_147_TypeDefinitionIndex = 63128;

class Class_1_43BD383C98B4C0C5_147 : public ::System::Object
{
public:
	::Struct_2_9FC3BF6B16C6AFE6 Field_1_14; // 0x10
	::Struct_2_934D15C6B55FFFEC Field_1_5; // 0xC0
	::Struct_2_05A67A9E2D5889AA Field_1_12; // 0xE8
	::Struct_2_F15D3B4A9D0D9701 Field_1_15; // 0x2F0
	::Struct_2_1E36AD6D9A5F486C Field_1_7; // 0x328
	::RPG::GameCore::GameEntity* Field_1_0; // 0x568
	::RootMotion::FinalIK::GrounderIKThreadSolver Field_1_3; // 0x570
	::Struct_2_346961915DAEB39E Field_1_9; // 0x5A8
	::System::Boolean Field_1_4; // 0x5E0
	::System::Boolean Field_1_13; // 0x5E1
	::System::Boolean Field_1_6; // 0x5E2
	::System::Boolean Field_1_10; // 0x5E3
	::System::Boolean Field_1_8; // 0x5E4
	::System::Boolean Field_1_11; // 0x5E5
	::System::Boolean Field_1_1; // 0x5E6
	::System::Boolean Field_1_2; // 0x5E7

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_147__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_147_DISPOSE_OFFSET))(this);
	}
};
