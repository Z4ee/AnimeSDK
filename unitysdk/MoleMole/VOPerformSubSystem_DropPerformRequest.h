#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM_DROPPERFORMREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x12EAF100)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem_DropPerformRequest_TypeDefinitionIndex = 54627;

	class VOPerformSubSystem_DropPerformRequest : public ::System::Object
	{
	public:
		::MoleMole::EntityHandle CachedEntity; // 0x10
		::UnityEngine::AnimationCurve* RhythmCurve; // 0x20
		::System::Boolean EntityResolved; // 0x28
		::System::Single LaunchHeight; // 0x2C
		::System::Single TotalDuration; // 0x30
		::Foundation::ViewObject::GroupMemberIdentifier Identifier; // 0x34
		::System::Single ElapsedTime; // 0x3C
		::UnityEngine::Vector3 Target; // 0x40
		::UnityEngine::Vector3 Origin; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_DROPPERFORMREQUEST__CTOR_OFFSET))(this);
		}
	};
}
