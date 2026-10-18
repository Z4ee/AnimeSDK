#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_506;
class Class_0_16E4307DCC419505_531;
class Class_1_EFF03B82D1C2B1F6;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }

#define CLASS_1_6EE6F06209F74802_1_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x12D02F20)
#define CLASS_1_6EE6F06209F74802_1_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x12D02E50)
#define CLASS_1_6EE6F06209F74802_1_GET_EIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0x12D02E70)
#define CLASS_1_6EE6F06209F74802_1_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x12D02E30)
#define CLASS_1_6EE6F06209F74802_1_GET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x12D02E90)
#define CLASS_1_6EE6F06209F74802_1_GET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0x12D02DD0)
#define CLASS_1_6EE6F06209F74802_1_GET_SKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0x12D02DF0)
#define CLASS_1_6EE6F06209F74802_1_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x12D02E10)
#define CLASS_1_6EE6F06209F74802_1_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x12D02EB0)
#define CLASS_1_6EE6F06209F74802_1_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x12D02E60)
#define CLASS_1_6EE6F06209F74802_1_SET_EIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0x12D02E80)
#define CLASS_1_6EE6F06209F74802_1_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x12D02E40)
#define CLASS_1_6EE6F06209F74802_1_SET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x12D02EA0)
#define CLASS_1_6EE6F06209F74802_1_SET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0x12D02DE0)
#define CLASS_1_6EE6F06209F74802_1_SET_SKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0x12D02E00)
#define CLASS_1_6EE6F06209F74802_1_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x12D02E20)
#define CLASS_1_6EE6F06209F74802_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12D03090)

inline static constexpr unsigned int Class_1_6EE6F06209F74802_1_TypeDefinitionIndex = 51948;

class Class_1_6EE6F06209F74802_1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_531* _SkillLevelProvider_k__BackingField; // 0x10
	::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* _PropertyModifierProvider_k__BackingField; // 0x18
	::System::UInt32 _EidolonLevel_k__BackingField; // 0x20
	::System::UInt32 _Version_k__BackingField; // 0x24
	::System::UInt32 _PromotionLevel_k__BackingField; // 0x28
	::System::UInt32 _Level_k__BackingField; // 0x2C
	::System::UInt32 _CurrentExp_k__BackingField; // 0x30

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

	::Class_0_16E4307DCC419505_531* get_SkillLevelProvider()
	{
		return ((::Class_0_16E4307DCC419505_531*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_GET_SKILLLEVELPROVIDER_OFFSET))(this);
	}

	::System::Void set_SkillLevelProvider(::Class_0_16E4307DCC419505_531* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_531*))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_SET_SKILLLEVELPROVIDER_OFFSET))(this, a1);
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

	::System::Void ExportProfile(::Class_0_16E4307DCC419505_506* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_506*))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_1_EXPORTPROFILE_OFFSET))(this, a1);
	}
};
