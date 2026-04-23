#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifierProvider_1; }
namespace RPG::AvatarSystem::Property { template <typename T> class PropertyCalculator_1; }
namespace RPG::AvatarSystem::Property { template <typename T> class PropertyContext_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_96D2B45FC52A850A_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x9165310)
#define CLASS_1_96D2B45FC52A850A_METHOD_1_7A886AF1A951FE21_OFFSET UNITYSDK_OFFSET(0x9165180)
#define CLASS_1_96D2B45FC52A850A_METHOD_1_7D4883D110D098FF_OFFSET UNITYSDK_OFFSET(0x9164DB0)
#define CLASS_1_96D2B45FC52A850A_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0x91648D0)
#define CLASS_1_96D2B45FC52A850A_METHOD_1_91C3FC3C50F091F5_OFFSET UNITYSDK_OFFSET(0x9164C20)
#define CLASS_1_96D2B45FC52A850A_METHOD_1_A3F0D11AD82C6BF7_OFFSET UNITYSDK_OFFSET(0x9164AD0)
#define CLASS_1_96D2B45FC52A850A_METHOD_1_AB76301049E2A339_OFFSET UNITYSDK_OFFSET(0x9165040)
#define CLASS_1_96D2B45FC52A850A_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x9164F60)
#define CLASS_1_96D2B45FC52A850A__CTOR_OFFSET UNITYSDK_OFFSET(0x9164870)

inline static constexpr unsigned int Class_1_96D2B45FC52A850A_TypeDefinitionIndex = 69184;

class Class_1_96D2B45FC52A850A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>* Field_1_0; // 0x10
	::RPG::AvatarSystem::Property::PropertyCalculator_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Field_1_2; // 0x18
	::RPG::AvatarSystem::Property::PropertyContext_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96D2B45FC52A850A__CTOR_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Method_1_A3F0D11AD82C6BF7(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_96D2B45FC52A850A_METHOD_1_A3F0D11AD82C6BF7_OFFSET))(this, a1);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveDecimal Method_1_91C3FC3C50F091F5(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_96D2B45FC52A850A_METHOD_1_91C3FC3C50F091F5_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D4883D110D098FF(::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + CLASS_1_96D2B45FC52A850A_METHOD_1_7D4883D110D098FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB76301049E2A339(::System::Collections::Generic::List_1<::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*>*))((::PBYTE)hIl2Cpp + CLASS_1_96D2B45FC52A850A_METHOD_1_AB76301049E2A339_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A886AF1A951FE21(::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Property::IPropertyModifierProvider_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + CLASS_1_96D2B45FC52A850A_METHOD_1_7A886AF1A951FE21_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CA88D55ECEFAD59()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96D2B45FC52A850A_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96D2B45FC52A850A_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96D2B45FC52A850A_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}
};
