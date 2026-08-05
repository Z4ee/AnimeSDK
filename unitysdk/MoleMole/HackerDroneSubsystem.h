#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_1_3F2E265789E0C820;
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace MoleMole::Config { class HackerDroneConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HACKERDRONESUBSYSTEM_DESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0x19253160)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_GET_POSSESSEDDRONE_OFFSET UNITYSDK_OFFSET(0x192530C0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_INITCONTEXT_OFFSET UNITYSDK_OFFSET(0x192530D0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x192539E0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19253A90)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x19254FF0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19254F80)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_ONPOSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19254D30)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19254AE0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_POSSESSDRONE_OFFSET UNITYSDK_OFFSET(0x19254020)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_REGISTER_OFFSET UNITYSDK_OFFSET(0x19253C50)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_TRYDISPOSECAMERA_OFFSET UNITYSDK_OFFSET(0x192548A0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_TRYGETCONTEXT_1_OFFSET UNITYSDK_OFFSET(0x19253F40)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_TRYGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x19253DA0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_UNPOSSESSDRONE_OFFSET UNITYSDK_OFFSET(0x19253280)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x19253E70)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_UPDATECONTEXT_OFFSET UNITYSDK_OFFSET(0x192538B0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_UPDATEGLOBALVALUE_OFFSET UNITYSDK_OFFSET(0x19254960)
#define MOLEMOLE_HACKERDRONESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x19255080)
#define MOLEMOLE_HACKERDRONESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19255060)
#define MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x192550C0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19255150)
#define MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x192551E0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19255280)
#define MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONPOSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19255320)
#define MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x192553C0)

namespace MoleMole
{
	inline static constexpr unsigned int HackerDroneSubsystem_TypeDefinitionIndex = 83301;

	class HackerDroneSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::HackerDroneSubsystem*>
	{
	public:
		static ::System::Boolean* StaticGet_EnableContextPostLateUpdate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HackerDroneSubsystem_TypeDefinitionIndex)->GetStaticField(0xE320);
		}
		static ::System::Int32* StaticGet_ShaderNameIDDronePosition()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HackerDroneSubsystem_TypeDefinitionIndex)->GetStaticField(0xE324);
		}
		::System::Collections::Generic::List_1<::Class_1_3F2E265789E0C820*>* _contexts; // 0x10
		::MoleMole::EntityHandle _possessedDrone; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM__CCTOR_OFFSET))();
		}

		::MoleMole::EntityHandle get_PossessedDrone()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_GET_POSSESSEDDRONE_OFFSET))(this);
		}

		::System::Void InitContext(::Class_1_3F2E265789E0C820* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3F2E265789E0C820*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_INITCONTEXT_OFFSET))(this, context);
		}

		::System::Void DestroyContext(::Class_1_3F2E265789E0C820* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3F2E265789E0C820*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_DESTROYCONTEXT_OFFSET))(this, context);
		}

		::System::Void UpdateContext(::Class_1_3F2E265789E0C820* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3F2E265789E0C820*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_UPDATECONTEXT_OFFSET))(this, context);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void Register(::MoleMole::EntityHandle entity, ::MoleMole::Config::HackerDroneConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::Config::HackerDroneConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_REGISTER_OFFSET))(this, entity, config);
		}

		::System::Void Unregister(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_UNREGISTER_OFFSET))(this, entity);
		}

		::System::Void PossessDrone(::MoleMole::EntityHandle entity, ::MoleMole::Cameras::ScopedOverShoulderCamera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::Cameras::ScopedOverShoulderCamera*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_POSSESSDRONE_OFFSET))(this, entity, camera);
		}

		::System::Void UnpossessDrone(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_UNPOSSESSDRONE_OFFSET))(this, entityHandle);
		}

		::System::Void TryDisposeCamera(::Class_1_3F2E265789E0C820* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3F2E265789E0C820*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_TRYDISPOSECAMERA_OFFSET))(this, context);
		}

		::System::Void UpdateGlobalValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_UPDATEGLOBALVALUE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnPostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_ONPOSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_ONLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnFixedUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_ONFIXEDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Boolean TryGetContext(::System::UInt32 entityID, ::Class_1_3F2E265789E0C820*& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_3F2E265789E0C820*&))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_TRYGETCONTEXT_OFFSET))(this, entityID, context);
		}

		::System::Boolean TryGetContext_1(::System::UInt32 entityID, ::Class_1_3F2E265789E0C820*& context, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_3F2E265789E0C820*&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_TRYGETCONTEXT_1_OFFSET))(this, entityID, context, index);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnFixedUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnPostLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONPOSTLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
