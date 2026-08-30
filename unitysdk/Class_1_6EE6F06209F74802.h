#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_419;
class Class_0_16E4307DCC419505_420;
class Class_0_16E4307DCC419505_432;
class Class_1_EFF03B82D1C2B1F6;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }

#define CLASS_1_6EE6F06209F74802_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x163E7CD0)
#define CLASS_1_6EE6F06209F74802_GET_EXTRAADDITIONPROVIDER_OFFSET UNITYSDK_OFFSET(0x163E7AC0)
#define CLASS_1_6EE6F06209F74802_GET_LIGHTCONE_OFFSET UNITYSDK_OFFSET(0x163E7AE0)
#define CLASS_1_6EE6F06209F74802_GET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0x163E7AA0)
#define CLASS_1_6EE6F06209F74802_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x163E7A80)
#define CLASS_1_6EE6F06209F74802_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x163E7C70)
#define CLASS_1_6EE6F06209F74802_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x163E7B00)
#define CLASS_1_6EE6F06209F74802_METHOD_1_F0E4FAC8E5EC9E93_OFFSET UNITYSDK_OFFSET(0x163E7B50)
#define CLASS_1_6EE6F06209F74802_SET_EXTRAADDITIONPROVIDER_OFFSET UNITYSDK_OFFSET(0x163E7AD0)
#define CLASS_1_6EE6F06209F74802_SET_LIGHTCONE_OFFSET UNITYSDK_OFFSET(0x163E7AF0)
#define CLASS_1_6EE6F06209F74802_SET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0x163E7AB0)
#define CLASS_1_6EE6F06209F74802_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x163E7A90)
#define CLASS_1_6EE6F06209F74802__CTOR_OFFSET UNITYSDK_OFFSET(0x163E7D60)

inline static constexpr unsigned int Class_1_6EE6F06209F74802_TypeDefinitionIndex = 52206;

class Class_1_6EE6F06209F74802 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_432* _ExtraAdditionProvider_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_420* _LightCone_k__BackingField; // 0x18
	::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* _PropertyModifierProvider_k__BackingField; // 0x20
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

	::Class_0_16E4307DCC419505_432* get_ExtraAdditionProvider()
	{
		return ((::Class_0_16E4307DCC419505_432*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_GET_EXTRAADDITIONPROVIDER_OFFSET))(this);
	}

	::System::Void set_ExtraAdditionProvider(::Class_0_16E4307DCC419505_432* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_432*))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_SET_EXTRAADDITIONPROVIDER_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_420* get_LightCone()
	{
		return ((::Class_0_16E4307DCC419505_420*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_GET_LIGHTCONE_OFFSET))(this);
	}

	::System::Void set_LightCone(::Class_0_16E4307DCC419505_420* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_420*))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_SET_LIGHTCONE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::UInt32 Method_1_F0E4FAC8E5EC9E93()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_METHOD_1_F0E4FAC8E5EC9E93_OFFSET))(this);
	}

	::System::Void ImportProfile(::Class_1_EFF03B82D1C2B1F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFF03B82D1C2B1F6*))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_IMPORTPROFILE_OFFSET))(this, a1);
	}

	::System::Void ExportProfile(::Class_0_16E4307DCC419505_419* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_419*))((::PBYTE)hIl2Cpp + CLASS_1_6EE6F06209F74802_EXPORTPROFILE_OFFSET))(this, a1);
	}
};
