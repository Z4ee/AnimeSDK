#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Billboard { class BillboardIdentifier; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_CREATE_OFFSET UNITYSDK_OFFSET(0xB4350E0)
#define RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_GETATTACHTRANS_OFFSET UNITYSDK_OFFSET(0xB4353C0)
#define RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_GETCURRENTDISTANCE_OFFSET UNITYSDK_OFFSET(0xB4351D0)
#define RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xB4351C0)
#define RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xB4355C0)
#define RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST__CTOR_OFFSET UNITYSDK_OFFSET(0xB435170)

namespace RPG::Client::Billboard
{
	inline static constexpr unsigned int EntityTemporaryBillboardHost_TypeDefinitionIndex = 69853;

	class EntityTemporaryBillboardHost : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _AttachTrans; // 0x10
		::RPG::Client::Billboard::BillboardIdentifier* _Identifier_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* _OwnerRef; // 0x20

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::Billboard::EntityTemporaryBillboardHost* Create(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::Billboard::EntityTemporaryBillboardHost*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_CREATE_OFFSET))(a1);
		}

		::RPG::Client::Billboard::BillboardIdentifier* get_Identifier()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Single GetCurrentDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_GETCURRENTDISTANCE_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_ISVISIBLE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAttachTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARD_ENTITYTEMPORARYBILLBOARDHOST_GETATTACHTRANS_OFFSET))(this);
		}
	};
}
