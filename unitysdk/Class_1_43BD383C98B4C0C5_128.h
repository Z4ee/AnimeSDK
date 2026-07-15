#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_128_Class_3_50D343C44D28BEFB_5;
class Class_1_F65DC6656DEF8159;
namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::Client { class EntityTimelineControlTrackInfo; }
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_43BD383C98B4C0C5_128_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16ABCB10)
#define CLASS_1_43BD383C98B4C0C5_128__CTOR_OFFSET UNITYSDK_OFFSET(0x16ABCB90)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_128_TypeDefinitionIndex = 58084;

class Class_1_43BD383C98B4C0C5_128 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action_1<::System::Single>* Field_1_1; // 0x18
	::System::Action* Field_1_2; // 0x20
	::System::Action_1<::RPG::Client::EntityTimelineControlNode*>* Field_1_3; // 0x28
	::System::Func_2<::RPG::Client::EntityTimelineControlNode*, ::System::Boolean>* Field_1_4; // 0x30
	::System::Action* Field_1_5; // 0x38
	::Class_1_43BD383C98B4C0C5_128_Class_3_50D343C44D28BEFB_5* Field_1_6; // 0x40
	::System::Action* Field_1_7; // 0x48
	::System::Action_1<::System::Boolean>* Field_1_8; // 0x50
	::System::Action_2<::System::Single, ::System::Single>* Field_1_9; // 0x58
	::System::Action* Field_1_10; // 0x60
	::System::Action* Field_1_11; // 0x68
	::System::Action* Field_1_12; // 0x70
	::RPG::Client::EntityTimelineControlTrackInfo* Field_1_13; // 0x78
	::RPG::GameCore::GameEntity* Field_1_14; // 0x80
	::System::Action_1<::System::Boolean>* Field_1_15; // 0x88
	::System::Action_1<::RPG::GameCore::TimeRewindState>* Field_1_16; // 0x90
	::Class_1_F65DC6656DEF8159* Field_1_17; // 0x98
	::System::Action* Field_1_18; // 0xA0
	::RPG::GameCore::EntityTimeRewindComponent* Field_1_19; // 0xA8
	::System::Action_1<::System::Boolean>* Field_1_20; // 0xB0
	::System::Action* Field_1_21; // 0xB8
	::System::Action_2<::RPG::Client::EntityTimelineControlNode*, ::System::Boolean>* Field_1_22; // 0xC0
	::System::Action_1<::RPG::Client::EntityTimelineControlNode*>* Field_1_23; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_128__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_128_DISPOSE_OFFSET))(this);
	}
};
