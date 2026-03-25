#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameCharacterMoveDirection.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterMovementConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace RPG::Client::LittleGame { class TimelineControlGameCharacterMovementPath; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F1E790FCE2711921__CTOR_OFFSET UNITYSDK_OFFSET(0x168647C0)

inline static constexpr unsigned int Class_1_F1E790FCE2711921_TypeDefinitionIndex = 32957;

class Class_1_F1E790FCE2711921 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath* Field_1_4; // 0x10
	::UnityEngine::Transform* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*>* Field_1_5; // 0x20
	::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection Field_1_2; // 0x28
	::UnityEngine::Vector3Int Field_1_1; // 0x2C
	::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1E790FCE2711921__CTOR_OFFSET))(this);
	}
};
