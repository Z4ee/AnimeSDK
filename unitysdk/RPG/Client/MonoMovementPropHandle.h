#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_2B2F6402EA3EAA0F;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_AFTERPROPMOVED_OFFSET UNITYSDK_OFFSET(0xA9E1B30)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_BEFOREPROPMOVE_OFFSET UNITYSDK_OFFSET(0xA9E1A60)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_MOVEDDELEGATE_OFFSET UNITYSDK_OFFSET(0xA9E18E0)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_NEEDREFRESHRAYCAST_OFFSET UNITYSDK_OFFSET(0xA9E1900)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xA9E18C0)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_INITPROPMOVEMENT_OFFSET UNITYSDK_OFFSET(0xA9E1980)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA9E1920)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_MOVEDDELEGATE_OFFSET UNITYSDK_OFFSET(0xA9E18F0)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_NEEDREFRESHRAYCAST_OFFSET UNITYSDK_OFFSET(0xA9E1910)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xA9E18D0)
#define RPG_CLIENT_MONOMOVEMENTPROPHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E1D20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMovementPropHandle_TypeDefinitionIndex = 63274;

	class MonoMovementPropHandle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* Warning; // 0x18
		::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x20
		::Class_3_2B2F6402EA3EAA0F* _MovedDelegate_k__BackingField; // 0x28
		::System::Boolean _NeedRefreshRaycast_k__BackingField; // 0x30
		::UnityEngine::Vector3 Field_5_4; // 0x34
		::UnityEngine::Quaternion Field_5_5; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_OWNERENTITY_OFFSET))(this, value);
		}

		::Class_3_2B2F6402EA3EAA0F* get_MovedDelegate()
		{
			return ((::Class_3_2B2F6402EA3EAA0F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_MOVEDDELEGATE_OFFSET))(this);
		}

		::System::Void set_MovedDelegate(::Class_3_2B2F6402EA3EAA0F* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_2B2F6402EA3EAA0F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_MOVEDDELEGATE_OFFSET))(this, value);
		}

		::System::Boolean get_NeedRefreshRaycast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_GET_NEEDREFRESHRAYCAST_OFFSET))(this);
		}

		::System::Void set_NeedRefreshRaycast(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMOVEMENTPROPHANDLE_SET_NEEDREFRESHRAYCAST_OFFSET))(this, value);
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
