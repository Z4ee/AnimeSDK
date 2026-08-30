#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_57578741329DF018.h"
#include "unitysdk/RPG/MVector3.h"

class Class_0_16E4307DCC419505_491;
namespace RPG::Client { class AdditiveHitWeaponAttachmentHandler; }
namespace RPG::Client { class AvatarAimController; }
namespace RPG::Client { class AvatarLookAtController; }
namespace RPG::Client { class FABRIK_WeaponControl; }
namespace RPG::Client { class LookAtIK; }
namespace RPG::GameCore { class GameEntity; }
namespace RootMotion::FinalIK { class GrounderIK; }
namespace RootMotion::FinalIK { class LimbIK; }

#define CLASS_2_EC79A775FC978A50_GET_AIMCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC51BF10)
#define CLASS_2_EC79A775FC978A50_GET_GROUNDERIK_OFFSET UNITYSDK_OFFSET(0xC51BED0)
#define CLASS_2_EC79A775FC978A50_GET_LIMBIKS_OFFSET UNITYSDK_OFFSET(0xC51BEF0)
#define CLASS_2_EC79A775FC978A50_GET_LOOKATCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC51BF30)
#define CLASS_2_EC79A775FC978A50_GET_LOOKATIK_OFFSET UNITYSDK_OFFSET(0xC51BF50)
#define CLASS_2_EC79A775FC978A50_GET_WEAPONATTACHMENTHANDLER_OFFSET UNITYSDK_OFFSET(0xC51BF70)
#define CLASS_2_EC79A775FC978A50_GET_WEAPONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC51BF90)
#define CLASS_2_EC79A775FC978A50_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xC51BDE0)
#define CLASS_2_EC79A775FC978A50_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0xC51BE60)
#define CLASS_2_EC79A775FC978A50_METHOD_2_43E452D715966C11_OFFSET UNITYSDK_OFFSET(0xC51B6E0)
#define CLASS_2_EC79A775FC978A50_METHOD_2_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xC51AA40)
#define CLASS_2_EC79A775FC978A50_METHOD_2_7F1EBB775AF956AD_OFFSET UNITYSDK_OFFSET(0xC51B390)
#define CLASS_2_EC79A775FC978A50_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0xC51AAF0)
#define CLASS_2_EC79A775FC978A50_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0xC51AB90)
#define CLASS_2_EC79A775FC978A50_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0xC51B250)
#define CLASS_2_EC79A775FC978A50_SET_AIMCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC51BF20)
#define CLASS_2_EC79A775FC978A50_SET_GROUNDERIK_OFFSET UNITYSDK_OFFSET(0xC51BEE0)
#define CLASS_2_EC79A775FC978A50_SET_LIMBIKS_OFFSET UNITYSDK_OFFSET(0xC51BF00)
#define CLASS_2_EC79A775FC978A50_SET_LOOKATCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC51BF40)
#define CLASS_2_EC79A775FC978A50_SET_LOOKATIK_OFFSET UNITYSDK_OFFSET(0xC51BF60)
#define CLASS_2_EC79A775FC978A50_SET_WEAPONATTACHMENTHANDLER_OFFSET UNITYSDK_OFFSET(0xC51BF80)
#define CLASS_2_EC79A775FC978A50_SET_WEAPONCONTROLLER_OFFSET UNITYSDK_OFFSET(0xC51BFA0)
#define CLASS_2_EC79A775FC978A50__CTOR_OFFSET UNITYSDK_OFFSET(0xC51BFB0)

inline static constexpr unsigned int Class_2_EC79A775FC978A50_TypeDefinitionIndex = 54166;

