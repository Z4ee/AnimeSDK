#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/AITargetType.h"
#include "unitysdk/MoleMole/CheckObstacle_ShapeType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_0D4C1A014C7CC9DE;
class Class_3_4E22895815E0F387;
class Class_3_CF6254B260CF5CF4;
class Class_3_DFD5D1FDB9D2A4AC;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_CHECKOBSTACLE_BOXCHECK_OFFSET UNITYSDK_OFFSET(0x10CE1930)
#define MOLEMOLE_CHECKOBSTACLE_CHECKANGLE_OFFSET UNITYSDK_OFFSET(0x10CE22A0)
#define MOLEMOLE_CHECKOBSTACLE_CHECKNAVMESHANGLE_OFFSET UNITYSDK_OFFSET(0x10CE1420)
#define MOLEMOLE_CHECKOBSTACLE_ISENTITYVAILD_OFFSET UNITYSDK_OFFSET(0x10CE2880)
#define MOLEMOLE_CHECKOBSTACLE_NAVMESHCHECK_OFFSET UNITYSDK_OFFSET(0x10CE0120)
#define MOLEMOLE_CHECKOBSTACLE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10CDFA70)
#define MOLEMOLE_CHECKOBSTACLE_ONEND_OFFSET UNITYSDK_OFFSET(0x10CE01F0)
#define MOLEMOLE_CHECKOBSTACLE_ONSTART_OFFSET UNITYSDK_OFFSET(0x10CE0000)
#define MOLEMOLE_CHECKOBSTACLE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10CE00D0)
#define MOLEMOLE_CHECKOBSTACLE_SETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x10CE0260)
#define MOLEMOLE_CHECKOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x10CE28E0)
#define MOLEMOLE_CHECKOBSTACLE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10CE29E0)
#define MOLEMOLE_CHECKOBSTACLE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x10CE2A70)
#define MOLEMOLE_CHECKOBSTACLE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x10CE2B00)
#define MOLEMOLE_CHECKOBSTACLE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x10CE2B90)

namespace MoleMole
{
	inline static constexpr unsigned int CheckObstacle_TypeDefinitionIndex = 66663;

	class CheckObstacle : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* currentObstacles; // 0x50
		::BehaviorDesigner::Runtime::SharedString* ownerCustomName; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::Il2CppArray<::UnityEngine::RaycastHit>* rayResults; // 0x68
		::Class_3_CF6254B260CF5CF4* attackTargetComponent; // 0x70
		::BehaviorDesigner::Runtime::SharedBool* SelfToTarget; // 0x78
		::MoleMole::Battle::Entity* ownerEntity; // 0x80
		::BehaviorDesigner::Runtime::SharedFloat* BoxWidth; // 0x88
		::System::Collections::Generic::List_1<::System::String*>* tagListTmp; // 0x90
		::Class_3_DFD5D1FDB9D2A4AC* characterModel; // 0x98
		::MoleMole::Battle::Entity* targetEntity; // 0xA0
		::BehaviorDesigner::Runtime::SharedString* targetAnchorName; // 0xA8
		::Class_3_4E22895815E0F387* stageComponent; // 0xB0
		::BehaviorDesigner::Runtime::SharedFloat* maxDistance; // 0xB8
		::BehaviorDesigner::Runtime::SharedFloat* BoxHeight; // 0xC0
		::BehaviorDesigner::Runtime::SharedFloat* minDistance; // 0xC8
		::Class_3_0D4C1A014C7CC9DE* levelaiComponent; // 0xD0
		::BehaviorDesigner::Runtime::SharedFloat* BoxDistance; // 0xD8
		::System::Single AngleMax; // 0xE0
		::MoleMole::AITargetType ownerType; // 0xE4
		::MoleMole::CheckObstacle_ShapeType CheckShape; // 0xE8
		::UnityEngine::Vector3 targetForward; // 0xEC
		::System::Int32 _collisionLayerMask; // 0xF8
		::UnityEngine::Vector3 targetPos; // 0xFC
		::System::Boolean IsSymmetry; // 0x108
		::MoleMole::AIMoveTargetType targetType; // 0x10C
		::System::Single AngleMin; // 0x110
		::UnityEngine::Vector3 BoxCenter; // 0x114

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_ONEND_OFFSET))(this);
		}

		::System::Boolean NavmeshCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_NAVMESHCHECK_OFFSET))(this);
		}

		::System::Boolean BoxCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_BOXCHECK_OFFSET))(this);
		}

		::System::Boolean CheckNavmeshAngle(::System::Single minAngle, ::System::Single maxAngle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_CHECKNAVMESHANGLE_OFFSET))(this, minAngle, maxAngle);
		}

		::System::Boolean CheckAngle(::System::Single minAngle, ::System::Single maxAngle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_CHECKANGLE_OFFSET))(this, minAngle, maxAngle);
		}

		::System::Boolean SetTargetPos()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_SETTARGETPOS_OFFSET))(this);
		}

		::System::Boolean IsEntityVaild(::MoleMole::Battle::Entity* ent)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE_ISENTITYVAILD_OFFSET))(this, ent);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKOBSTACLE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
