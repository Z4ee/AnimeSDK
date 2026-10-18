#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AttachmentSolver; }

#define RPG_CLIENT_ADDITIVEHITWEAPONATTACHMENTHANDLER_HOLDATTACHMENTRELATIVE_OFFSET UNITYSDK_OFFSET(0xC5C9770)
#define RPG_CLIENT_ADDITIVEHITWEAPONATTACHMENTHANDLER_ISATTACHMENTANIMFIT_OFFSET UNITYSDK_OFFSET(0xC5C9810)
#define RPG_CLIENT_ADDITIVEHITWEAPONATTACHMENTHANDLER_STARTATTACHMENTRELATIVE_OFFSET UNITYSDK_OFFSET(0xC5C9700)
#define RPG_CLIENT_ADDITIVEHITWEAPONATTACHMENTHANDLER_STOPHOLDATTACHMENT_OFFSET UNITYSDK_OFFSET(0xC5C97D0)
#define RPG_CLIENT_ADDITIVEHITWEAPONATTACHMENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC5C9870)

namespace RPG::Client
{
	inline static constexpr unsigned int AdditiveHitWeaponAttachmentHandler_TypeDefinitionIndex = 68353;

	class AdditiveHitWeaponAttachmentHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean GFNEAOLHEGJ; // 0x18
		::System::Int32 CJKPPBOPOCN; // 0x1C
		::RPG::Client::AttachmentSolver* AttachmentSolver; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDITIVEHITWEAPONATTACHMENTHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void StartAttachmentRelative(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDITIVEHITWEAPONATTACHMENTHANDLER_STARTATTACHMENTRELATIVE_OFFSET))(this, a1);
		}

		::System::Void HoldAttachmentRelative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDITIVEHITWEAPONATTACHMENTHANDLER_HOLDATTACHMENTRELATIVE_OFFSET))(this);
		}

		::System::Void StopHoldAttachment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDITIVEHITWEAPONATTACHMENTHANDLER_STOPHOLDATTACHMENT_OFFSET))(this);
		}

		::System::Boolean IsAttachmentAnimFit(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADDITIVEHITWEAPONATTACHMENTHANDLER_ISATTACHMENTANIMFIT_OFFSET))(this, a1);
		}
	};
}
