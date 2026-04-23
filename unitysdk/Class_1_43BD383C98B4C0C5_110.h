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

#define CLASS_1_43BD383C98B4C0C5_110__CTOR_OFFSET UNITYSDK_OFFSET(0x11E5FE00)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_110_TypeDefinitionIndex = 52647;

class Class_1_43BD383C98B4C0C5_110 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_10; // 0x10
	::Class_3_CD04D3296DF4C842_5* Field_1_18; // 0x18
	::Class_3_9B28A54582B92258* Field_1_16; // 0x20
	::Class_3_CD04D3296DF4C842_4* Field_1_17; // 0x28
	::System::Boolean Field_1_21; // 0x30
	::System::Boolean Field_1_28; // 0x31
	::System::Boolean Field_1_7; // 0x32
	::System::Boolean Field_1_6; // 0x33
	::System::Single Field_1_2; // 0x34
	::UnityEngine::Quaternion Field_1_4; // 0x38
	::System::Single Field_1_3; // 0x48
	::System::Single Field_1_11; // 0x4C
	::System::Int32 Field_1_23; // 0x50
	::System::Boolean Field_1_25; // 0x54
	::System::Boolean Field_1_1; // 0x55
	::System::Boolean Field_1_27; // 0x56
	::System::Boolean Field_1_15; // 0x57
	::RPG::GameCore::CharacterMotionFlag Field_1_9; // 0x58
	::System::Nullable_1<::RPG::GameCore::ECharacterNavSteerMode> Field_1_5; // 0x5C
	::System::Boolean Field_1_19; // 0x64
	::System::Boolean Field_1_29; // 0x65
	::System::Boolean Field_1_14; // 0x66
	::System::Boolean Field_1_20; // 0x67
	::UnityEngine::Vector3 Field_1_0; // 0x68
	::RPG::GameCore::AdvNavigationMotionFlagMode Field_1_8; // 0x74
	::System::Single Field_1_22; // 0x78
	::System::Single Field_1_24; // 0x7C
	::System::Single Field_1_26; // 0x80
	::System::Single Field_1_12; // 0x84
	::RPG::GameCore::EAdventureNavigationAccuratelyMode Field_1_13; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_110__CTOR_OFFSET))(this);
	}
};
