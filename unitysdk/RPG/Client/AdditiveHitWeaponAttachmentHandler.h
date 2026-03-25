#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AttachmentSolver; }

#define RPG_CLIENT_ADDITIVEHITWEAPONATTACHMENTHANDLER_HOLDATTACHMENTRELATIVE_OFFSET UNITYSDK_OFFSET(0x901F510)
#define RPG_CLIENT_ADDITIVEHITWEAPONATTACHMENTHANDLER_ISATTACHMENTANIMFIT_OFFSET UNITYSDK_OFFSET(0x901F5B0)
#define RPG_CLIENT_ADDITIVEHITWEAPONATTACHMENTHANDLER_STARTATTACHMENTRELATIVE_OFFSET UNITYSDK_OFFSET(0x901F4A0)
#define RPG_CLIENT_ADDITIVEHITWEAPONATTACHMENTHANDLER_STOPHOLDATTACHMENT_OFFSET UNITYSDK_OFFSET(0x901F570)
#define RPG_CLIENT_ADDITIVEHITWEAPONATTACHMENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x901F610)

namespace RPG::Client
{
	inline static constexpr unsigned int AdditiveHitWeaponAttachmentHandler_TypeDefinitionIndex = 55790;

	class AdditiveHitWeaponAttachmentHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18
		::System::Int32 Field_5_1; // 0x1C
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
