#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_795;
class Class_1_685AC11A7FB5C953;
class Class_1_823894195270E22F;
class Class_1_AE8977CC8DFA35ED_1;
class Class_1_E4E9271419E7BF1D;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SLIDINGSUBSYSTEM_ADDCHECKINGENTITY_OFFSET UNITYSDK_OFFSET(0x160EFCF0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ADDCONTROLENTITY_OFFSET UNITYSDK_OFFSET(0x160EF4B0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ADDDEBUGGER_OFFSET UNITYSDK_OFFSET(0x160EDCF0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ADDROTATIONENTITY_OFFSET UNITYSDK_OFFSET(0x160EF760)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ADDVELOCITY_OFFSET UNITYSDK_OFFSET(0x160EE150)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ENTRYSLIDINGSTATE_OFFSET UNITYSDK_OFFSET(0x160EEA70)
#define MOLEMOLE_SLIDINGSUBSYSTEM_FIXEDUPDATECHECKINGCONTEXT_OFFSET UNITYSDK_OFFSET(0x160F0210)
#define MOLEMOLE_SLIDINGSUBSYSTEM_FIXEDUPDATECONTROLCONTEXT_OFFSET UNITYSDK_OFFSET(0x160F0160)
#define MOLEMOLE_SLIDINGSUBSYSTEM_FIXEDUPDATEROTATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x160F02D0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_GETCURRENTVELOCITY_OFFSET UNITYSDK_OFFSET(0x160EEE10)
#define MOLEMOLE_SLIDINGSUBSYSTEM_GETORCREATECOMMONCONTEXT_OFFSET UNITYSDK_OFFSET(0x160EF030)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ISCHECKINGENTITY_OFFSET UNITYSDK_OFFSET(0x160EED50)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ISSLIDINGENTITY_OFFSET UNITYSDK_OFFSET(0x160EEB90)
#define MOLEMOLE_SLIDINGSUBSYSTEM_MULTIPLYVELOCITY_OFFSET UNITYSDK_OFFSET(0x160EE930)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x160ED9B0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x160EDC70)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x160F0010)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x160F0340)
#define MOLEMOLE_SLIDINGSUBSYSTEM_POPMAXSPEEDXZ_OFFSET UNITYSDK_OFFSET(0x160EF250)
#define MOLEMOLE_SLIDINGSUBSYSTEM_POPSLIDINGFLINGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x160EF330)
#define MOLEMOLE_SLIDINGSUBSYSTEM_PUSHMAXSPEEDXZ_OFFSET UNITYSDK_OFFSET(0x160EEFA0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_PUSHSLIDINGFLINGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x160EF1C0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_REFRESHEXITVELOCITY_OFFSET UNITYSDK_OFFSET(0x160EF410)
#define MOLEMOLE_SLIDINGSUBSYSTEM_REMOVECHECKINGENTITY_OFFSET UNITYSDK_OFFSET(0x160EFE50)
#define MOLEMOLE_SLIDINGSUBSYSTEM_REMOVECONTROLENTITY_OFFSET UNITYSDK_OFFSET(0x160EFA50)
#define MOLEMOLE_SLIDINGSUBSYSTEM_REMOVEDEBUGGER_OFFSET UNITYSDK_OFFSET(0x160EDF20)
#define MOLEMOLE_SLIDINGSUBSYSTEM_REMOVEROTATIONENTITY_OFFSET UNITYSDK_OFFSET(0x160EF8F0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_RESETSLIDINGDIRECTION_OFFSET UNITYSDK_OFFSET(0x160EE7E0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_RESETSURFACE_OFFSET UNITYSDK_OFFSET(0x160F05A0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_SETSLIDINGDIRECTION_OFFSET UNITYSDK_OFFSET(0x160EE290)
#define MOLEMOLE_SLIDINGSUBSYSTEM_SETSURFACE_OFFSET UNITYSDK_OFFSET(0x160F0450)
#define MOLEMOLE_SLIDINGSUBSYSTEM_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x160EE430)
#define MOLEMOLE_SLIDINGSUBSYSTEM_SWITCHINTOFLYING_OFFSET UNITYSDK_OFFSET(0x160EE660)
#define MOLEMOLE_SLIDINGSUBSYSTEM_SWITCHINTOSLIDING_OFFSET UNITYSDK_OFFSET(0x160EFED0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_UPDATECONTROLCONTEXT_OFFSET UNITYSDK_OFFSET(0x160F03E0)
#define MOLEMOLE_SLIDINGSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x160F0760)
#define MOLEMOLE_SLIDINGSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x160F0780)
#define MOLEMOLE_SLIDINGSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x160F0810)
#define MOLEMOLE_SLIDINGSUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x160F08A0)
#define MOLEMOLE_SLIDINGSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x160F0940)

namespace MoleMole
{
	inline static constexpr unsigned int SlidingSubsystem_TypeDefinitionIndex = 86794;

	class SlidingSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::SlidingSubsystem*>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_E4E9271419E7BF1D*>* _rotationContexts; // 0x10
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_795*>* _debuggers; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_685AC11A7FB5C953*>* _controlContexts; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_823894195270E22F*>* _commonContexts; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_AE8977CC8DFA35ED_1*>* _checkingContexts; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void AddDebugger(::Class_0_16E4307DCC419505_795* debugger)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_795*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ADDDEBUGGER_OFFSET))(this, debugger);
		}

		::System::Void RemoveDebugger(::Class_0_16E4307DCC419505_795* debugger)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_795*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_REMOVEDEBUGGER_OFFSET))(this, debugger);
		}

		::System::Void AddVelocity(::MoleMole::Battle::Entity* entity, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ADDVELOCITY_OFFSET))(this, entity, value);
		}

		::System::Void SetSlidingDirection(::MoleMole::Battle::Entity* entity, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_SETSLIDINGDIRECTION_OFFSET))(this, entity, value);
		}

		::System::Void SetVelocity(::MoleMole::Battle::Entity* entity, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_SETVELOCITY_OFFSET))(this, entity, value);
		}

		::System::Void SwitchIntoFlying(::MoleMole::Battle::Entity* entity, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_SWITCHINTOFLYING_OFFSET))(this, entity, duration);
		}

		::System::Void ResetSlidingDirection(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_RESETSLIDINGDIRECTION_OFFSET))(this, entity);
		}

		::System::Void MultiplyVelocity(::MoleMole::Battle::Entity* entity, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_MULTIPLYVELOCITY_OFFSET))(this, entity, value);
		}

		::System::Void EntrySlidingState(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ENTRYSLIDINGSTATE_OFFSET))(this, entity);
		}

		::System::Boolean IsSlidingEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ISSLIDINGENTITY_OFFSET))(this, entity);
		}

		::System::Boolean IsCheckingEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ISCHECKINGENTITY_OFFSET))(this, entity);
		}

		::System::Boolean GetCurrentVelocity(::MoleMole::Battle::Entity* entity, ::UnityEngine::Vector3& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_GETCURRENTVELOCITY_OFFSET))(this, entity, value);
		}

		::System::Void PushMaxSpeedXZ(::MoleMole::Battle::Entity* entity, ::System::String* tag, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_PUSHMAXSPEEDXZ_OFFSET))(this, entity, tag, value);
		}

		::System::Void PushSlidingFlingThreshold(::MoleMole::Battle::Entity* entity, ::System::String* tag, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_PUSHSLIDINGFLINGTHRESHOLD_OFFSET))(this, entity, tag, value);
		}

		::System::Void PopMaxSpeedXZ(::MoleMole::Battle::Entity* entity, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_POPMAXSPEEDXZ_OFFSET))(this, entity, tag);
		}

		::System::Void PopSlidingFlingThreshold(::MoleMole::Battle::Entity* entity, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_POPSLIDINGFLINGTHRESHOLD_OFFSET))(this, entity, tag);
		}

		::System::Void RefreshExitVelocity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_REFRESHEXITVELOCITY_OFFSET))(this, entity);
		}

		::System::Void AddControlEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ADDCONTROLENTITY_OFFSET))(this, entity);
		}

		::Class_1_823894195270E22F* GetOrCreateCommonContext(::MoleMole::Battle::Entity* entity)
		{
			return ((::Class_1_823894195270E22F*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_GETORCREATECOMMONCONTEXT_OFFSET))(this, entity);
		}

		::System::Void AddRotationEntity(::MoleMole::Battle::Entity* entity, ::System::Single rotateSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ADDROTATIONENTITY_OFFSET))(this, entity, rotateSpeed);
		}

		::System::Void RemoveRotationEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_REMOVEROTATIONENTITY_OFFSET))(this, entity);
		}

		::System::Void RemoveControlEntity(::MoleMole::Battle::Entity* entity, ::System::Action_1<::Class_1_685AC11A7FB5C953*>* destroy)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Action_1<::Class_1_685AC11A7FB5C953*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_REMOVECONTROLENTITY_OFFSET))(this, entity, destroy);
		}

		::System::Void AddCheckingEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ADDCHECKINGENTITY_OFFSET))(this, entity);
		}

		::System::Void RemoveCheckingEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_REMOVECHECKINGENTITY_OFFSET))(this, entity);
		}

		::System::Void SwitchIntoSliding(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_SWITCHINTOSLIDING_OFFSET))(this, entity);
		}

		::System::Void OnFixedUpdate(::System::Single _deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ONFIXEDUPDATE_OFFSET))(this, _deltaTime);
		}

		static ::System::Void FixedUpdateControlContext(::System::UInt32 entityId, ::Class_1_685AC11A7FB5C953* context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::UInt32, ::Class_1_685AC11A7FB5C953*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_FIXEDUPDATECONTROLCONTEXT_OFFSET))(entityId, context, deltaTime);
		}

		static ::System::Void FixedUpdateCheckingContext(::System::UInt32 entityId, ::Class_1_AE8977CC8DFA35ED_1* context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::UInt32, ::Class_1_AE8977CC8DFA35ED_1*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_FIXEDUPDATECHECKINGCONTEXT_OFFSET))(entityId, context, deltaTime);
		}

		static ::System::Void FixedUpdateRotationContext(::System::UInt32 entityId, ::Class_1_E4E9271419E7BF1D* context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::UInt32, ::Class_1_E4E9271419E7BF1D*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_FIXEDUPDATEROTATIONCONTEXT_OFFSET))(entityId, context, deltaTime);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		static ::System::Void UpdateControlContext(::System::UInt32 entityId, ::Class_1_685AC11A7FB5C953* context, ::System::Single _)
		{
			return ((::System::Void(*)(::System::UInt32, ::Class_1_685AC11A7FB5C953*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_UPDATECONTROLCONTEXT_OFFSET))(entityId, context, _);
		}

		::System::Void SetSurface(::MoleMole::Battle::Entity* entity, ::MoleMole::Battle::Entity* actor, ::System::String* surface)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_SETSURFACE_OFFSET))(this, entity, actor, surface);
		}

		::System::Void ResetSurface(::MoleMole::Battle::Entity* entity, ::MoleMole::Battle::Entity* actor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_RESETSURFACE_OFFSET))(this, entity, actor);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnFixedUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
