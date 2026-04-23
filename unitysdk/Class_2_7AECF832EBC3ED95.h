#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"
#include "unitysdk/RPG/MVector3.h"

class Class_0_16E4307DCC419505_413;
namespace RPG::Client { class AdditiveHitWeaponAttachmentHandler; }
namespace RPG::Client { class AvatarAimController; }
namespace RPG::Client { class AvatarLookAtController; }
namespace RPG::Client { class FABRIK_WeaponControl; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::GameCore { class GameEntity; }
namespace RootMotion::FinalIK { class GrounderIK; }
namespace RootMotion::FinalIK { class LimbIK; }

#define CLASS_2_7AECF832EBC3ED95_GET_AIMCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA2C8380)
#define CLASS_2_7AECF832EBC3ED95_GET_GROUNDERIK_OFFSET UNITYSDK_OFFSET(0xA2C8340)
#define CLASS_2_7AECF832EBC3ED95_GET_LIMBIKS_OFFSET UNITYSDK_OFFSET(0xA2C8360)
#define CLASS_2_7AECF832EBC3ED95_GET_LOOKATCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA2C83A0)
#define CLASS_2_7AECF832EBC3ED95_GET_LOOKATIK_OFFSET UNITYSDK_OFFSET(0xA2C83C0)
#define CLASS_2_7AECF832EBC3ED95_GET_WEAPONATTACHMENTHANDLER_OFFSET UNITYSDK_OFFSET(0xA2C83E0)
#define CLASS_2_7AECF832EBC3ED95_GET_WEAPONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA2C8400)
#define CLASS_2_7AECF832EBC3ED95_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xA2C8250)
#define CLASS_2_7AECF832EBC3ED95_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0xA2C82D0)
#define CLASS_2_7AECF832EBC3ED95_METHOD_2_2DD8EB2A8AB21975_OFFSET UNITYSDK_OFFSET(0xA2C7860)
#define CLASS_2_7AECF832EBC3ED95_METHOD_2_43E452D715966C11_OFFSET UNITYSDK_OFFSET(0xA2C7B50)
#define CLASS_2_7AECF832EBC3ED95_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA2C84A0)
#define CLASS_2_7AECF832EBC3ED95_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA2C8440)
#define CLASS_2_7AECF832EBC3ED95_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0xA2C6F70)
#define CLASS_2_7AECF832EBC3ED95_METHOD_2_78C62398E94F0FB1_OFFSET UNITYSDK_OFFSET(0xA2C6E40)
#define CLASS_2_7AECF832EBC3ED95_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0xA2C7010)
#define CLASS_2_7AECF832EBC3ED95_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0xA2C7740)
#define CLASS_2_7AECF832EBC3ED95_SET_AIMCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA2C8390)
#define CLASS_2_7AECF832EBC3ED95_SET_GROUNDERIK_OFFSET UNITYSDK_OFFSET(0xA2C8350)
#define CLASS_2_7AECF832EBC3ED95_SET_LIMBIKS_OFFSET UNITYSDK_OFFSET(0xA2C8370)
#define CLASS_2_7AECF832EBC3ED95_SET_LOOKATCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA2C83B0)
#define CLASS_2_7AECF832EBC3ED95_SET_LOOKATIK_OFFSET UNITYSDK_OFFSET(0xA2C83D0)
#define CLASS_2_7AECF832EBC3ED95_SET_WEAPONATTACHMENTHANDLER_OFFSET UNITYSDK_OFFSET(0xA2C83F0)
#define CLASS_2_7AECF832EBC3ED95_SET_WEAPONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA2C8410)
#define CLASS_2_7AECF832EBC3ED95__CTOR_OFFSET UNITYSDK_OFFSET(0xA2C8420)

inline static constexpr unsigned int Class_2_7AECF832EBC3ED95_TypeDefinitionIndex = 49733;

class Class_2_7AECF832EBC3ED95 : public ::Class_1_321489CFFF7B18E7
{
public:
	::RPG::Client::FABRIK_WeaponControl* _WeaponController_k__BackingField; // 0x18
	::RPG::Client::LookAtIK* _LookAtIK_k__BackingField; // 0x20
	::Il2CppArray<::Class_0_16E4307DCC419505_413*>* Field_2_7; // 0x28
	::Il2CppArray<::RootMotion::FinalIK::LimbIK*>* _LimbIKs_k__BackingField; // 0x30
	::RPG::Client::AvatarLookAtController* _LookAtController_k__BackingField; // 0x38
	::RPG::Client::AdditiveHitWeaponAttachmentHandler* _WeaponAttachmentHandler_k__BackingField; // 0x40
	::RPG::Client::AvatarAimController* _AimController_k__BackingField; // 0x48
	::RootMotion::FinalIK::GrounderIK* _GrounderIK_k__BackingField; // 0x50
	::RPG::MVector3 Field_2_9; // 0x58
	::System::Boolean Field_2_10; // 0x64
	::RPG::MVector3 Field_2_8; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C62398E94F0FB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_METHOD_2_78C62398E94F0FB1_OFFSET))(this);
	}

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DD8EB2A8AB21975(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_METHOD_2_2DD8EB2A8AB21975_OFFSET))(this, a1);
	}

	::System::Void Method_2_43E452D715966C11(::RPG::MVector3 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_METHOD_2_43E452D715966C11_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::RootMotion::FinalIK::GrounderIK* get_GrounderIK()
	{
		return ((::RootMotion::FinalIK::GrounderIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_GET_GROUNDERIK_OFFSET))(this);
	}

	::System::Void set_GrounderIK(::RootMotion::FinalIK::GrounderIK* value)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GrounderIK*))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_SET_GROUNDERIK_OFFSET))(this, value);
	}

	::Il2CppArray<::RootMotion::FinalIK::LimbIK*>* get_LimbIKs()
	{
		return ((::Il2CppArray<::RootMotion::FinalIK::LimbIK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_GET_LIMBIKS_OFFSET))(this);
	}

	::System::Void set_LimbIKs(::Il2CppArray<::RootMotion::FinalIK::LimbIK*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::LimbIK*>*))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_SET_LIMBIKS_OFFSET))(this, value);
	}

	::RPG::Client::AvatarAimController* get_AimController()
	{
		return ((::RPG::Client::AvatarAimController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_GET_AIMCONTROLLER_OFFSET))(this);
	}

	::System::Void set_AimController(::RPG::Client::AvatarAimController* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarAimController*))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_SET_AIMCONTROLLER_OFFSET))(this, value);
	}

	::RPG::Client::AvatarLookAtController* get_LookAtController()
	{
		return ((::RPG::Client::AvatarLookAtController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_GET_LOOKATCONTROLLER_OFFSET))(this);
	}

	::System::Void set_LookAtController(::RPG::Client::AvatarLookAtController* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarLookAtController*))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_SET_LOOKATCONTROLLER_OFFSET))(this, value);
	}

	::RPG::Client::LookAtIK* get_LookAtIK()
	{
		return ((::RPG::Client::LookAtIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_GET_LOOKATIK_OFFSET))(this);
	}

	::System::Void set_LookAtIK(::RPG::Client::LookAtIK* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtIK*))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_SET_LOOKATIK_OFFSET))(this, value);
	}

	::RPG::Client::AdditiveHitWeaponAttachmentHandler* get_WeaponAttachmentHandler()
	{
		return ((::RPG::Client::AdditiveHitWeaponAttachmentHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_GET_WEAPONATTACHMENTHANDLER_OFFSET))(this);
	}

	::System::Void set_WeaponAttachmentHandler(::RPG::Client::AdditiveHitWeaponAttachmentHandler* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdditiveHitWeaponAttachmentHandler*))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_SET_WEAPONATTACHMENTHANDLER_OFFSET))(this, value);
	}

	::RPG::Client::FABRIK_WeaponControl* get_WeaponController()
	{
		return ((::RPG::Client::FABRIK_WeaponControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_GET_WEAPONCONTROLLER_OFFSET))(this);
	}

	::System::Void set_WeaponController(::RPG::Client::FABRIK_WeaponControl* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FABRIK_WeaponControl*))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_SET_WEAPONCONTROLLER_OFFSET))(this, value);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AECF832EBC3ED95_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
