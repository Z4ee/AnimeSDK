#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_2B2F6402EA3EAA0F;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_AFTERPROPMOVED_OFFSET UNITYSDK_OFFSET(0xD84D1C0)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_BEFOREPROPMOVE_OFFSET UNITYSDK_OFFSET(0xD84D0F0)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_MOVEDDELEGATE_OFFSET UNITYSDK_OFFSET(0xD84CF70)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_NEEDREFRESHRAYCAST_OFFSET UNITYSDK_OFFSET(0xD84CF90)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xD84CF50)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_INITPROPMOVEMENT_OFFSET UNITYSDK_OFFSET(0xD84D010)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD84CFB0)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_MOVEDDELEGATE_OFFSET UNITYSDK_OFFSET(0xD84CF80)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_NEEDREFRESHRAYCAST_OFFSET UNITYSDK_OFFSET(0xD84CFA0)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xD84CF60)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xD84D3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMovementPropHandle_TypeDefinitionIndex = 68577;

	class MonoMovementPropHandle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* Warning; // 0x18
		::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x20
		::Class_3_2B2F6402EA3EAA0F* _MovedDelegate_k__BackingField; // 0x28
		::System::Boolean _NeedRefreshRaycast_k__BackingField; // 0x30
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x34
		::UnityEngine::Quaternion PACGNNNBPEI; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_OWNERENTITY_OFFSET))(this, a1);
		}

		::Class_3_2B2F6402EA3EAA0F* get_MovedDelegate()
		{
			return ((::Class_3_2B2F6402EA3EAA0F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_MOVEDDELEGATE_OFFSET))(this);
		}

		::System::Void set_MovedDelegate(::Class_3_2B2F6402EA3EAA0F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_2B2F6402EA3EAA0F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_MOVEDDELEGATE_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedRefreshRaycast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_NEEDREFRESHRAYCAST_OFFSET))(this);
		}

		::System::Void set_NeedRefreshRaycast(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_NEEDREFRESHRAYCAST_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_ONENABLE_OFFSET))(this);
		}

		::System::Void InitPropMovement(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_INITPROPMOVEMENT_OFFSET))(this, a1);
		}

		::System::Void BeforePropMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_BEFOREPROPMOVE_OFFSET))(this);
		}

		::System::Void AfterPropMoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_AFTERPROPMOVED_OFFSET))(this);
		}
	};
}
