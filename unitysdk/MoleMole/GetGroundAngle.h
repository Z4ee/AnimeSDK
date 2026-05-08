#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_GETGROUNDANGLE_FILTERRAYCASTBYDISTANCEANDTAG_OFFSET UNITYSDK_OFFSET(0x10BC38F0)
#define MOLEMOLE_GETGROUNDANGLE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10BC2AE0)
#define MOLEMOLE_GETGROUNDANGLE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10BC2D50)
#define MOLEMOLE_GETGROUNDANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC3E30)
#define MOLEMOLE_GETGROUNDANGLE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10BC3ED0)
#define MOLEMOLE_GETGROUNDANGLE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10BC3F60)

namespace MoleMole
{
	inline static constexpr unsigned int GetGroundAngle_TypeDefinitionIndex = 61167;

	class GetGroundAngle : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Class_3_DFD5D1FDB9D2A4AC* modelComponent; // 0x58
		::BehaviorDesigner::Runtime::SharedString* StartPosition; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* StoreResult; // 0x68
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x70
		::System::Single DEFAULT_RAYCAST_LENGTH; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETGROUNDANGLE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETGROUNDANGLE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETGROUNDANGLE_ONUPDATE_OFFSET))(this);
		}

		::UnityEngine::RaycastHit FilterRayCastByDistanceAndTag(::Il2CppArray<::UnityEngine::RaycastHit>* hits, ::System::Int32 hitCount, ::System::String* tag)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETGROUNDANGLE_FILTERRAYCASTBYDISTANCEANDTAG_OFFSET))(this, hits, hitCount, tag);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETGROUNDANGLE___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETGROUNDANGLE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
