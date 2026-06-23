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

#define MOLEMOLE_COMPAREDISTANCE_GETTARGET1POS_OFFSET UNITYSDK_OFFSET(0x13FF6270)
#define MOLEMOLE_COMPAREDISTANCE_GETTARGET2POS_OFFSET UNITYSDK_OFFSET(0x13FF7910)
#define MOLEMOLE_COMPAREDISTANCE_GETTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x13FF6390)
#define MOLEMOLE_COMPAREDISTANCE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13FF5ED0)
#define MOLEMOLE_COMPAREDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF7A30)
#define MOLEMOLE_COMPAREDISTANCE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13FF7AD0)

namespace MoleMole
{
	inline static constexpr unsigned int CompareDistance_TypeDefinitionIndex = 48942;

	class CompareDistance : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* SharedCompareDistance; // 0x50
		::BehaviorDesigner::Runtime::SharedString* TargetFloorName1; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::BehaviorDesigner::Runtime::SharedString* TargetFloorName2; // 0x68
		::BehaviorDesigner::Runtime::SharedString* TargetGroupName2; // 0x70
		::System::String* Target1AttachPoint; // 0x78
		::System::String* Target2AttachPoint; // 0x80
		::BehaviorDesigner::Runtime::SharedString* TargetAnchorName2; // 0x88
		::BehaviorDesigner::Runtime::SharedString* TargetGroupName1; // 0x90
		::System::String* TargetTypeCustomKey2; // 0x98
		::System::String* TargetTypeCustomKey1; // 0xA0
		::BehaviorDesigner::Runtime::SharedString* TargetAnchorName1; // 0xA8
		::MoleMole::AIMoveTargetType TargetType2; // 0xB0
		::MoleMole::AICompareType Type; // 0xB4
		::MoleMole::AIMoveTargetType TargetType1; // 0xB8

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
