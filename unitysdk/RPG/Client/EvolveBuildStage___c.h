#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_942D40AEEDD1812F;
namespace RPG::Client { class EvolveBuildCollectionGear; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class MonsterData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9646E60)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9646E90)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERIDS_B__49_0_OFFSET UNITYSDK_OFFSET(0x9647010)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERIDS_B__49_1_OFFSET UNITYSDK_OFFSET(0x9647060)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERS_B__50_0_OFFSET UNITYSDK_OFFSET(0x9647080)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERS_B__50_1_OFFSET UNITYSDK_OFFSET(0x96470A0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETTRIALAVATARS_B__48_0_OFFSET UNITYSDK_OFFSET(0x9646FA0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C__GET_RECOMMENDGEARS_B__41_0_OFFSET UNITYSDK_OFFSET(0x9646ED0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x9646EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildStage___c_TypeDefinitionIndex = 51855;

	class EvolveBuildStage___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::EvolveBuildCollectionGear*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStage___c_TypeDefinitionIndex)->GetStaticField(0x47810);
		}
		static ::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>** StaticGet___9__49_1()
		{
			return (::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStage___c_TypeDefinitionIndex)->GetStaticField(0x47818);
		}
		static ::System::Comparison_1<::Class_1_942D40AEEDD1812F*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::Class_1_942D40AEEDD1812F*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStage___c_TypeDefinitionIndex)->GetStaticField(0x47820);
		}
		static ::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStage___c_TypeDefinitionIndex)->GetStaticField(0x47828);
		}
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__49_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStage___c_TypeDefinitionIndex)->GetStaticField(0x47830);
		}
		static ::RPG::Client::EvolveBuildStage___c** StaticGet___9()
		{
			return (::RPG::Client::EvolveBuildStage___c**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStage___c_TypeDefinitionIndex)->GetStaticField(0x47838);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::IAvatarInfoProvider*>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::IAvatarInfoProvider*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStage___c_TypeDefinitionIndex)->GetStaticField(0x47840);
		}
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__50_1()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildStage___c_TypeDefinitionIndex)->GetStaticField(0x47848);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__0_0(::Class_1_942D40AEEDD1812F* a, ::Class_1_942D40AEEDD1812F* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_942D40AEEDD1812F*, ::Class_1_942D40AEEDD1812F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C___CTOR_B__0_0_OFFSET))(this, a, b);
		}

		::RPG::Client::EvolveBuildCollectionGear* _get_RecommendGears_b__41_0(::System::UInt32 x)
		{
			return ((::RPG::Client::EvolveBuildCollectionGear*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GET_RECOMMENDGEARS_B__41_0_OFFSET))(this, x);
		}

		::RPG::Client::IAvatarInfoProvider* _GetTrialAvatars_b__48_0(::System::UInt32 id)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETTRIALAVATARS_B__48_0_OFFSET))(this, id);
		}

		::System::Int32 _GetMonsterIDs_b__49_0(::RPG::Client::MonsterData* a, ::RPG::Client::MonsterData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERIDS_B__49_0_OFFSET))(this, a, b);
		}

		::System::UInt32 _GetMonsterIDs_b__49_1(::RPG::Client::MonsterData* monster)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERIDS_B__49_1_OFFSET))(this, monster);
		}

		::System::UInt32 _GetMonsters_b__50_0(::RPG::Client::MonsterData* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERS_B__50_0_OFFSET))(this, x);
		}

		::System::Int32 _GetMonsters_b__50_1(::RPG::Client::MonsterData* a, ::RPG::Client::MonsterData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE___C__GETMONSTERS_B__50_1_OFFSET))(this, a, b);
		}
	};
}
