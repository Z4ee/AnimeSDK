#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_348;
class Class_0_16E4307DCC419505_358;
class Class_0_16E4307DCC419505_369;
class Class_1_090AB0EAA610410E;
namespace RPG::AvatarSystem { template <typename T> class IPropertyModifierBuilder_1; }
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define CLASS_1_59912FDC614328FF_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x9080940)
#define CLASS_1_59912FDC614328FF_GETMODIFIER_OFFSET UNITYSDK_OFFSET(0x9080AB0)
#define CLASS_1_59912FDC614328FF_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x9080880)
#define CLASS_1_59912FDC614328FF_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9080860)
#define CLASS_1_59912FDC614328FF_GET_MODIFIERBUILDER_OFFSET UNITYSDK_OFFSET(0x9080820)
#define CLASS_1_59912FDC614328FF_GET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x90808C0)
#define CLASS_1_59912FDC614328FF_GET_RANKLEVEL_OFFSET UNITYSDK_OFFSET(0x90808A0)
#define CLASS_1_59912FDC614328FF_GET_SKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0x9080840)
#define CLASS_1_59912FDC614328FF_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x90808E0)
#define CLASS_1_59912FDC614328FF_METHOD_1_224E25FC30CD7C07_OFFSET UNITYSDK_OFFSET(0x9080C20)
#define CLASS_1_59912FDC614328FF_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x9080890)
#define CLASS_1_59912FDC614328FF_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9080870)
#define CLASS_1_59912FDC614328FF_SET_MODIFIERBUILDER_OFFSET UNITYSDK_OFFSET(0x9080830)
#define CLASS_1_59912FDC614328FF_SET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x90808D0)
#define CLASS_1_59912FDC614328FF_SET_RANKLEVEL_OFFSET UNITYSDK_OFFSET(0x90808B0)
#define CLASS_1_59912FDC614328FF_SET_SKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0x9080850)
#define CLASS_1_59912FDC614328FF__CTOR_OFFSET UNITYSDK_OFFSET(0x9080D30)

inline static constexpr unsigned int Class_1_59912FDC614328FF_TypeDefinitionIndex = 47961;

class Class_1_59912FDC614328FF : public ::System::Object
{
public:
	::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>* _ModifierBuilder_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_369* _SkillLevelProvider_k__BackingField; // 0x18
	::System::UInt32 _Level_k__BackingField; // 0x20
	::System::UInt32 _PromotionLevel_k__BackingField; // 0x24
	::System::UInt32 _CurrentExp_k__BackingField; // 0x28
	::System::UInt32 _RankLevel_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>* get_ModifierBuilder()
	{
		return ((::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF_GET_MODIFIERBUILDER_OFFSET))(this);
	}

	::System::Void set_ModifierBuilder(::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF_SET_MODIFIERBUILDER_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_369* get_SkillLevelProvider()
	{
		return ((::Class_0_16E4307DCC419505_369*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF_GET_SKILLLEVELPROVIDER_OFFSET))(this);
	}

	::System::Void set_SkillLevelProvider(::Class_0_16E4307DCC419505_369* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_369*))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF_SET_SKILLLEVELPROVIDER_OFFSET))(this, value);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF_SET_LEVEL_OFFSET))(this, value);
	}

	::System::UInt32 get_CurrentExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF_GET_CURRENTEXP_OFFSET))(this);
	}

	::System::Void set_CurrentExp(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF_SET_CURRENTEXP_OFFSET))(this, value);
	}

	::System::UInt32 get_RankLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF_GET_RANKLEVEL_OFFSET))(this);
	}

	::System::Void set_RankLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF_SET_RANKLEVEL_OFFSET))(this, value);
	}

	::System::UInt32 get_PromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF_GET_PROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_PromotionLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF_SET_PROMOTIONLEVEL_OFFSET))(this, value);
	}

	::System::Void ImportProfile(::Class_1_090AB0EAA610410E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF_IMPORTPROFILE_OFFSET))(this, a1);
	}

	::System::Void ExportProfile(::Class_0_16E4307DCC419505_348* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_348*))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF_EXPORTPROFILE_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* GetModifier(::Class_0_16E4307DCC419505_358* a1)
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF_GETMODIFIER_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_224E25FC30CD7C07(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59912FDC614328FF_METHOD_1_224E25FC30CD7C07_OFFSET))(this, a1);
	}
};
