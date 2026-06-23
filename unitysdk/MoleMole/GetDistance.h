#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_GETDISTANCE_GETTARGET1POS_OFFSET UNITYSDK_OFFSET(0x18B346A0)
#define MOLEMOLE_GETDISTANCE_GETTARGET2POS_OFFSET UNITYSDK_OFFSET(0x18B35AA0)
#define MOLEMOLE_GETDISTANCE_GETTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x18B347C0)
#define MOLEMOLE_GETDISTANCE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18B34550)
#define MOLEMOLE_GETDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B35BB0)
#define MOLEMOLE_GETDISTANCE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18B35C50)

namespace MoleMole
{
	inline static constexpr unsigned int GetDistance_TypeDefinitionIndex = 49864;

	class GetDistance : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::String* TargetTypeCustomKey1; // 0x58
		::BehaviorDesigner::Runtime::SharedString* TargetAnchorName2; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* StoreResult; // 0x68
		::System::String* Target1AttachPoint; // 0x70
		::BehaviorDesigner::Runtime::SharedString* TargetAnchorName1; // 0x78
		::System::String* Target2AttachPoint; // 0x80
		::System::String* TargetTypeCustomKey2; // 0x88
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x90
		::MoleMole::AIMoveTargetType TargetType2; // 0x98
		::MoleMole::AIMoveTargetType TargetType1; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETDISTANCE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETDISTANCE_ONUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTarget1Pos(::System::Boolean& result)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_GETDISTANCE_GETTARGET1POS_OFFSET))(this, result);
		}

		::UnityEngine::Vector3 GetTarget2Pos(::System::Boolean& result)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_GETDISTANCE_GETTARGET2POS_OFFSET))(this, result);
		}

		::UnityEngine::Vector3 GetTargetPosition(::MoleMole::AIMoveTargetType targetType, ::System::Boolean& result, ::System::String* anchorName, ::System::String* attachPoint, ::System::String* customTargetKey)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::AIMoveTargetType, ::System::Boolean&, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETDISTANCE_GETTARGETPOSITION_OFFSET))(this, targetType, result, anchorName, attachPoint, customTargetKey);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETDISTANCE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
