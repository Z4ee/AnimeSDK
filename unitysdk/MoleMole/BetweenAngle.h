#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_CF6254B260CF5CF4;
class Class_3_DFD5D1FDB9D2A4AC;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_BETWEENANGLE_CLAMPANGLEBETWEENABSPI_OFFSET UNITYSDK_OFFSET(0x17519730)
#define MOLEMOLE_BETWEENANGLE_GETMIRRORANGLE_OFFSET UNITYSDK_OFFSET(0x1751B640)
#define MOLEMOLE_BETWEENANGLE_GETSELFDIRANDPOS_OFFSET UNITYSDK_OFFSET(0x17519C10)
#define MOLEMOLE_BETWEENANGLE_GETTARGETENTITYBYTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1751B6C0)
#define MOLEMOLE_BETWEENANGLE_GETTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1751A8F0)
#define MOLEMOLE_BETWEENANGLE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x17519210)
#define MOLEMOLE_BETWEENANGLE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17519820)
#define MOLEMOLE_BETWEENANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1751BE10)
#define MOLEMOLE_BETWEENANGLE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1751BEE0)
#define MOLEMOLE_BETWEENANGLE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1751BF70)

namespace MoleMole
{
	inline static constexpr unsigned int BetweenAngle_TypeDefinitionIndex = 62834;

	class BetweenAngle : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		// static const ::System::Single MAX_ANGLE; // 0x0
		// static const ::System::Single MIN_ANGLE; // 0x0
		::Class_3_DFD5D1FDB9D2A4AC* modelComponent; // 0x50
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::BehaviorDesigner::Runtime::SharedString* TargetAnchorName1; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* AngleMin; // 0x68
		::BehaviorDesigner::Runtime::SharedFloat* StoreResult; // 0x70
		::BehaviorDesigner::Runtime::SharedString* TargetAnchorName2; // 0x78
		::System::String* TargetTypeCustomKey2; // 0x80
		::BehaviorDesigner::Runtime::SharedBool* IsSymmetry; // 0x88
		::Class_3_CF6254B260CF5CF4* attackTargetComponent; // 0x90
		::System::String* Type2AttachPoint; // 0x98
		::System::String* TargetTypeCustomKey1; // 0xA0
		::BehaviorDesigner::Runtime::SharedFloat* AngleMax; // 0xA8
		::System::String* Type1AttachPoint; // 0xB0
		::MoleMole::AIMoveTargetType TargetType1; // 0xB8
		::System::Single _angleMin; // 0xBC
		::System::Single _angleMax; // 0xC0
		::MoleMole::AIMoveTargetType TargetType2; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BETWEENANGLE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BETWEENANGLE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BETWEENANGLE_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean GetSelfDirAndPos(::UnityEngine::Vector3& dir, ::UnityEngine::Vector3& pos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_BETWEENANGLE_GETSELFDIRANDPOS_OFFSET))(this, dir, pos);
		}

		::System::Single GetMirrorAngle(::System::Single angle)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BETWEENANGLE_GETMIRRORANGLE_OFFSET))(this, angle);
		}

		::System::Single ClampAngleBetweenAbsPI(::System::Single angle)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BETWEENANGLE_CLAMPANGLEBETWEENABSPI_OFFSET))(this, angle);
		}

		::UnityEngine::Vector3 GetTargetPosition(::MoleMole::AIMoveTargetType targetType, ::System::String* attachPoint, ::System::String* anchorName, ::System::String* customTargetKey)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::AIMoveTargetType, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BETWEENANGLE_GETTARGETPOSITION_OFFSET))(this, targetType, attachPoint, anchorName, customTargetKey);
		}

		::MoleMole::Battle::Entity* GetTargetEntityByTargetType(::MoleMole::AIMoveTargetType targetType, ::System::String* customTargetKey, ::UnityEngine::Transform*& targetTransform)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::AIMoveTargetType, ::System::String*, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + MOLEMOLE_BETWEENANGLE_GETTARGETENTITYBYTARGETTYPE_OFFSET))(this, targetType, customTargetKey, targetTransform);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BETWEENANGLE___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BETWEENANGLE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
