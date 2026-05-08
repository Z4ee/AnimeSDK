#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_VOPERFORMSUBSYSTEM_VOGUIDEPOSTARGETSYNCER_INIT_OFFSET UNITYSDK_OFFSET(0x10D8F8C0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_VOGUIDEPOSTARGETSYNCER_TRYGETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x10D8F140)
#define MOLEMOLE_VOPERFORMSUBSYSTEM_VOGUIDEPOSTARGETSYNCER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D8F910)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem_VOGuidePosTargetSyncer_TypeDefinitionIndex = 54623;

	class VOPerformSubSystem_VOGuidePosTargetSyncer : public ::System::Object
	{
	public:
		::Foundation::ViewObject::GroupMemberIdentifier targetIdentifier; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_VOGUIDEPOSTARGETSYNCER__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetTargetPos(::UnityEngine::Vector3& markerPos, ::System::UInt32& targetEntityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_VOGUIDEPOSTARGETSYNCER_TRYGETTARGETPOS_OFFSET))(this, markerPos, targetEntityID);
		}

		::System::Void Init(::Foundation::ViewObject::GroupMemberIdentifier identifier)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM_VOGUIDEPOSTARGETSYNCER_INIT_OFFSET))(this, identifier);
		}
	};
}
