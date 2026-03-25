#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::Client { class MonsterData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHALLENGEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x92C2130)
#define RPG_CLIENT_CHALLENGEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x92C2160)
#define RPG_CLIENT_CHALLENGEDATA___C__GETMONSTERDATABYSTAGEINDEX_B__20_0_OFFSET UNITYSDK_OFFSET(0x92C2210)
#define RPG_CLIENT_CHALLENGEDATA___C__HASTARGETREWARDNOTFINISH_B__9_0_OFFSET UNITYSDK_OFFSET(0x92C21F0)
#define RPG_CLIENT_CHALLENGEDATA___C__HASTARGETREWARDNOTTAKEN_B__8_0_OFFSET UNITYSDK_OFFSET(0x92C2190)
#define RPG_CLIENT_CHALLENGEDATA___C__UPDATETARGET_B__3_0_OFFSET UNITYSDK_OFFSET(0x92C2170)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeData___c_TypeDefinitionIndex = 51191;

	class ChallengeData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*>, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeData___c_TypeDefinitionIndex)->GetStaticField(0x44BC0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*>, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeData___c_TypeDefinitionIndex)->GetStaticField(0x44BC8);
		}
		static ::RPG::Client::ChallengeData___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengeData___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeData___c_TypeDefinitionIndex)->GetStaticField(0x44BD0);
		}
		static ::System::Func_2<::RPG::Client::BaseChallengeTargetData*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::BaseChallengeTargetData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeData___c_TypeDefinitionIndex)->GetStaticField(0x44BD8);
		}
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__20_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeData___c_TypeDefinitionIndex)->GetStaticField(0x44BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateTarget_b__3_0(::RPG::Client::BaseChallengeTargetData* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA___C__UPDATETARGET_B__3_0_OFFSET))(this, item);
		}

		::System::Boolean _HasTargetRewardNotTaken_b__8_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA___C__HASTARGETREWARDNOTTAKEN_B__8_0_OFFSET))(this, x);
		}

		::System::Boolean _HasTargetRewardNotFinish_b__9_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::BaseChallengeTargetData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA___C__HASTARGETREWARDNOTFINISH_B__9_0_OFFSET))(this, x);
		}

		::System::Int32 _GetMonsterDataByStageIndex_b__20_0(::RPG::Client::MonsterData* x, ::RPG::Client::MonsterData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEDATA___C__GETMONSTERDATABYSTAGEINDEX_B__20_0_OFFSET))(this, x, y);
		}
	};
}
