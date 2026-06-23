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

#define MOLEMOLE_COMPAREDISTANCEANDHEIGHT_COMPAREHEIGHT_OFFSET UNITYSDK_OFFSET(0x12B1F050)
#define MOLEMOLE_COMPAREDISTANCEANDHEIGHT_DISTANCEXZ_OFFSET UNITYSDK_OFFSET(0x12B1EF90)
#define MOLEMOLE_COMPAREDISTANCEANDHEIGHT_GETTARGET1POS_OFFSET UNITYSDK_OFFSET(0x12B1F210)
#define MOLEMOLE_COMPAREDISTANCEANDHEIGHT_GETTARGET2POS_OFFSET UNITYSDK_OFFSET(0x12B207C0)
#define MOLEMOLE_COMPAREDISTANCEANDHEIGHT_GETTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x12B1F330)
#define MOLEMOLE_COMPAREDISTANCEANDHEIGHT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B1E8C0)
#define MOLEMOLE_COMPAREDISTANCEANDHEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B208E0)
#define MOLEMOLE_COMPAREDISTANCEANDHEIGHT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B20980)

namespace MoleMole
{
	inline static constexpr unsigned int CompareDistanceAndHeight_TypeDefinitionIndex = 80958;

	class CompareDistanceAndHeight : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* TargetAnchorName1; // 0x50
		::BehaviorDesigner::Runtime::SharedFloat* BottomHeightOffset; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* SharedCompareDistance; // 0x60
		::System::String* Target1AttachPoint; // 0x68
		::System::String* TargetTypeCustomKey2; // 0x70
		::System::String* TargetTypeCustomKey1; // 0x78
		::BehaviorDesigner::Runtime::SharedFloat* TopHeightOffset; // 0x80
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x88
		::System::String* Target2AttachPoint; // 0x90
		::BehaviorDesigner::Runtime::SharedString* TargetAnchorName2; // 0x98
		::MoleMole::AIMoveTargetType TargetType2; // 0xA0
		::MoleMole::AIMoveTargetType TargetType1; // 0xA4
		::MoleMole::AICompareType Type; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREDISTANCEANDHEIGHT__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREDISTANCEANDHEIGHT_ONUPDATE_OFFSET))(this);
		}

		::System::Single DistanceXZ(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREDISTANCEANDHEIGHT_DISTANCEXZ_OFFSET))(this, pos1, pos2);
		}

		::System::Boolean CompareHeight(::UnityEngine::Vector3 selfPos, ::UnityEngine::Vector3 targetPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREDISTANCEANDHEIGHT_COMPAREHEIGHT_OFFSET))(this, selfPos, targetPos);
		}

		::UnityEngine::Vector3 GetTarget1Pos(::System::Boolean& result)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREDISTANCEANDHEIGHT_GETTARGET1POS_OFFSET))(this, result);
		}

		::UnityEngine::Vector3 GetTarget2Pos(::System::Boolean& result)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREDISTANCEANDHEIGHT_GETTARGET2POS_OFFSET))(this, result);
		}

		::UnityEngine::Vector3 GetTargetPosition(::MoleMole::AIMoveTargetType targetType, ::System::Boolean& result, ::System::String* anchorName, ::System::String* attachPoint, ::System::String* customTargetKey)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::AIMoveTargetType, ::System::Boolean&, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREDISTANCEANDHEIGHT_GETTARGETPOSITION_OFFSET))(this, targetType, result, anchorName, attachPoint, customTargetKey);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPAREDISTANCEANDHEIGHT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
