#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class GridFightOrbEntityData; }
namespace UnityEngine { class SphereCollider; }

#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_GET_ORBTYPE_OFFSET UNITYSDK_OFFSET(0x9853CB0)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x9853CD0)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_GET_UID_OFFSET UNITYSDK_OFFSET(0x9853C90)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_GET__ORBDATA_OFFSET UNITYSDK_OFFSET(0x9853C70)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9853F30)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SETORBDATA_OFFSET UNITYSDK_OFFSET(0x9853DC0)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SETORBTYPE_OFFSET UNITYSDK_OFFSET(0x9853D70)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x9853ED0)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SETUID_OFFSET UNITYSDK_OFFSET(0x9853D20)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SET_ORBTYPE_OFFSET UNITYSDK_OFFSET(0x9853CC0)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SET_UID_OFFSET UNITYSDK_OFFSET(0x9853CA0)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SET__ORBDATA_OFFSET UNITYSDK_OFFSET(0x9853C80)
#define RPG_CLIENT_GRIDFIGHTINTERACTABLEORB__CTOR_OFFSET UNITYSDK_OFFSET(0x9853F80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightInteractableOrb_TypeDefinitionIndex = 52357;

	class GridFightInteractableOrb : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::GridFightOrbEntityData* __OrbData_k__BackingField; // 0x18
		::System::UInt32 _UID_k__BackingField; // 0x20
		::RPG::GameCore::GridFightOrbType _OrbType_k__BackingField; // 0x24
		::UnityEngine::Vector3 _pos; // 0x28
		::UnityEngine::SphereCollider* _boundingBox; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightOrbEntityData* get__OrbData()
		{
			return ((::RPG::Client::GridFightOrbEntityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_GET__ORBDATA_OFFSET))(this);
		}

		::System::Void set__OrbData(::RPG::Client::GridFightOrbEntityData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SET__ORBDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SET_UID_OFFSET))(this, value);
		}

		::RPG::GameCore::GridFightOrbType get_OrbType()
		{
			return ((::RPG::GameCore::GridFightOrbType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_GET_ORBTYPE_OFFSET))(this);
		}

		::System::Void set_OrbType(::RPG::GameCore::GridFightOrbType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SET_ORBTYPE_OFFSET))(this, value);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_GET_RADIUS_OFFSET))(this);
		}

		::System::Void SetUID(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SETUID_OFFSET))(this, uid);
		}

		::System::Void SetOrbType(::RPG::GameCore::GridFightOrbType orbType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightOrbType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SETORBTYPE_OFFSET))(this, orbType);
		}

		::System::Void SetOrbData(::RPG::Client::GridFightOrbEntityData* orbData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SETORBDATA_OFFSET))(this, orbData);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_SETPOSITION_OFFSET))(this, pos);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTINTERACTABLEORB_ONDESTROY_OFFSET))(this);
		}
	};
}
