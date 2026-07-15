#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ActivityElationAvatarData; }
namespace RPG::Client { class MonsterData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYELATIONSTAGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x194DF030)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x194DF070)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE___C__GERSELECTABLEAVATARDATALIST_B__54_0_OFFSET UNITYSDK_OFFSET(0x194DF0D0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE___C__GERSELECTABLEAVATARDATALIST_B__54_1_OFFSET UNITYSDK_OFFSET(0x194DF0F0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE___C__GETSORTEDMONSTERS_B__49_0_OFFSET UNITYSDK_OFFSET(0x194DF080)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationStage___c_TypeDefinitionIndex = 58775;

	class ActivityElationStage___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityElationStage___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityElationStage___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityElationStage___c_TypeDefinitionIndex)->GetStaticField(0x390A0);
		}
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__49_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityElationStage___c_TypeDefinitionIndex)->GetStaticField(0x390A8);
		}
		static ::System::Func_2<::RPG::Client::ActivityElationAvatarData*, ::RPG::AvatarSystem::IAvatar*>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityElationAvatarData*, ::RPG::AvatarSystem::IAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityElationStage___c_TypeDefinitionIndex)->GetStaticField(0x390B0);
		}
		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*>** StaticGet___9__54_1()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::RPG::AvatarSystem::IAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityElationStage___c_TypeDefinitionIndex)->GetStaticField(0x390B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedMonsters_b__49_0(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE___C__GETSORTEDMONSTERS_B__49_0_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* _GerSelectableAvatarDataList_b__54_0(::RPG::Client::ActivityElationAvatarData* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::Client::ActivityElationAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE___C__GERSELECTABLEAVATARDATALIST_B__54_0_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* _GerSelectableAvatarDataList_b__54_1(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE___C__GERSELECTABLEAVATARDATALIST_B__54_1_OFFSET))(this, a1);
		}
	};
}
