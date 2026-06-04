#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeGroupData; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHALLENGEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB55BAA0)
#define RPG_CLIENT_CHALLENGEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB55BAD0)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETAVAILABLEBOSSGROUPDATA_B__4_0_OFFSET UNITYSDK_OFFSET(0xB55BAE0)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETAVAILABLESTORYGROUPDATA_B__52_0_OFFSET UNITYSDK_OFFSET(0xB55BD60)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETINSCHEDULEGROUPDATASBYTYPE_B__88_0_OFFSET UNITYSDK_OFFSET(0xB55BEC0)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETINSCHEDULEGROUPDATAS_B__87_0_OFFSET UNITYSDK_OFFSET(0xB55BE80)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETNONESCHEDULECHALLENGEGROUPDATA_B__24_0_OFFSET UNITYSDK_OFFSET(0xB55BC00)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETSORTEDAVAILABLEMEMORYCHALLENGEGROUPS_B__29_0_OFFSET UNITYSDK_OFFSET(0xB55BC30)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETSORTEDAVAILABLEMEMORYCHALLENGEGROUPS_B__29_1_OFFSET UNITYSDK_OFFSET(0xB55BC70)
#define RPG_CLIENT_CHALLENGEMODULE___C__HASBOSSREWARDNOTTAKEN_B__9_0_OFFSET UNITYSDK_OFFSET(0xB55BBE0)
#define RPG_CLIENT_CHALLENGEMODULE___C__HASMEMORYREWARDNOTTAKEN_B__30_0_OFFSET UNITYSDK_OFFSET(0xB55BD10)
#define RPG_CLIENT_CHALLENGEMODULE___C__HASNEWBOSSCHALLENGEGROUP_B__8_0_OFFSET UNITYSDK_OFFSET(0xB55BB20)
#define RPG_CLIENT_CHALLENGEMODULE___C__HASNEWSTORYCHALLENGEGROUP_B__55_0_OFFSET UNITYSDK_OFFSET(0xB55BDA0)
#define RPG_CLIENT_CHALLENGEMODULE___C__HASSTORYREWARDNOTTAKEN_B__56_0_OFFSET UNITYSDK_OFFSET(0xB55BE60)
#define RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__128_0_OFFSET UNITYSDK_OFFSET(0xB55BF00)
#define RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__128_1_OFFSET UNITYSDK_OFFSET(0xB55BF70)
#define RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__128_2_OFFSET UNITYSDK_OFFSET(0xB55BFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeModule___c_TypeDefinitionIndex = 59044;

	class ChallengeModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__55_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5BD70);
		}
		static ::System::Comparison_1<::RPG::Client::ChallengeGroupData*>** StaticGet___9__29_1()
		{
			return (::System::Comparison_1<::RPG::Client::ChallengeGroupData*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5BD78);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5BD80);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__52_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5BD88);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5BD90);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__88_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5BD98);
		}
		static ::System::Action** StaticGet___9__128_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5BDA0);
		}
		static ::System::Action** StaticGet___9__128_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5BDA8);
		}
		static ::System::Action** StaticGet___9__128_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5BDB0);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__87_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5BDB8);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5BDC0);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__56_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5BDC8);
		}
		static ::RPG::Client::ChallengeModule___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengeModule___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5BDD0);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::UInt32>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5BDD8);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5BDE0);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x5BDE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAvailableBossGroupData_b__4_0(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETAVAILABLEBOSSGROUPDATA_B__4_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasNewBossChallengeGroup_b__8_0(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__HASNEWBOSSCHALLENGEGROUP_B__8_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasBossRewardNotTaken_b__9_0(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__HASBOSSREWARDNOTTAKEN_B__9_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetNoneScheduleChallengeGroupData_b__24_0(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETNONESCHEDULECHALLENGEGROUPDATA_B__24_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetSortedAvailableMemoryChallengeGroups_b__29_0(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETSORTEDAVAILABLEMEMORYCHALLENGEGROUPS_B__29_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetSortedAvailableMemoryChallengeGroups_b__29_1(::RPG::Client::ChallengeGroupData* a1, ::RPG::Client::ChallengeGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChallengeGroupData*, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETSORTEDAVAILABLEMEMORYCHALLENGEGROUPS_B__29_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasMemoryRewardNotTaken_b__30_0(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__HASMEMORYREWARDNOTTAKEN_B__30_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetAvailableStoryGroupData_b__52_0(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETAVAILABLESTORYGROUPDATA_B__52_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasNewStoryChallengeGroup_b__55_0(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__HASNEWSTORYCHALLENGEGROUP_B__55_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasStoryRewardNotTaken_b__56_0(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__HASSTORYREWARDNOTTAKEN_B__56_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetInScheduleGroupDatas_b__87_0(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETINSCHEDULEGROUPDATAS_B__87_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetInScheduleGroupDatasByType_b__88_0(::RPG::Client::ChallengeGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETINSCHEDULEGROUPDATASBYTYPE_B__88_0_OFFSET))(this, a1);
		}

		::System::Void __ContinueChallenge_b__128_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__128_0_OFFSET))(this);
		}

		::System::Void __ContinueChallenge_b__128_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__128_1_OFFSET))(this);
		}

		::System::Void __ContinueChallenge_b__128_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__128_2_OFFSET))(this);
		}
	};
}
