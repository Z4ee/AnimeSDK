#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_531;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_EE826BCAF7D6BAEA_GET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0xBF17850)
#define CLASS_1_EE826BCAF7D6BAEA_GET_SKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0xBF178E0)
#define CLASS_1_EE826BCAF7D6BAEA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xBF17810)
#define CLASS_1_EE826BCAF7D6BAEA_METHOD_1_10E2A895DBDFFCDB_OFFSET UNITYSDK_OFFSET(0xBF17970)
#define CLASS_1_EE826BCAF7D6BAEA_METHOD_1_620A86672E9FEBA2_OFFSET UNITYSDK_OFFSET(0xBF179D0)
#define CLASS_1_EE826BCAF7D6BAEA__CTOR_OFFSET UNITYSDK_OFFSET(0xBF17A70)

inline static constexpr unsigned int Class_1_EE826BCAF7D6BAEA_TypeDefinitionIndex = 51991;

class Class_1_EE826BCAF7D6BAEA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE826BCAF7D6BAEA__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE826BCAF7D6BAEA_GET_VERSION_OFFSET))(this);
	}

	::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* get_PropertyModifierProvider()
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE826BCAF7D6BAEA_GET_PROPERTYMODIFIERPROVIDER_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_531* get_SkillLevelProvider()
	{
		return ((::Class_0_16E4307DCC419505_531*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE826BCAF7D6BAEA_GET_SKILLLEVELPROVIDER_OFFSET))(this);
	}

	::System::Boolean Method_1_10E2A895DBDFFCDB(::RPG::GameCore::AvatarSkillTreeAnchorType a1, ::Struct_2_BAC064D277DD99F1& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1&))((::PBYTE)hIl2Cpp + CLASS_1_EE826BCAF7D6BAEA_METHOD_1_10E2A895DBDFFCDB_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_BAC064D277DD99F1>* Method_1_620A86672E9FEBA2()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_BAC064D277DD99F1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE826BCAF7D6BAEA_METHOD_1_620A86672E9FEBA2_OFFSET))(this);
	}
};
