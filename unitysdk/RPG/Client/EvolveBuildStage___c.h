#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_942D40AEEDD1812F;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class EvolveBuildCollectionGear; }
namespace RPG::Client { class MonsterData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D05020)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D05050)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERIDS_B__49_0_OFFSET UNITYSDK_OFFSET(0x17D051E0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERIDS_B__49_1_OFFSET UNITYSDK_OFFSET(0x17D05230)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERS_B__50_0_OFFSET UNITYSDK_OFFSET(0x17D05250)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERS_B__50_1_OFFSET UNITYSDK_OFFSET(0x17D05270)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETTRIALAVATARS_B__48_0_OFFSET UNITYSDK_OFFSET(0x17D051D0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GET_RECOMMENDGEARS_B__41_0_OFFSET UNITYSDK_OFFSET(0x17D05090)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x17D05060)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildStage___c_TypeDefinitionIndex = 61018;

	class EvolveBuildStage___c : public ::System::Object
	{
	public:
		static ::RPG::Client::EvolveBuildStage___c** StaticGet___9()
		{
			return (::RPG::Client::EvolveBuildStage___c**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStage___c_TypeDefinitionIndex)->GetStaticField(0x6BF00);
		}
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__50_1()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStage___c_TypeDefinitionIndex)->GetStaticField(0x6BF08);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::AvatarSystem::IAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStage___c_TypeDefinitionIndex)->GetStaticField(0x6BF10);
		}
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__49_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStage___c_TypeDefinitionIndex)->GetStaticField(0x6BF18);
		}
		static ::System::Comparison_1<::Class_1_942D40AEEDD1812F*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::Class_1_942D40AEEDD1812F*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStage___c_TypeDefinitionIndex)->GetStaticField(0x6BF20);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStage___c_TypeDefinitionIndex)->GetStaticField(0x6BF28);
		}
		static ::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>** StaticGet___9__49_1()
		{
			return (::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStage___c_TypeDefinitionIndex)->GetStaticField(0x6BF30);
		}
		static ::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStage___c_TypeDefinitionIndex)->GetStaticField(0x6BF38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__0_0(::Class_1_942D40AEEDD1812F* a1, ::Class_1_942D40AEEDD1812F* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_942D40AEEDD1812F*, ::Class_1_942D40AEEDD1812F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C___CTOR_B__0_0_OFFSET))(this, a1, a2);
		}

		::RPG::Client::EvolveBuildCollectionGear* _get_RecommendGears_b__41_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::EvolveBuildCollectionGear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GET_RECOMMENDGEARS_B__41_0_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* _GetTrialAvatars_b__48_0(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETTRIALAVATARS_B__48_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetMonsterIDs_b__49_0(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERIDS_B__49_0_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetMonsterIDs_b__49_1(::RPG::Client::MonsterData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERIDS_B__49_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetMonsters_b__50_0(::RPG::Client::MonsterData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERS_B__50_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetMonsters_b__50_1(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERS_B__50_1_OFFSET))(this, a1, a2);
		}
	};
}
