#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityElationAvatarData; }
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class MonsterData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYELATIONSTAGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F04D00)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F04D40)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE___C__GERSELECTABLEAVATARDATALIST_B__54_0_OFFSET UNITYSDK_OFFSET(0x8F04DA0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE___C__GERSELECTABLEAVATARDATALIST_B__54_1_OFFSET UNITYSDK_OFFSET(0x8F04DC0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE___C__GETSORTEDMONSTERS_B__49_0_OFFSET UNITYSDK_OFFSET(0x8F04D50)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationStage___c_TypeDefinitionIndex = 49907;

	class ActivityElationStage___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityElationStage___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityElationStage___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityElationStage___c_TypeDefinitionIndex)->GetStaticField(0x29A70);
		}
		static ::System::Func_2<::RPG::Client::ActivityElationAvatarData*, ::RPG::Client::IAvatarInfoProvider*>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityElationAvatarData*, ::RPG::Client::IAvatarInfoProvider*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityElationStage___c_TypeDefinitionIndex)->GetStaticField(0x29A78);
		}
		static ::System::Func_2<::RPG::Client::AvatarData*, ::RPG::Client::IAvatarInfoProvider*>** StaticGet___9__54_1()
		{
			return (::System::Func_2<::RPG::Client::AvatarData*, ::RPG::Client::IAvatarInfoProvider*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityElationStage___c_TypeDefinitionIndex)->GetStaticField(0x29A80);
		}
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__49_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityElationStage___c_TypeDefinitionIndex)->GetStaticField(0x29A88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedMonsters_b__49_0(::RPG::Client::MonsterData* a, ::RPG::Client::MonsterData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE___C__GETSORTEDMONSTERS_B__49_0_OFFSET))(this, a, b);
		}

		::RPG::Client::IAvatarInfoProvider* _GerSelectableAvatarDataList_b__54_0(::RPG::Client::ActivityElationAvatarData* data)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::ActivityElationAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE___C__GERSELECTABLEAVATARDATALIST_B__54_0_OFFSET))(this, data);
		}

		::RPG::Client::IAvatarInfoProvider* _GerSelectableAvatarDataList_b__54_1(::RPG::Client::AvatarData* a)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE___C__GERSELECTABLEAVATARDATALIST_B__54_1_OFFSET))(this, a);
		}
	};
}
