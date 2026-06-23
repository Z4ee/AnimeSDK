#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_CF6254B260CF5CF4;
class Class_3_DFD5D1FDB9D2A4AC;
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETATTACHPOINTVALUE_OFFSET UNITYSDK_OFFSET(0x16294670)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETFINALCHECKENTITYPOS_OFFSET UNITYSDK_OFFSET(0x16295240)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETFINALSTARTENTITYPOS_OFFSET UNITYSDK_OFFSET(0x16295780)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETSAVEPOINTVALUE_OFFSET UNITYSDK_OFFSET(0x16294290)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETSTARTATTACHPOINTVALUE_OFFSET UNITYSDK_OFFSET(0x16294860)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETSTARTENTITY_OFFSET UNITYSDK_OFFSET(0x16294F80)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETSTARTPOS_OFFSET UNITYSDK_OFFSET(0x16293270)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETSTARTSAVEPOINTVALUE_OFFSET UNITYSDK_OFFSET(0x16294480)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETTARGETENTITY_1_OFFSET UNITYSDK_OFFSET(0x162950E0)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x16294AC0)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x162938F0)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA_ISENTITYTARGET_OFFSET UNITYSDK_OFFSET(0x16295720)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA_ONEND_OFFSET UNITYSDK_OFFSET(0x16294A50)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA_ONSTART_OFFSET UNITYSDK_OFFSET(0x16292A50)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16292D00)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x16295C60)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x16295D50)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x16295DE0)
#define MOLEMOLE_CHECKTARGETINNAVMESHAREA___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16295E70)

namespace MoleMole
{
	inline static constexpr unsigned int CheckTargetInNavmeshArea_TypeDefinitionIndex = 45578;

	class CheckTargetInNavmeshArea : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		// static const ::System::Single DISTANCE_SQR_PRECISION; // 0x0
		// static const ::System::Single DISTANCE_Y_PRECISION; // 0x0
		::BehaviorDesigner::Runtime::SharedString* BackupStartAttachPoint; // 0x50
		::Class_3_DFD5D1FDB9D2A4AC* characterModelComponent; // 0x58
		::BehaviorDesigner::Runtime::SharedString* StartSavePoint; // 0x60
		::BehaviorDesigner::Runtime::SharedString* StartCustomKey; // 0x68
		::BehaviorDesigner::Runtime::SharedString* BackupTargetAnchorName; // 0x70
		::BehaviorDesigner::Runtime::SharedString* TargetSavePoint; // 0x78
		::BehaviorDesigner::Runtime::SharedString* TargetAnchorName; // 0x80
		::BehaviorDesigner::Runtime::SharedString* BackupTargetSavePoint; // 0x88
		::BehaviorDesigner::Runtime::SharedString* TargetCustomKey; // 0x90
		::Il2CppArray<::UnityEngine::Vector3>* navMeshPathCorners; // 0x98
		::BehaviorDesigner::Runtime::SharedString* StartAnchorName; // 0xA0
		::BehaviorDesigner::Runtime::SharedString* StartAttachPoint; // 0xA8
		::Class_3_CF6254B260CF5CF4* attackTargetComponent; // 0xB0
		::BehaviorDesigner::Runtime::SharedString* BackupStartCustomKey; // 0xB8
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0xC0
		::BehaviorDesigner::Runtime::SharedString* BackupTargetAttachPoint; // 0xC8
		::BehaviorDesigner::Runtime::SharedString* BackupStartSavePoint; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* cachedDataPath; // 0xD8
		::BehaviorDesigner::Runtime::SharedString* BackupStartAnchorName; // 0xE0
		::BehaviorDesigner::Runtime::SharedString* BackupTargetCustomKey; // 0xE8
		::BehaviorDesigner::Runtime::SharedString* TargetAttachPoint; // 0xF0
		::MoleMole::AIMoveTargetType TargetType; // 0xF8
		::MoleMole::AIMoveTargetType StartTargetType; // 0xFC
		::MoleMole::AIMoveTargetType BackUpStartTargetType; // 0x100
		::MoleMole::AIMoveTargetType BackUpTargetType; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA_ONUPDATE_OFFSET))(this);
		}

		::System::String* GetSavePointValue(::System::Boolean useBackUp)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETSAVEPOINTVALUE_OFFSET))(this, useBackUp);
		}

		::System::String* GetStartSavePointValue(::System::Boolean useBackUp)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETSTARTSAVEPOINTVALUE_OFFSET))(this, useBackUp);
		}

		::System::String* GetAttachPointValue(::System::Boolean useBackUp)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETATTACHPOINTVALUE_OFFSET))(this, useBackUp);
		}

		::System::String* GetStartAttachPointValue(::System::Boolean useBackUp)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETSTARTATTACHPOINTVALUE_OFFSET))(this, useBackUp);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA_ONEND_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetTargetEntity(::MoleMole::AIMoveTargetType targetType, ::System::String* customKey)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::AIMoveTargetType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETTARGETENTITY_OFFSET))(this, targetType, customKey);
		}

		::MoleMole::Battle::Entity* GetStartEntity(::System::Boolean isBackUp)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETSTARTENTITY_OFFSET))(this, isBackUp);
		}

		::MoleMole::Battle::Entity* GetTargetEntity_1(::System::Boolean isBackUp)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETTARGETENTITY_1_OFFSET))(this, isBackUp);
		}

		::UnityEngine::Vector3 GetFinalCheckEntityPos(::System::Boolean& findTarget, ::System::Boolean isBackUp)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETFINALCHECKENTITYPOS_OFFSET))(this, findTarget, isBackUp);
		}

		::System::Boolean IsEntityTarget(::MoleMole::AIMoveTargetType targetType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AIMoveTargetType))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA_ISENTITYTARGET_OFFSET))(this, targetType);
		}

		::UnityEngine::Vector3 GetFinalStartEntityPos(::System::Boolean& findTarget, ::System::Boolean isBackUp)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETFINALSTARTENTITYPOS_OFFSET))(this, findTarget, isBackUp);
		}

		::System::Boolean GetTargetPos(::UnityEngine::Vector3& position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETTARGETPOS_OFFSET))(this, position);
		}

		::System::Boolean GetStartPos(::UnityEngine::Vector3& position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA_GETSTARTPOS_OFFSET))(this, position);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKTARGETINNAVMESHAREA___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
