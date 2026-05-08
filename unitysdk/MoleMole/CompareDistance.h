#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AICompareType.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_COMPAREDISTANCE_GETTARGET1POS_OFFSET UNITYSDK_OFFSET(0x141DD1D0)
#define MOLEMOLE_COMPAREDISTANCE_GETTARGET2POS_OFFSET UNITYSDK_OFFSET(0x141DE880)
#define MOLEMOLE_COMPAREDISTANCE_GETTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x141DD2F0)
#define MOLEMOLE_COMPAREDISTANCE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x141DCE30)
#define MOLEMOLE_COMPAREDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x141DE9B0)
#define MOLEMOLE_COMPAREDISTANCE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x141DEA50)

namespace MoleMole
{
	inline static constexpr unsigned int CompareDistance_TypeDefinitionIndex = 62049;

	class CompareDistance : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* TargetFloorName1; // 0x50
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::BehaviorDesigner::Runtime::SharedString* TargetAnchorName1; // 0x60
		::System::String* Target1AttachPoint; // 0x68
		::BehaviorDesigner::Runtime::SharedFloat* SharedCompareDistance; // 0x70
		::BehaviorDesigner::Runtime::SharedString* TargetGroupName2; // 0x78
		::BehaviorDesigner::Runtime::SharedString* TargetFloorName2; // 0x80
		::System::String* TargetTypeCustomKey2; // 0x88
		::System::String* TargetTypeCustomKey1; // 0x90
		::BehaviorDesigner::Runtime::SharedString* TargetAnchorName2; // 0x98
		::BehaviorDesigner::Runtime::SharedString* TargetGroupName1; // 0xA0
		::System::String* Target2AttachPoint; // 0xA8
		::MoleMole::AICompareType Type; // 0xB0
		::MoleMole::AIMoveTargetType TargetType1; // 0xB4
		::MoleMole::AIMoveTargetType TargetType2; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREDISTANCE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREDISTANCE_ONUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTarget1Pos(::System::Boolean& result)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREDISTANCE_GETTARGET1POS_OFFSET))(this, result);
		}

		::UnityEngine::Vector3 GetTarget2Pos(::System::Boolean& result)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREDISTANCE_GETTARGET2POS_OFFSET))(this, result);
		}

		::UnityEngine::Vector3 GetTargetPosition(::MoleMole::AIMoveTargetType targetType, ::System::Boolean& result, ::System::String* anchorName, ::System::String* attachPoint, ::System::String* customTargetKey, ::System::Boolean target1Or2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::AIMoveTargetType, ::System::Boolean&, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREDISTANCE_GETTARGETPOSITION_OFFSET))(this, targetType, result, anchorName, attachPoint, customTargetKey, target1Or2);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREDISTANCE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