class Class_2_EC79A775FC978A50 : public ::Class_1_57578741329DF018
{
public:
	::RPG::Client::LookAtIK* _LookAtIK_k__BackingField; // 0x18
	::RPG::Client::AvatarLookAtController* _LookAtController_k__BackingField; // 0x20
	::RPG::Client::AdditiveHitWeaponAttachmentHandler* _WeaponAttachmentHandler_k__BackingField; // 0x28
	::Il2CppArray<::Class_0_16E4307DCC419505_491*>* OGDFEPGPPCI; // 0x30
	::RPG::Client::AvatarAimController* _AimController_k__BackingField; // 0x38
	::Il2CppArray<::RootMotion::FinalIK::LimbIK*>* _LimbIKs_k__BackingField; // 0x40
	::RPG::Client::FABRIK_WeaponControl* _WeaponController_k__BackingField; // 0x48
	::RootMotion::FinalIK::GrounderIK* _GrounderIK_k__BackingField; // 0x50
	::RPG::MVector3 KJGLNGABFDD; // 0x58
	::RPG::MVector3 FGPABJLGHEB; // 0x64
	::System::Boolean KANKADMLCMB; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_METHOD_2_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F1EBB775AF956AD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_METHOD_2_7F1EBB775AF956AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_43E452D715966C11(::RPG::MVector3 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_METHOD_2_43E452D715966C11_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::RootMotion::FinalIK::GrounderIK* get_GrounderIK()
	{
		return ((::RootMotion::FinalIK::GrounderIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_GET_GROUNDERIK_OFFSET))(this);
	}

	::System::Void set_GrounderIK(::RootMotion::FinalIK::GrounderIK* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GrounderIK*))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_SET_GROUNDERIK_OFFSET))(this, a1);
	}

	::Il2CppArray<::RootMotion::FinalIK::LimbIK*>* get_LimbIKs()
	{
		return ((::Il2CppArray<::RootMotion::FinalIK::LimbIK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_GET_LIMBIKS_OFFSET))(this);
	}

	::System::Void set_LimbIKs(::Il2CppArray<::RootMotion::FinalIK::LimbIK*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RootMotion::FinalIK::LimbIK*>*))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_SET_LIMBIKS_OFFSET))(this, a1);
	}

	::RPG::Client::AvatarAimController* get_AimController()
	{
		return ((::RPG::Client::AvatarAimController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_GET_AIMCONTROLLER_OFFSET))(this);
	}

	::System::Void set_AimController(::RPG::Client::AvatarAimController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarAimController*))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_SET_AIMCONTROLLER_OFFSET))(this, a1);
	}

	::RPG::Client::AvatarLookAtController* get_LookAtController()
	{
		return ((::RPG::Client::AvatarLookAtController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_GET_LOOKATCONTROLLER_OFFSET))(this);
	}

	::System::Void set_LookAtController(::RPG::Client::AvatarLookAtController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarLookAtController*))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_SET_LOOKATCONTROLLER_OFFSET))(this, a1);
	}

	::RPG::Client::LookAtIK* get_LookAtIK()
	{
		return ((::RPG::Client::LookAtIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_GET_LOOKATIK_OFFSET))(this);
	}

	::System::Void set_LookAtIK(::RPG::Client::LookAtIK* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtIK*))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_SET_LOOKATIK_OFFSET))(this, a1);
	}

	::RPG::Client::AdditiveHitWeaponAttachmentHandler* get_WeaponAttachmentHandler()
	{
		return ((::RPG::Client::AdditiveHitWeaponAttachmentHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_GET_WEAPONATTACHMENTHANDLER_OFFSET))(this);
	}

	::System::Void set_WeaponAttachmentHandler(::RPG::Client::AdditiveHitWeaponAttachmentHandler* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdditiveHitWeaponAttachmentHandler*))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_SET_WEAPONATTACHMENTHANDLER_OFFSET))(this, a1);
	}

	::RPG::Client::FABRIK_WeaponControl* get_WeaponController()
	{
		return ((::RPG::Client::FABRIK_WeaponControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_GET_WEAPONCONTROLLER_OFFSET))(this);
	}

	::System::Void set_WeaponController(::RPG::Client::FABRIK_WeaponControl* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FABRIK_WeaponControl*))((::PBYTE)hIl2Cpp + CLASS_2_EC79A775FC978A50_SET_WEAPONCONTROLLER_OFFSET))(this, a1);
	}
};
