#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_348;
class Class_0_16E4307DCC419505_350;
class Class_0_16E4307DCC419505_357;
class Class_0_16E4307DCC419505_358;
class Class_1_090AB0EAA610410E;
namespace RPG::AvatarSystem { template <typename T> class IPropertyModifierBuilder_1; }
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define CLASS_1_5875D7190B27472D_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x118C51A0)
#define CLASS_1_5875D7190B27472D_GETMODIFIER_OFFSET UNITYSDK_OFFSET(0x118C5220)
#define CLASS_1_5875D7190B27472D_GET_EXTRAADDITIONPROVIDER_OFFSET UNITYSDK_OFFSET(0x118C4FE0)
#define CLASS_1_5875D7190B27472D_GET_LIGHTCONE_OFFSET UNITYSDK_OFFSET(0x118C5000)
#define CLASS_1_5875D7190B27472D_GET_MODIFIERBUILDER_OFFSET UNITYSDK_OFFSET(0x118C4FC0)
#define CLASS_1_5875D7190B27472D_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x118C5130)
#define CLASS_1_5875D7190B27472D_METHOD_1_24BDA33538434DCF_OFFSET UNITYSDK_OFFSET(0x118C5030)
#define CLASS_1_5875D7190B27472D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x118C5020)
#define CLASS_1_5875D7190B27472D_SET_EXTRAADDITIONPROVIDER_OFFSET UNITYSDK_OFFSET(0x118C4FF0)
#define CLASS_1_5875D7190B27472D_SET_LIGHTCONE_OFFSET UNITYSDK_OFFSET(0x118C5010)
#define CLASS_1_5875D7190B27472D_SET_MODIFIERBUILDER_OFFSET UNITYSDK_OFFSET(0x118C4FD0)
#define CLASS_1_5875D7190B27472D__CTOR_OFFSET UNITYSDK_OFFSET(0x118C5390)

inline static constexpr unsigned int Class_1_5875D7190B27472D_TypeDefinitionIndex = 47929;

class Class_1_5875D7190B27472D : public ::System::Object
{
public:
	::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>* _ModifierBuilder_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_357* _ExtraAdditionProvider_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_350* _LightCone_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D__CTOR_OFFSET))(this);
	}

	::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>* get_ModifierBuilder()
	{
		return ((::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_GET_MODIFIERBUILDER_OFFSET))(this);
	}

	::System::Void set_ModifierBuilder(::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_SET_MODIFIERBUILDER_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_357* get_ExtraAdditionProvider()
	{
		return ((::Class_0_16E4307DCC419505_357*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_GET_EXTRAADDITIONPROVIDER_OFFSET))(this);
	}

	::System::Void set_ExtraAdditionProvider(::Class_0_16E4307DCC419505_357* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_SET_EXTRAADDITIONPROVIDER_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_350* get_LightCone()
	{
		return ((::Class_0_16E4307DCC419505_350*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_GET_LIGHTCONE_OFFSET))(this);
	}

	::System::Void set_LightCone(::Class_0_16E4307DCC419505_350* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_350*))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_SET_LIGHTCONE_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::UInt32 Method_1_24BDA33538434DCF()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_METHOD_1_24BDA33538434DCF_OFFSET))(this);
	}

	::System::Void ImportProfile(::Class_1_090AB0EAA610410E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_IMPORTPROFILE_OFFSET))(this, a1);
	}

	::System::Void ExportProfile(::Class_0_16E4307DCC419505_348* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_348*))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_EXPORTPROFILE_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* GetModifier(::Class_0_16E4307DCC419505_358* a1)
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_GETMODIFIER_OFFSET))(this, a1);
	}
};
