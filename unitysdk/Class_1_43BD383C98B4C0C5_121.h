#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationMotionFlagMode.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/EAdventureNavigationAccuratelyMode.h"
#include "unitysdk/RPG/GameCore/ECharacterNavSteerMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_9B28A54582B92258;
class Class_3_CD04D3296DF4C842_4;
class Class_3_CD04D3296DF4C842_5;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_43BD383C98B4C0C5_121__CTOR_OFFSET UNITYSDK_OFFSET(0xAD48E70)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_121_TypeDefinitionIndex = 53347;

class Class_1_43BD383C98B4C0C5_121 : public ::System::Object
{
public:
	::Class_3_9B28A54582B92258* Field_1_0; // 0x10
	::Class_3_CD04D3296DF4C842_4* Field_1_1; // 0x18
	::Class_3_CD04D3296DF4C842_5* Field_1_2; // 0x20
	::RPG::GameCore::GameEntity* Field_1_3; // 0x28
	::RPG::GameCore::CharacterMotionFlag Field_1_4; // 0x30
	::System::Nullable_1<::RPG::GameCore::ECharacterNavSteerMode> Field_1_5; // 0x34
	::System::Single Field_1_6; // 0x3C
	::UnityEngine::Quaternion Field_1_7; // 0x40
	::System::Single Field_1_8; // 0x50
	::System::Boolean Field_1_9; // 0x54
	::System::Boolean Field_1_10; // 0x55
	::System::Boolean Field_1_11; // 0x56
	::System::Boolean Field_1_12; // 0x57
	::System::Single Field_1_13; // 0x58
	::System::Single Field_1_14; // 0x5C
	::System::Single Field_1_15; // 0x60
	::System::Int32 Field_1_16; // 0x64
	::System::Single Field_1_17; // 0x68
	::System::Boolean Field_1_18; // 0x6C
	::System::Boolean Field_1_19; // 0x6D
	::System::Boolean Field_1_20; // 0x6E
	::System::Boolean Field_1_21; // 0x6F
	::System::Boolean Field_1_22; // 0x70
	::System::Boolean Field_1_23; // 0x71
	::System::Boolean Field_1_24; // 0x72
	::System::Boolean Field_1_25; // 0x73
	::RPG::GameCore::EAdventureNavigationAccuratelyMode Field_1_26; // 0x74
	::System::Single Field_1_27; // 0x78
	::UnityEngine::Vector3 Field_1_28; // 0x7C
	::RPG::GameCore::AdvNavigationMotionFlagMode Field_1_29; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_121__CTOR_OFFSET))(this);
	}
};
