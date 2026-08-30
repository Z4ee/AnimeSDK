#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_419;
class Class_0_16E4307DCC419505_446;
class Class_1_EFF03B82D1C2B1F6;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_F6DE3A78755DFA8B_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x188DD3E0)
#define CLASS_1_F6DE3A78755DFA8B_GET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0x188DCD60)
#define CLASS_1_F6DE3A78755DFA8B_GET_SKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0x188DCD80)
#define CLASS_1_F6DE3A78755DFA8B_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x188DCD40)
#define CLASS_1_F6DE3A78755DFA8B_IMPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x188DCEA0)
#define CLASS_1_F6DE3A78755DFA8B_METHOD_1_0B94DB5209A9BBA6_OFFSET UNITYSDK_OFFSET(0x188DD500)
#define CLASS_1_F6DE3A78755DFA8B_METHOD_1_0F89F90781BC6846_OFFSET UNITYSDK_OFFSET(0x188DD700)
#define CLASS_1_F6DE3A78755DFA8B_SET_PROPERTYMODIFIERPROVIDER_OFFSET UNITYSDK_OFFSET(0x188DCD70)
#define CLASS_1_F6DE3A78755DFA8B_SET_SKILLLEVELPROVIDER_OFFSET UNITYSDK_OFFSET(0x188DCD90)
#define CLASS_1_F6DE3A78755DFA8B_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x188DCD50)
#define CLASS_1_F6DE3A78755DFA8B__CTOR_OFFSET UNITYSDK_OFFSET(0x188DCDA0)

inline static constexpr unsigned int Class_1_F6DE3A78755DFA8B_TypeDefinitionIndex = 52244;

class Class_1_F6DE3A78755DFA8B : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>* AAKHNJLJJLM; // 0x10
	::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* _PropertyModifierProvider_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_446* _SkillLevelProvider_k__BackingField; // 0x20
	::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1>* EJDPMHENIAC; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1>* NIBABJHIMLD; // 0x30
	::System::UInt32 _Version_k__BackingField; // 0x38

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>* a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1>*))((::PBYTE)hIl2Cpp + CLASS_1_F6DE3A78755DFA8B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_Version()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6DE3A78755DFA8B_GET_VERSION_OFFSET))(this);
	}

	::System::Void set_Version(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F6DE3A78755DFA8B_SET_VERSION_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* get_PropertyModifierProvider()
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6DE3A78755DFA8B_GET_PROPERTYMODIFIERPROVIDER_OFFSET))(this);
	}

	::System::Void set_PropertyModifierProvider(::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_F6DE3A78755DFA8B_SET_PROPERTYMODIFIERPROVIDER_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_446* get_SkillLevelProvider()
	{
		return ((::Class_0_16E4307DCC419505_446*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6DE3A78755DFA8B_GET_SKILLLEVELPROVIDER_OFFSET))(this);
	}

	::System::Void set_SkillLevelProvider(::Class_0_16E4307DCC419505_446* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_446*))((::PBYTE)hIl2Cpp + CLASS_1_F6DE3A78755DFA8B_SET_SKILLLEVELPROVIDER_OFFSET))(this, a1);
	}

	::System::Void ImportProfile(::Class_1_EFF03B82D1C2B1F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EFF03B82D1C2B1F6*))((::PBYTE)hIl2Cpp + CLASS_1_F6DE3A78755DFA8B_IMPORTPROFILE_OFFSET))(this, a1);
	}

	::System::Void ExportProfile(::Class_0_16E4307DCC419505_419* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_419*))((::PBYTE)hIl2Cpp + CLASS_1_F6DE3A78755DFA8B_EXPORTPROFILE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0B94DB5209A9BBA6(::RPG::GameCore::AvatarSkillTreeAnchorType a1, ::Struct_2_BAC064D277DD99F1& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1&))((::PBYTE)hIl2Cpp + CLASS_1_F6DE3A78755DFA8B_METHOD_1_0B94DB5209A9BBA6_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Struct_2_BAC064D277DD99F1>* Method_1_0F89F90781BC6846()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Struct_2_BAC064D277DD99F1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6DE3A78755DFA8B_METHOD_1_0F89F90781BC6846_OFFSET))(this);
	}
};
