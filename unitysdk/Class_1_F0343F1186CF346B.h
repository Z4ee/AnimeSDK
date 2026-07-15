#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_384;
class Class_0_16E4307DCC419505_385;
class Class_0_16E4307DCC419505_397;
class Class_1_EFF03B82D1C2B1F6;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F0343F1186CF346B_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x16FAE440)
#define CLASS_1_F0343F1186CF346B_GET_EXTRAADDITIONPROVIDER_OFFSET UNITYSDK_OFFSET(0x16FADE60)
#define CLASS_1_F0343F1186CF346B_GET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0x16FADE80)
#define CLASS_1_F0343F1186CF346B_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x16FADE40)
#define CLASS_1_F0343F1186CF346B_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x16FADEF0)
#define CLASS_1_F0343F1186CF346B_METHOD_1_3A328C770A71430D_OFFSET UNITYSDK_OFFSET(0x16FAE6C0)
#define CLASS_1_F0343F1186CF346B_METHOD_1_59D6D2E598F51371_OFFSET UNITYSDK_OFFSET(0x16FAE720)
#define CLASS_1_F0343F1186CF346B_METHOD_1_6D6A993AB5835D5E_OFFSET UNITYSDK_OFFSET(0x16FAE680)
#define CLASS_1_F0343F1186CF346B_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x16FADEA0)
#define CLASS_1_F0343F1186CF346B_SET_EXTRAADDITIONPROVIDER_OFFSET UNITYSDK_OFFSET(0x16FADE70)
#define CLASS_1_F0343F1186CF346B_SET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0x16FADE90)
#define CLASS_1_F0343F1186CF346B_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x16FADE50)
#define CLASS_1_F0343F1186CF346B__CTOR_OFFSET UNITYSDK_OFFSET(0x16FAE950)

inline static constexpr unsigned int Class_1_F0343F1186CF346B_TypeDefinitionIndex = 49563;

class Class_1_F0343F1186CF346B : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_397* _ExtraAdditionProvider_k__BackingField; // 0x10
	::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* _PropertyModifierProvider_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_385*>* Field_1_2; // 0x20
	::System::UInt32 _Version_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0343F1186CF346B__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0343F1186CF346B_GET_VERSION_OFFSET))(this);
	}

	::System::Void set_Version(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0343F1186CF346B_SET_VERSION_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_397* get_ExtraAdditionProvider()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0343F1186CF346B_GET_EXTRAADDITIONPROVIDER_OFFSET))(this);
	}

	::System::Void set_ExtraAdditionProvider(::Class_0_16E4307DCC419505_397* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_397*))((::PBYTE)hIl2Cpp + CLASS_1_F0343F1186CF346B_SET_EXTRAADDITIONPROVIDER_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* get_PropertyModifierProvider()
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0343F1186CF346B_GET_PROPERTYMODIFIERPROVIDER_OFFSET))(this);
	}

	::System::Void set_PropertyModifierProvider(::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_F0343F1186CF346B_SET_PROPERTYMODIFIERPROVIDER_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0343F1186CF346B_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void ImportProfile(::Class_1_EFF03B82D1C2B1F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFF03B82D1C2B1F6*))((::PBYTE)hIl2Cpp + CLASS_1_F0343F1186CF346B_IMPORTPROFILE_OFFSET))(this, a1);
	}

	::System::Void ExportProfile(::Class_0_16E4307DCC419505_384* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_384*))((::PBYTE)hIl2Cpp + CLASS_1_F0343F1186CF346B_EXPORTPROFILE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_385*>* Method_1_6D6A993AB5835D5E()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_385*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0343F1186CF346B_METHOD_1_6D6A993AB5835D5E_OFFSET))(this);
	}

	::System::Boolean Method_1_3A328C770A71430D(::RPG::GameCore::RelicType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_1_F0343F1186CF346B_METHOD_1_3A328C770A71430D_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_385* Method_1_59D6D2E598F51371(::RPG::GameCore::RelicType a1)
	{
		return ((::Class_0_16E4307DCC419505_385*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_1_F0343F1186CF346B_METHOD_1_59D6D2E598F51371_OFFSET))(this, a1);
	}
};
