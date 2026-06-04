#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_360;
class Class_0_16E4307DCC419505_361;
class Class_0_16E4307DCC419505_373;
class Class_1_090AB0EAA610410E;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }

#define CLASS_1_6EE6F06209F74802_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xAEEFCD0)
#define CLASS_1_6EE6F06209F74802_GET_EXTRAADDITIONPROVIDER_OFFSET UNITYSDK_OFFSET(0xAEEFB30)
#define CLASS_1_6EE6F06209F74802_GET_LIGHTCONE_OFFSET UNITYSDK_OFFSET(0xAEEFB50)
#define CLASS_1_6EE6F06209F74802_GET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0xAEEFB10)
#define CLASS_1_6EE6F06209F74802_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xAEEFAF0)
#define CLASS_1_6EE6F06209F74802_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xAEEFC70)
#define CLASS_1_6EE6F06209F74802_METHOD_1_077562104BB0E728_OFFSET UNITYSDK_OFFSET(0xAEEFB80)
#define CLASS_1_6EE6F06209F74802_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAEEFB70)
#define CLASS_1_6EE6F06209F74802_SET_EXTRAADDITIONPROVIDER_OFFSET UNITYSDK_OFFSET(0xAEEFB40)
#define CLASS_1_6EE6F06209F74802_SET_LIGHTCONE_OFFSET UNITYSDK_OFFSET(0xAEEFB60)
#define CLASS_1_6EE6F06209F74802_SET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0xAEEFB20)
#define CLASS_1_6EE6F06209F74802_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xAEEFB00)
#define CLASS_1_6EE6F06209F74802__CTOR_OFFSET UNITYSDK_OFFSET(0xAEEFD60)

inline static constexpr unsigned int Class_1_6EE6F06209F74802_TypeDefinitionIndex = 48535;

class Class_1_6EE6F06209F74802 : public ::System::Object
{
public:
	::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* _PropertyModifierProvider_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_373* _ExtraAdditionProvider_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_361* _LightCone_k__BackingField; // 0x20
	::System::UInt32 _Version_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_GET_VERSION_OFFSET))(this);
	}

	::System::Void set_Version(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_SET_VERSION_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* get_PropertyModifierProvider()
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_GET_PROPERTYMODIFIERPROVIDER_OFFSET))(this);
	}

	::System::Void set_PropertyModifierProvider(::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_SET_PROPERTYMODIFIERPROVIDER_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_373* get_ExtraAdditionProvider()
	{
		return ((::Class_0_16E4307DCC419505_373*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_GET_EXTRAADDITIONPROVIDER_OFFSET))(this);
	}

	::System::Void set_ExtraAdditionProvider(::Class_0_16E4307DCC419505_373* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_373*))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_SET_EXTRAADDITIONPROVIDER_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_361* get_LightCone()
	{
		return ((::Class_0_16E4307DCC419505_361*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_GET_LIGHTCONE_OFFSET))(this);
	}

	::System::Void set_LightCone(::Class_0_16E4307DCC419505_361* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_361*))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_SET_LIGHTCONE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::UInt32 Method_1_077562104BB0E728()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_METHOD_1_077562104BB0E728_OFFSET))(this);
	}

	::System::Void ImportProfile(::Class_1_090AB0EAA610410E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_IMPORTPROFILE_OFFSET))(this, a1);
	}

	::System::Void ExportProfile(::Class_0_16E4307DCC419505_360* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_360*))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_EXPORTPROFILE_OFFSET))(this, a1);
	}
};
