#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_341;
class Class_0_16E4307DCC419505_591;
class Class_0_16E4307DCC419505_592;
class Class_1_06CDCC6A0A66BA0A;
class Class_1_090AB0EAA610410E;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_5CD78AEA77707C4B_GET_PROFILEBUILDER_OFFSET UNITYSDK_OFFSET(0xA9ED850)
#define CLASS_1_5CD78AEA77707C4B_GET_RULEPROVIDER_OFFSET UNITYSDK_OFFSET(0xA9ED870)
#define CLASS_1_5CD78AEA77707C4B_GET_UPGRADEMAPPERS_OFFSET UNITYSDK_OFFSET(0xA9ED830)
#define CLASS_1_5CD78AEA77707C4B_METHOD_1_8149469AB45C4061_OFFSET UNITYSDK_OFFSET(0xA9EDEC0)
#define CLASS_1_5CD78AEA77707C4B_METHOD_1_A670639DE9EBEFCC_OFFSET UNITYSDK_OFFSET(0xA9EDF60)
#define CLASS_1_5CD78AEA77707C4B_METHOD_1_A6D2364160463E2D_OFFSET UNITYSDK_OFFSET(0xA9ED990)
#define CLASS_1_5CD78AEA77707C4B_METHOD_1_E681B6D41E5607D0_OFFSET UNITYSDK_OFFSET(0xA9ED890)
#define CLASS_1_5CD78AEA77707C4B_SET_PROFILEBUILDER_OFFSET UNITYSDK_OFFSET(0xA9ED860)
#define CLASS_1_5CD78AEA77707C4B_SET_RULEPROVIDER_OFFSET UNITYSDK_OFFSET(0xA9ED880)
#define CLASS_1_5CD78AEA77707C4B_SET_UPGRADEMAPPERS_OFFSET UNITYSDK_OFFSET(0xA9ED840)
#define CLASS_1_5CD78AEA77707C4B__CTOR_OFFSET UNITYSDK_OFFSET(0xA9EE500)

inline static constexpr unsigned int Class_1_5CD78AEA77707C4B_TypeDefinitionIndex = 51001;

class Class_1_5CD78AEA77707C4B : public ::System::Object
{
public:
	::System::Collections::Generic::SortedDictionary_2<::RPG::Client::AvatarUpgradePart, ::Class_0_16E4307DCC419505_591*>* _UpgradeMappers_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_592* _RuleProvider_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_341* _ProfileBuilder_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::SortedDictionary_2<::RPG::Client::AvatarUpgradePart, ::Class_0_16E4307DCC419505_591*>* get_UpgradeMappers()
	{
		return ((::System::Collections::Generic::SortedDictionary_2<::RPG::Client::AvatarUpgradePart, ::Class_0_16E4307DCC419505_591*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_GET_UPGRADEMAPPERS_OFFSET))(this);
	}

	::System::Void set_UpgradeMappers(::System::Collections::Generic::SortedDictionary_2<::RPG::Client::AvatarUpgradePart, ::Class_0_16E4307DCC419505_591*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::SortedDictionary_2<::RPG::Client::AvatarUpgradePart, ::Class_0_16E4307DCC419505_591*>*))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_SET_UPGRADEMAPPERS_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_341* get_ProfileBuilder()
	{
		return ((::Class_0_16E4307DCC419505_341*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_GET_PROFILEBUILDER_OFFSET))(this);
	}

	::System::Void set_ProfileBuilder(::Class_0_16E4307DCC419505_341* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_341*))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_SET_PROFILEBUILDER_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_592* get_RuleProvider()
	{
		return ((::Class_0_16E4307DCC419505_592*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_GET_RULEPROVIDER_OFFSET))(this);
	}

	::System::Void set_RuleProvider(::Class_0_16E4307DCC419505_592* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_592*))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_SET_RULEPROVIDER_OFFSET))(this, value);
	}

	::Class_1_06CDCC6A0A66BA0A* Method_1_E681B6D41E5607D0()
	{
		return ((::Class_1_06CDCC6A0A66BA0A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_METHOD_1_E681B6D41E5607D0_OFFSET))(this);
	}

	::System::Boolean Method_1_A6D2364160463E2D(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::AvatarUpgradePart a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_METHOD_1_A6D2364160463E2D_OFFSET))(this, a1, a2);
	}

	::Class_1_090AB0EAA610410E* Method_1_A670639DE9EBEFCC(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_1_090AB0EAA610410E*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_METHOD_1_A670639DE9EBEFCC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_591*>* Method_1_8149469AB45C4061(::RPG::Client::AvatarUpgradePart a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_591*>*(*)(::PVOID, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_5CD78AEA77707C4B_METHOD_1_8149469AB45C4061_OFFSET))(this, a1);
	}
};
