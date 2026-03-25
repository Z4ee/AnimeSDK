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

#define CLASS_1_43BD383C98B4C0C5_107__CTOR_OFFSET UNITYSDK_OFFSET(0x10640680)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_107_TypeDefinitionIndex = 45986;

class Class_1_43BD383C98B4C0C5_107 : public ::System::Object
{
public:
	::Class_3_9B28A54582B92258* Field_1_16; // 0x10
	::RPG::GameCore::GameEntity* Field_1_10; // 0x18
	::Class_3_CD04D3296DF4C842_5* Field_1_18; // 0x20
	::Class_3_CD04D3296DF4C842_4* Field_1_17; // 0x28
	::UnityEngine::Quaternion Field_1_4; // 0x30
	::System::Single Field_1_26; // 0x40
	::System::Single Field_1_22; // 0x44
	::RPG::GameCore::AdvNavigationMotionFlagMode Field_1_8; // 0x48
	::System::Single Field_1_24; // 0x4C
	::System::Single Field_1_2; // 0x50
	::System::Boolean Field_1_29; // 0x54
	::System::Boolean Field_1_20; // 0x55
	::System::Boolean Field_1_19; // 0x56
	::System::Boolean Field_1_1; // 0x57
	::UnityEngine::Vector3 Field_1_0; // 0x58
	::System::Single Field_1_12; // 0x64
	::System::Boolean Field_1_15; // 0x68
	::System::Boolean Field_1_21; // 0x69
	::System::Boolean Field_1_7; // 0x6A
	::System::Boolean Field_1_6; // 0x6B
	::RPG::GameCore::EAdventureNavigationAccuratelyMode Field_1_13; // 0x6C
	::System::Nullable_1<::RPG::GameCore::ECharacterNavSteerMode> Field_1_5; // 0x70
	::System::Single Field_1_3; // 0x78
	::System::Boolean Field_1_25; // 0x7C
	::System::Boolean Field_1_14; // 0x7D
	::System::Boolean Field_1_28; // 0x7E
	::System::Boolean Field_1_27; // 0x7F
	::RPG::GameCore::CharacterMotionFlag Field_1_9; // 0x80
	::System::Int32 Field_1_23; // 0x84
	::System::Single Field_1_11; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_107__CTOR_OFFSET))(this);
	}
};
