#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_341;
class Class_0_16E4307DCC419505_343;
class Class_0_16E4307DCC419505_350;
class Class_0_16E4307DCC419505_351;
class Class_1_090AB0EAA610410E;
namespace RPG::AvatarSystem { template <typename T> class IPropertyModifierBuilder_1; }
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define CLASS_1_5875D7190B27472D_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x105F2B20)
#define CLASS_1_5875D7190B27472D_GETMODIFIER_OFFSET UNITYSDK_OFFSET(0x105F2BA0)
#define CLASS_1_5875D7190B27472D_GET_EXTRAADDITIONPROVIDER_OFFSET UNITYSDK_OFFSET(0x105F2960)
#define CLASS_1_5875D7190B27472D_GET_LIGHTCONE_OFFSET UNITYSDK_OFFSET(0x105F2980)
#define CLASS_1_5875D7190B27472D_GET_MODIFIERBUILDER_OFFSET UNITYSDK_OFFSET(0x105F2940)
#define CLASS_1_5875D7190B27472D_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x105F2AB0)
#define CLASS_1_5875D7190B27472D_METHOD_1_24BDA33538434DCF_OFFSET UNITYSDK_OFFSET(0x105F29B0)
#define CLASS_1_5875D7190B27472D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x105F29A0)
#define CLASS_1_5875D7190B27472D_SET_EXTRAADDITIONPROVIDER_OFFSET UNITYSDK_OFFSET(0x105F2970)
#define CLASS_1_5875D7190B27472D_SET_LIGHTCONE_OFFSET UNITYSDK_OFFSET(0x105F2990)
#define CLASS_1_5875D7190B27472D_SET_MODIFIERBUILDER_OFFSET UNITYSDK_OFFSET(0x105F2950)
#define CLASS_1_5875D7190B27472D__CTOR_OFFSET UNITYSDK_OFFSET(0x105F2D10)

inline static constexpr unsigned int Class_1_5875D7190B27472D_TypeDefinitionIndex = 41956;

class Class_1_5875D7190B27472D : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_343* _LightCone_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_350* _ExtraAdditionProvider_k__BackingField; // 0x18
	::RPG::AvatarSystem::IPropertyModifierBuilder_1<::RPG::GameCore::FixPoint>* _ModifierBuilder_k__BackingField; // 0x20

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

	::Class_0_16E4307DCC419505_350* get_ExtraAdditionProvider()
	{
		return ((::Class_0_16E4307DCC419505_350*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_GET_EXTRAADDITIONPROVIDER_OFFSET))(this);
	}

	::System::Void set_ExtraAdditionProvider(::Class_0_16E4307DCC419505_350* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_350*))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_SET_EXTRAADDITIONPROVIDER_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_343* get_LightCone()
	{
		return ((::Class_0_16E4307DCC419505_343*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_GET_LIGHTCONE_OFFSET))(this);
	}

	::System::Void set_LightCone(::Class_0_16E4307DCC419505_343* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_343*))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_SET_LIGHTCONE_OFFSET))(this, value);
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

	::System::Void ExportProfile(::Class_0_16E4307DCC419505_341* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_341*))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_EXPORTPROFILE_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* GetModifier(::Class_0_16E4307DCC419505_351* a1)
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_0_16E4307DCC419505_351*))((::PBYTE)hIl2Cpp + CLASS_1_5875D7190B27472D_GETMODIFIER_OFFSET))(this, a1);
	}
};
