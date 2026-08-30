#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_115E551636659526;
class Class_1_96EDC22AC7BC5724;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengeBossData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ChallengeStoryData; }
namespace RPG::Client { class ITeamInfoProviderViewModel; }
namespace RPG::Client::Challenge::Boss { class ChallengeBossBuffSelectTeamInfoViewModel; }
namespace RPG::Client::Challenge::Story { class ChallengeStoryBuffSelectTeamInfoViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSettleConfirmViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectViewModel; }
namespace RPG::Client::Monster { class IMonsterDataProviderViewModel; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_84A07760AC2FB46B_METHOD_1_1410BFE9CE6E32D3_OFFSET UNITYSDK_OFFSET(0x18E09390)
#define CLASS_1_84A07760AC2FB46B_METHOD_1_171462C56F271257_OFFSET UNITYSDK_OFFSET(0x18E0A070)
#define CLASS_1_84A07760AC2FB46B_METHOD_1_285D12182EB2F663_OFFSET UNITYSDK_OFFSET(0x18E097A0)
#define CLASS_1_84A07760AC2FB46B_METHOD_1_2DE41D669FFC6EDE_OFFSET UNITYSDK_OFFSET(0x18E09570)
#define CLASS_1_84A07760AC2FB46B_METHOD_1_6161A7BAB784EB4F_OFFSET UNITYSDK_OFFSET(0x18E09E40)
#define CLASS_1_84A07760AC2FB46B_METHOD_1_7C6DA6CD52B2FF3F_OFFSET UNITYSDK_OFFSET(0x18E0A110)
#define CLASS_1_84A07760AC2FB46B_METHOD_1_CF17802BEE1E0467_OFFSET UNITYSDK_OFFSET(0x18E09F70)
#define CLASS_1_84A07760AC2FB46B_METHOD_1_D7B57D4A6E55D8F9_OFFSET UNITYSDK_OFFSET(0x18E09DA0)
#define CLASS_1_84A07760AC2FB46B_METHOD_1_DBBED79566BF015D_OFFSET UNITYSDK_OFFSET(0x18E09BC0)
#define CLASS_1_84A07760AC2FB46B_METHOD_1_DC732557212DF8CD_OFFSET UNITYSDK_OFFSET(0x18E099B0)
#define CLASS_1_84A07760AC2FB46B_METHOD_1_EC32471628EC9809_OFFSET UNITYSDK_OFFSET(0x18E096A0)
#define CLASS_1_84A07760AC2FB46B__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0A250)

inline static constexpr unsigned int Class_1_84A07760AC2FB46B_TypeDefinitionIndex = 80185;

class Class_1_84A07760AC2FB46B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84A07760AC2FB46B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1410BFE9CE6E32D3(::RPG::Client::ChallengeGroupData* a1, ::System::Nullable_1<::System::Int32> a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeGroupData*, ::System::Nullable_1<::System::Int32>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_84A07760AC2FB46B_METHOD_1_1410BFE9CE6E32D3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2DE41D669FFC6EDE(::RPG::Client::ITeamInfoProviderViewModel* a1, ::RPG::AvatarSystem::IAvatar* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ITeamInfoProviderViewModel*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_84A07760AC2FB46B_METHOD_1_2DE41D669FFC6EDE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EC32471628EC9809(::RPG::Client::Monster::IMonsterDataProviderViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Monster::IMonsterDataProviderViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_84A07760AC2FB46B_METHOD_1_EC32471628EC9809_OFFSET))(this, a1);
	}

	::System::Void Method_1_285D12182EB2F663(::RPG::Client::ChallengeStoryData* a1, ::RPG::Client::Challenge::Story::ChallengeStoryBuffSelectTeamInfoViewModel* a2, ::System::Action_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeStoryData*, ::RPG::Client::Challenge::Story::ChallengeStoryBuffSelectTeamInfoViewModel*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_84A07760AC2FB46B_METHOD_1_285D12182EB2F663_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DC732557212DF8CD(::RPG::Client::ChallengeBossData* a1, ::RPG::Client::Challenge::Boss::ChallengeBossBuffSelectTeamInfoViewModel* a2, ::System::Action_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeBossData*, ::RPG::Client::Challenge::Boss::ChallengeBossBuffSelectTeamInfoViewModel*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_84A07760AC2FB46B_METHOD_1_DC732557212DF8CD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DBBED79566BF015D(::RPG::Client::ChallengeBossData* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeBossData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_84A07760AC2FB46B_METHOD_1_DBBED79566BF015D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D7B57D4A6E55D8F9(::Class_1_115E551636659526* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_115E551636659526*))((::PBYTE)hIl2Cpp + CLASS_1_84A07760AC2FB46B_METHOD_1_D7B57D4A6E55D8F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_6161A7BAB784EB4F(::Class_1_96EDC22AC7BC5724* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_96EDC22AC7BC5724*))((::PBYTE)hIl2Cpp + CLASS_1_84A07760AC2FB46B_METHOD_1_6161A7BAB784EB4F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF17802BEE1E0467(::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_84A07760AC2FB46B_METHOD_1_CF17802BEE1E0467_OFFSET))(this, a1);
	}

	::System::Void Method_1_171462C56F271257(::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_84A07760AC2FB46B_METHOD_1_171462C56F271257_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C6DA6CD52B2FF3F(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_84A07760AC2FB46B_METHOD_1_7C6DA6CD52B2FF3F_OFFSET))(this, a1);
	}
};
