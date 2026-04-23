#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingPowerRankData; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB259980)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB2599C0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C__FETCHSORTEDSAMEGROUPPOWERRANK_B__10_1_OFFSET UNITYSDK_OFFSET(0xB2599D0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C__FETCHSORTEDSAMEGROUPPOWERRANK_B__10_2_OFFSET UNITYSDK_OFFSET(0xB259AD0)
#define RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C___INITALLPOWERRANK_B__11_0_OFFSET UNITYSDK_OFFSET(0xB259C60)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingPowerRankInfo___c_TypeDefinitionIndex = 57158;

	class SwordTrainingPowerRankInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::SwordTrainingPowerRankData*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::RPG::Client::SwordTrainingPowerRankData*>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingPowerRankInfo___c_TypeDefinitionIndex)->GetStaticField(0x2EEB0);
		}
		static ::System::Comparison_1<::RPG::Client::SwordTrainingPowerRankData*>** StaticGet___9__10_1()
		{
			return (::System::Comparison_1<::RPG::Client::SwordTrainingPowerRankData*>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingPowerRankInfo___c_TypeDefinitionIndex)->GetStaticField(0x2EEB8);
		}
		static ::System::Comparison_1<::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>*>** StaticGet___9__10_2()
		{
			return (::System::Comparison_1<::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>*>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingPowerRankInfo___c_TypeDefinitionIndex)->GetStaticField(0x2EEC0);
		}
		static ::RPG::Client::SwordTrainingPowerRankInfo___c** StaticGet___9()
		{
			return (::RPG::Client::SwordTrainingPowerRankInfo___c**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingPowerRankInfo___c_TypeDefinitionIndex)->GetStaticField(0x2EEC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _FetchSortedSameGroupPowerRank_b__10_1(::RPG::Client::SwordTrainingPowerRankData* a, ::RPG::Client::SwordTrainingPowerRankData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTrainingPowerRankData*, ::RPG::Client::SwordTrainingPowerRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C__FETCHSORTEDSAMEGROUPPOWERRANK_B__10_1_OFFSET))(this, a, b);
		}

		::System::Int32 _FetchSortedSameGroupPowerRank_b__10_2(::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>* a, ::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>* b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>*, ::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C__FETCHSORTEDSAMEGROUPPOWERRANK_B__10_2_OFFSET))(this, a, b);
		}

		::System::Int32 __InitAllPowerRank_b__11_0(::RPG::Client::SwordTrainingPowerRankData* a, ::RPG::Client::SwordTrainingPowerRankData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTrainingPowerRankData*, ::RPG::Client::SwordTrainingPowerRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGPOWERRANKINFO___C___INITALLPOWERRANK_B__11_0_OFFSET))(this, a, b);
		}
	};
}
