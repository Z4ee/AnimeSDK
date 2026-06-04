#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GrounderIKThreadSolver.h"
#include "unitysdk/Struct_2_05A67A9E2D5889AA.h"
#include "unitysdk/Struct_2_1E36AD6D9A5F486C.h"
#include "unitysdk/Struct_2_9337153130FDFA1E.h"
#include "unitysdk/Struct_2_9FC3BF6B16C6AFE6.h"
#include "unitysdk/Struct_2_B87BAA35D432DB99.h"
#include "unitysdk/Struct_2_F15D3B4A9D0D9701.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_43BD383C98B4C0C5_159_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF6D160)
#define CLASS_1_43BD383C98B4C0C5_159__CTOR_OFFSET UNITYSDK_OFFSET(0xAF6D150)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_159_TypeDefinitionIndex = 64045;

class Class_1_43BD383C98B4C0C5_159 : public ::System::Object
{
public:
	::Struct_2_F15D3B4A9D0D9701 Field_1_0; // 0x10
	::Struct_2_B87BAA35D432DB99 Field_1_1; // 0x48
	::Struct_2_05A67A9E2D5889AA Field_1_2; // 0x70
	::Struct_2_1E36AD6D9A5F486C Field_1_3; // 0x278
	::Struct_2_9FC3BF6B16C6AFE6 Field_1_4; // 0x4B8
	::Struct_2_9337153130FDFA1E Field_1_5; // 0x568
	::RootMotion::FinalIK::GrounderIKThreadSolver Field_1_6; // 0x5A0
	::RPG::GameCore::GameEntity* Field_1_7; // 0x5D8
	::System::Boolean Field_1_8; // 0x5E0
	::System::Boolean Field_1_9; // 0x5E1
	::System::Boolean Field_1_10; // 0x5E2
	::System::Boolean Field_1_11; // 0x5E3
	::System::Boolean Field_1_12; // 0x5E4
	::System::Boolean Field_1_13; // 0x5E5
	::System::Boolean Field_1_14; // 0x5E6
	::System::Boolean Field_1_15; // 0x5E7

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_159__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_159_DISPOSE_OFFSET))(this);
	}
};
