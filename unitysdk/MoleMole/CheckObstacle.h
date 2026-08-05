#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/AITargetType.h"
#include "unitysdk/MoleMole/CheckObstacle_ShapeType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_06419CA21ECB69E6;
class Class_3_0D4C1A014C7CC9DE;
class Class_3_4E22895815E0F387;
class Class_3_C93CC3D2C2AC4067;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_CHECKOBSTACLE_BOXCHECK_OFFSET UNITYSDK_OFFSET(0x116DC180)
#define MOLEMOLE_CHECKOBSTACLE_CHECKANGLE_OFFSET UNITYSDK_OFFSET(0x116DCEE0)
#define MOLEMOLE_CHECKOBSTACLE_CHECKNAVMESHANGLE_OFFSET UNITYSDK_OFFSET(0x116DB7B0)
#define MOLEMOLE_CHECKOBSTACLE_ISENTITYVAILD_OFFSET UNITYSDK_OFFSET(0x116DD4B0)
#define MOLEMOLE_CHECKOBSTACLE_NAVMESHCHECK_OFFSET UNITYSDK_OFFSET(0x116DA100)
#define MOLEMOLE_CHECKOBSTACLE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x116D9A60)
#define MOLEMOLE_CHECKOBSTACLE_ONEND_OFFSET UNITYSDK_OFFSET(0x116DA1D0)
#define MOLEMOLE_CHECKOBSTACLE_ONSTART_OFFSET UNITYSDK_OFFSET(0x116D9FE0)
#define MOLEMOLE_CHECKOBSTACLE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x116DA0B0)
#define MOLEMOLE_CHECKOBSTACLE_SETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x116DA240)
#define MOLEMOLE_CHECKOBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x116DD510)
#define MOLEMOLE_CHECKOBSTACLE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x116DD610)
#define MOLEMOLE_CHECKOBSTACLE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x116DD6A0)
#define MOLEMOLE_CHECKOBSTACLE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x116DD730)
#define MOLEMOLE_CHECKOBSTACLE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x116DD7C0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckObstacle_TypeDefinitionIndex = 49674;

	class CheckObstacle : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_s_boxCastHitBuffer()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(CheckObstacle_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x50
		::BehaviorDesigner::Runtime::SharedString* targetAnchorName; // 0x58
		::MoleMole::Battle::Entity* targetEntity; // 0x60
		::MoleMole::Battle::Entity* ownerEntity; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* tagListTmp; // 0x70
		::Class_3_0D4C1A014C7CC9DE* levelaiComponent; // 0x78
		::Class_3_C93CC3D2C2AC4067* characterModel; // 0x80
		::BehaviorDesigner::Runtime::SharedString* ownerCustomName; // 0x88
		::Class_3_06419CA21ECB69E6* attackTargetComponent; // 0x90
		::Il2CppArray<::UnityEngine::RaycastHit>* rayResults; // 0x98
		::BehaviorDesigner::Runtime::SharedFloat* minDistance; // 0xA0
		::BehaviorDesigner::Runtime::SharedFloat* BoxWidth; // 0xA8
		::Class_3_4E22895815E0F387* stageComponent; // 0xB0
		::BehaviorDesigner::Runtime::SharedFloat* BoxHeight; // 0xB8
		::BehaviorDesigner::Runtime::SharedBool* SelfToTarget; // 0xC0
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* currentObstacles; // 0xC8
		::BehaviorDesigner::Runtime::SharedFloat* BoxDistance; // 0xD0
		::BehaviorDesigner::Runtime::SharedFloat* maxDistance; // 0xD8
		::MoleMole::AITargetType ownerType; // 0xE0
		::System::Single AngleMax; // 0xE4
		::MoleMole::CheckObstacle_ShapeType CheckShape; // 0xE8
		::UnityEngine::Vector3 BoxCenter; // 0xEC
		::System::Boolean IsSymmetry; // 0xF8
		::System::Single AngleMin; // 0xFC
		::System::Int32 _collisionLayerMask; // 0x100
		::MoleMole::AIMoveTargetType targetType; // 0x104
		::UnityEngine::Vector3 targetPos; // 0x108
		::UnityEngine::Vector3 targetForward; // 0x114

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
