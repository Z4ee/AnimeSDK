#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/RPG/Client/CompatKey.h"
#include "unitysdk/RPG/Client/RegionVisualStateV2Mode.h"
#include "unitysdk/RPG/Client/ShadowCompareDiffBucket.h"
#include "unitysdk/RPG/GameCore/StageRegionActiveState.h"
#include "unitysdk/RPG/GameCore/StageRegionVisualState.h"
#include "unitysdk/Struct_2_960171EC79068492.h"
#include "unitysdk/System/Object.h"

class Class_1_616F89B5F43D1E61;
namespace System { class String; }

#define CLASS_1_43BD383C98B4C0C5_139__CTOR_OFFSET UNITYSDK_OFFSET(0xB2CB1C0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_139_TypeDefinitionIndex = 58158;

class Class_1_43BD383C98B4C0C5_139 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_616F89B5F43D1E61* Field_1_1; // 0x18
	::RPG::Client::CompatKey Field_1_2; // 0x20
	::RPG::Client::CompatKey Field_1_3; // 0x24
	::RPG::Client::RegionVisualStateV2Mode Field_1_4; // 0x28
	::Struct_2_960171EC79068492 Field_1_5; // 0x2C
	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Field_1_6; // 0x34
	::RPG::GameCore::StageRegionVisualState Field_1_7; // 0x38
	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority Field_1_8; // 0x3C
	::RPG::GameCore::StageRegionVisualState Field_1_9; // 0x40
	::RPG::GameCore::StageRegionActiveState Field_1_10; // 0x44
	::RPG::GameCore::StageRegionVisualState Field_1_11; // 0x48
	::RPG::GameCore::StageRegionVisualState Field_1_12; // 0x4C
	::System::UInt32 Field_1_13; // 0x50
	::RPG::Client::ShadowCompareDiffBucket Field_1_14; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_139__CTOR_OFFSET))(this);
	}
};
