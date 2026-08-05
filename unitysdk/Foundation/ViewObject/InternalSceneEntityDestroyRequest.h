#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_3EC97B498E0B85D2;

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int InternalSceneEntityDestroyRequest_TypeDefinitionIndex = 72183;

	struct alignas(8) InternalSceneEntityDestroyRequest
	{
		::System::UInt32 NetID; // 0x10
		::System::UInt32 EntityID; // 0x14
		::Class_3_3EC97B498E0B85D2* reason; // 0x18
		::Foundation::ViewObject::GroupMemberIdentifier member; // 0x20
		::UnityEngine::Vector3 lastPos; // 0x28
		::UnityEngine::Vector3 lastRot; // 0x34
	};
}
