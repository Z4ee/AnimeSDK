#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_432942E6E9915B35.h"
#include "unitysdk/Enum_3_F27E25827C684939.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GOALPATHSUBSYSTEM_DESTROYALLGOALPATH_OFFSET UNITYSDK_OFFSET(0x18B36BF0)
#define MOLEMOLE_GOALPATHSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18B36AC0)
#define MOLEMOLE_GOALPATHSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18B36B80)
#define MOLEMOLE_GOALPATHSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18B36B20)
#define MOLEMOLE_GOALPATHSUBSYSTEM_REGISTERFIXEDPATH_OFFSET UNITYSDK_OFFSET(0x18B37E50)
#define MOLEMOLE_GOALPATHSUBSYSTEM_REGISTERGOALPATH_OFFSET UNITYSDK_OFFSET(0x18B36E80)
#define MOLEMOLE_GOALPATHSUBSYSTEM_UNREGISTERGOALPATH_OFFSET UNITYSDK_OFFSET(0x18B38460)
#define MOLEMOLE_GOALPATHSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18B38700)
#define MOLEMOLE_GOALPATHSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18B38790)
#define MOLEMOLE_GOALPATHSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18B38820)
#define MOLEMOLE_GOALPATHSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18B388B0)

namespace MoleMole
{
	inline static constexpr unsigned int GoalPathSubsystem_TypeDefinitionIndex = 55637;

	class GoalPathSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::GoalPathSubsystem*>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::EntityHandle>* _goalPathDictionary; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GOALPATHSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GOALPATHSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GOALPATHSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GOALPATHSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void DestroyAllGoalPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GOALPATHSUBSYSTEM_DESTROYALLGOALPATH_OFFSET))(this);
		}

		::System::Void RegisterGoalPath(::System::String* key, ::UnityEngine::Vector3 source, ::UnityEngine::Vector3 target, ::System::Single offMeshDistance, ::System::Single edgeAvoidDistance, ::System::Single heightOffset, ::System::Single speed, ::System::Single spawnInterval, ::Enum_3_F27E25827C684939 pathType, ::Enum_3_432942E6E9915B35 destroyType, ::System::Single destroyDistance, ::System::Single destroyTime, ::System::Boolean keepParticleOnDestroy, ::System::Boolean ignoreOffsetOnBothEnd, ::System::Action* onGoalPathDestroyed)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Enum_3_F27E25827C684939, ::Enum_3_432942E6E9915B35, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_GOALPATHSUBSYSTEM_REGISTERGOALPATH_OFFSET))(this, key, source, target, offMeshDistance, edgeAvoidDistance, heightOffset, speed, spawnInterval, pathType, destroyType, destroyDistance, destroyTime, keepParticleOnDestroy, ignoreOffsetOnBothEnd, onGoalPathDestroyed);
		}

		::System::Void RegisterFixedPath(::System::String* key, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* fixedPath, ::System::Single speed, ::System::Single spawnInterval, ::Enum_3_F27E25827C684939 pathType, ::Enum_3_432942E6E9915B35 destroyType, ::System::Single destroyDistance, ::System::Single destroyTime, ::System::Boolean keepParticleOnDestroy, ::System::Action* onGoalPathDestroyed)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Single, ::Enum_3_F27E25827C684939, ::Enum_3_432942E6E9915B35, ::System::Single, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_GOALPATHSUBSYSTEM_REGISTERFIXEDPATH_OFFSET))(this, key, fixedPath, speed, spawnInterval, pathType, destroyType, destroyDistance, destroyTime, keepParticleOnDestroy, onGoalPathDestroyed);
		}

		::System::Void UnregisterGoalPath(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GOALPATHSUBSYSTEM_UNREGISTERGOALPATH_OFFSET))(this, key);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GOALPATHSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GOALPATHSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GOALPATHSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
