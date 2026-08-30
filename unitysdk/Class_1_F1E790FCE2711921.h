#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameCharacterMoveDirection.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterMovementConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace RPG::Client::LittleGame { class TimelineControlGameCharacterMovementPath; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F1E790FCE2711921__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9F7500)

inline static constexpr unsigned int Class_1_F1E790FCE2711921_TypeDefinitionIndex = 41203;

class Class_1_F1E790FCE2711921 : public ::System::Object
{
public:
	::UnityEngine::Transform* DICDJJOJKGF; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*>* DIKJBMHBCNK; // 0x18
	::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath* JFAKICGOGON; // 0x20
	::UnityEngine::Vector3Int EDLHLKAFDFA; // 0x28
	::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection FFHIEMCJDJJ; // 0x34
	::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig EABKOHGCHFP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1E790FCE2711921__CTOR_OFFSET))(this);
	}
};
