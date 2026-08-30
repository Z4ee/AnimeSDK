#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::Client { class MonsterData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHALLENGEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA30300)
#define RPG_CLIENT_CHALLENGEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA30330)
#define RPG_CLIENT_CHALLENGEDATA___C__GETMONSTERDATABYSTAGEINDEX_B__94_0_OFFSET UNITYSDK_OFFSET(0xCA30410)
#define RPG_CLIENT_CHALLENGEDATA___C__GETVORACITYINVASIONLEVEL_B__91_0_OFFSET UNITYSDK_OFFSET(0xCA303E0)
#define RPG_CLIENT_CHALLENGEDATA___C__HASTARGETREWARDNOTFINISH_B__84_0_OFFSET UNITYSDK_OFFSET(0xCA303C0)
#define RPG_CLIENT_CHALLENGEDATA___C__HASTARGETREWARDNOTTAKEN_B__83_0_OFFSET UNITYSDK_OFFSET(0xCA30360)
#define RPG_CLIENT_CHALLENGEDATA___C__UPDATETARGET_B__79_0_OFFSET UNITYSDK_OFFSET(0xCA30340)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeData___c_TypeDefinitionIndex = 63154;

	class ChallengeData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChallengeData___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengeData___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeData___c_TypeDefinitionIndex)->GetStaticField(0x20F40);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*>, ::System::Boolean>** StaticGet___9__84_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeData___c_TypeDefinitionIndex)->GetStaticField(0x20F48);
		}
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__94_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeData___c_TypeDefinitionIndex)->GetStaticField(0x20F50);
		}
		static ::System::Func_2<::RPG::Client::BaseChallengeTargetData*, ::System::Boolean>** StaticGet___9__79_0()
		{
			return (::System::Func_2<::RPG::Client::BaseChallengeTargetData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeData___c_TypeDefinitionIndex)->GetStaticField(0x20F58);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*>, ::System::Boolean>** StaticGet___9__83_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeData___c_TypeDefinitionIndex)->GetStaticField(0x20F60);
		}
		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__91_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeData___c_TypeDefinitionIndex)->GetStaticField(0x20F68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateTarget_b__79_0(::RPG::Client::BaseChallengeTargetData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA___C__UPDATETARGET_B__79_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasTargetRewardNotTaken_b__83_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA___C__HASTARGETREWARDNOTTAKEN_B__83_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasTargetRewardNotFinish_b__84_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA___C__HASTARGETREWARDNOTFINISH_B__84_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetVoracityInvasionLevel_b__91_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA___C__GETVORACITYINVASIONLEVEL_B__91_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetMonsterDataByStageIndex_b__94_0(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA___C__GETMONSTERDATABYSTAGEINDEX_B__94_0_OFFSET))(this, a1, a2);
		}
	};
}
