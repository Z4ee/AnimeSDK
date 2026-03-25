#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeGroupData; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x92D95F0)
#define RPG_CLIENT_CHALLENGEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x92D9620)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETAVAILABLEBOSSGROUPDATA_B__2_0_OFFSET UNITYSDK_OFFSET(0x92D9630)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETAVAILABLESTORYGROUPDATA_B__50_0_OFFSET UNITYSDK_OFFSET(0x92D98C0)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETINSCHEDULEGROUPDATASBYTYPE_B__73_0_OFFSET UNITYSDK_OFFSET(0x92D9B10)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETINSCHEDULEGROUPDATAS_B__72_0_OFFSET UNITYSDK_OFFSET(0x92D9AA0)
#define RPG_CLIENT_CHALLENGEMODULE___C__GETNONESCHEDULECHALLENGEGROUPDATA_B__17_0_OFFSET UNITYSDK_OFFSET(0x92D9810)
#define RPG_CLIENT_CHALLENGEMODULE___C__HASBOSSREWARDNOTTAKEN_B__7_0_OFFSET UNITYSDK_OFFSET(0x92D97F0)
#define RPG_CLIENT_CHALLENGEMODULE___C__HASMEMORYREWARDNOTTAKEN_B__23_0_OFFSET UNITYSDK_OFFSET(0x92D9840)
#define RPG_CLIENT_CHALLENGEMODULE___C__HASNEWBOSSCHALLENGEGROUP_B__6_0_OFFSET UNITYSDK_OFFSET(0x92D96A0)
#define RPG_CLIENT_CHALLENGEMODULE___C__HASNEWSTORYCHALLENGEGROUP_B__53_0_OFFSET UNITYSDK_OFFSET(0x92D9930)
#define RPG_CLIENT_CHALLENGEMODULE___C__HASSTORYREWARDNOTTAKEN_B__54_0_OFFSET UNITYSDK_OFFSET(0x92D9A80)
#define RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__113_0_OFFSET UNITYSDK_OFFSET(0x92D9B80)
#define RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__113_1_OFFSET UNITYSDK_OFFSET(0x92D9BF0)
#define RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__113_2_OFFSET UNITYSDK_OFFSET(0x92D9C60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeModule___c_TypeDefinitionIndex = 51198;

	class ChallengeModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__113_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x44E40);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x44E48);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x44E50);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x44E58);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__73_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x44E60);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x44E68);
		}
		static ::System::Action** StaticGet___9__113_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x44E70);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__53_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x44E78);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::UInt32>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x44E80);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x44E88);
		}
		static ::RPG::Client::ChallengeModule___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengeModule___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x44E90);
		}
		static ::System::Action** StaticGet___9__113_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x44E98);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__72_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x44EA0);
		}
		static ::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::RPG::Client::ChallengeGroupData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeModule___c_TypeDefinitionIndex)->GetStaticField(0x44EA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAvailableBossGroupData_b__2_0(::RPG::Client::ChallengeGroupData* groupData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETAVAILABLEBOSSGROUPDATA_B__2_0_OFFSET))(this, groupData);
		}

		::System::Boolean _HasNewBossChallengeGroup_b__6_0(::RPG::Client::ChallengeGroupData* group)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__HASNEWBOSSCHALLENGEGROUP_B__6_0_OFFSET))(this, group);
		}

		::System::Boolean _HasBossRewardNotTaken_b__7_0(::RPG::Client::ChallengeGroupData* groupData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__HASBOSSREWARDNOTTAKEN_B__7_0_OFFSET))(this, groupData);
		}

		::System::UInt32 _GetNoneScheduleChallengeGroupData_b__17_0(::RPG::Client::ChallengeGroupData* item)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETNONESCHEDULECHALLENGEGROUPDATA_B__17_0_OFFSET))(this, item);
		}

		::System::Boolean _HasMemoryRewardNotTaken_b__23_0(::RPG::Client::ChallengeGroupData* groupData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__HASMEMORYREWARDNOTTAKEN_B__23_0_OFFSET))(this, groupData);
		}

		::System::Boolean _GetAvailableStoryGroupData_b__50_0(::RPG::Client::ChallengeGroupData* groupData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETAVAILABLESTORYGROUPDATA_B__50_0_OFFSET))(this, groupData);
		}

		::System::Boolean _HasNewStoryChallengeGroup_b__53_0(::RPG::Client::ChallengeGroupData* group)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__HASNEWSTORYCHALLENGEGROUP_B__53_0_OFFSET))(this, group);
		}

		::System::Boolean _HasStoryRewardNotTaken_b__54_0(::RPG::Client::ChallengeGroupData* groupData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__HASSTORYREWARDNOTTAKEN_B__54_0_OFFSET))(this, groupData);
		}

		::System::Boolean _GetInScheduleGroupDatas_b__72_0(::RPG::Client::ChallengeGroupData* groupData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETINSCHEDULEGROUPDATAS_B__72_0_OFFSET))(this, groupData);
		}

		::System::Boolean _GetInScheduleGroupDatasByType_b__73_0(::RPG::Client::ChallengeGroupData* groupData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C__GETINSCHEDULEGROUPDATASBYTYPE_B__73_0_OFFSET))(this, groupData);
		}

		::System::Void __ContinueChallenge_b__113_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__113_0_OFFSET))(this);
		}

		::System::Void __ContinueChallenge_b__113_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__113_1_OFFSET))(this);
		}

		::System::Void __ContinueChallenge_b__113_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEMODULE___C___CONTINUECHALLENGE_B__113_2_OFFSET))(this);
		}
	};
}
