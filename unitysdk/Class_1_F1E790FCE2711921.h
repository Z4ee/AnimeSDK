#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameCharacterMoveDirection.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameCharacterMovementConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace RPG::Client::LittleGame { class TimelineControlGameCharacterMovementPath; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F1E790FCE2711921__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA40130)

inline static constexpr unsigned int Class_1_F1E790FCE2711921_TypeDefinitionIndex = 42492;

class Class_1_F1E790FCE2711921 : public ::System::Object
{
public:
	::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath* JFAKICGOGON; // 0x10
	::UnityEngine::Transform* DICDJJOJKGF; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*>* DIKJBMHBCNK; // 0x20
	::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection FFHIEMCJDJJ; // 0x28
	::RPG::Client::LittleGame::TimelineControlGameCharacterMovementConfig EABKOHGCHFP; // 0x2C
	::UnityEngine::Vector3Int EDLHLKAFDFA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1E790FCE2711921__CTOR_OFFSET))(this);
	}
};
