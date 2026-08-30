#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_419;
class Class_0_16E4307DCC419505_446;
class Class_1_EFF03B82D1C2B1F6;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }

#define CLASS_1_6EE6F06209F74802_1_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x18722440)
#define CLASS_1_6EE6F06209F74802_1_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x18722370)
#define CLASS_1_6EE6F06209F74802_1_GET_EIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0x18722390)
#define CLASS_1_6EE6F06209F74802_1_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x18722350)
#define CLASS_1_6EE6F06209F74802_1_GET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x187223B0)
#define CLASS_1_6EE6F06209F74802_1_GET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0x187222F0)
#define CLASS_1_6EE6F06209F74802_1_GET_SKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0x18722310)
#define CLASS_1_6EE6F06209F74802_1_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x18722330)
#define CLASS_1_6EE6F06209F74802_1_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x187223D0)
#define CLASS_1_6EE6F06209F74802_1_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x18722380)
#define CLASS_1_6EE6F06209F74802_1_SET_EIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0x187223A0)
#define CLASS_1_6EE6F06209F74802_1_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x18722360)
#define CLASS_1_6EE6F06209F74802_1_SET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x187223C0)
#define CLASS_1_6EE6F06209F74802_1_SET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0x18722300)
#define CLASS_1_6EE6F06209F74802_1_SET_SKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0x18722320)
#define CLASS_1_6EE6F06209F74802_1_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x18722340)
#define CLASS_1_6EE6F06209F74802_1__CTOR_OFFSET UNITYSDK_OFFSET(0x187225B0)

inline static constexpr unsigned int Class_1_6EE6F06209F74802_1_TypeDefinitionIndex = 52242;

class Class_1_6EE6F06209F74802_1 : public ::System::Object
{
public:
	::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* _PropertyModifierProvider_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_446* _SkillLevelProvider_k__BackingField; // 0x18
	::System::UInt32 _PromotionLevel_k__BackingField; // 0x20
	::System::UInt32 _EidolonLevel_k__BackingField; // 0x24
	::System::UInt32 _Version_k__BackingField; // 0x28
	::System::UInt32 _CurrentExp_k__BackingField; // 0x2C
	::System::UInt32 _Level_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* get_PropertyModifierProvider()
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_GET_PROPERTYMODIFIERPROVIDER_OFFSET))(this);
	}

	::System::Void set_PropertyModifierProvider(::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_SET_PROPERTYMODIFIERPROVIDER_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_446* get_SkillLevelProvider()
	{
		return ((::Class_0_16E4307DCC419505_446*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_GET_SKILLLEVELPROVIDER_OFFSET))(this);
	}

	::System::Void set_SkillLevelProvider(::Class_0_16E4307DCC419505_446* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_446*))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_SET_SKILLLEVELPROVIDER_OFFSET))(this, a1);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_GET_VERSION_OFFSET))(this);
	}

	::System::Void set_Version(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_SET_VERSION_OFFSET))(this, a1);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_SET_LEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_CurrentExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_GET_CURRENTEXP_OFFSET))(this);
	}

	::System::Void set_CurrentExp(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_SET_CURRENTEXP_OFFSET))(this, a1);
	}

	::System::UInt32 get_EidolonLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_GET_EIDOLONLEVEL_OFFSET))(this);
	}

	::System::Void set_EidolonLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_SET_EIDOLONLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_PromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_GET_PROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_PromotionLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_SET_PROMOTIONLEVEL_OFFSET))(this, a1);
	}

	::System::Void ImportProfile(::Class_1_EFF03B82D1C2B1F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFF03B82D1C2B1F6*))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_IMPORTPROFILE_OFFSET))(this, a1);
	}

	::System::Void ExportProfile(::Class_0_16E4307DCC419505_419* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_419*))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_EXPORTPROFILE_OFFSET))(this, a1);
	}
};
