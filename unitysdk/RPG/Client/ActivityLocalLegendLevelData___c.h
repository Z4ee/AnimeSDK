#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class MonsterData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9BFD0B0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9BFD0F0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA___C__GETMONSTERDATA_B__1_0_OFFSET UNITYSDK_OFFSET(0x9BFD100)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA___C__GETPINNEDAVATARS_B__5_0_OFFSET UNITYSDK_OFFSET(0x9BFD150)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendLevelData___c_TypeDefinitionIndex = 56775;

	class ActivityLocalLegendLevelData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendLevelData___c_TypeDefinitionIndex)->GetStaticField(0x336F0);
		}
		static ::RPG::Client::ActivityLocalLegendLevelData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityLocalLegendLevelData___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendLevelData___c_TypeDefinitionIndex)->GetStaticField(0x336F8);
		}
		static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendLevelData___c_TypeDefinitionIndex)->GetStaticField(0x33700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMonsterData_b__1_0(::RPG::Client::MonsterData* a, ::RPG::Client::MonsterData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA___C__GETMONSTERDATA_B__1_0_OFFSET))(this, a, b);
		}

		::System::UInt32 _GetPinnedAvatars_b__5_0(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDLEVELDATA___C__GETPINNEDAVATARS_B__5_0_OFFSET))(this, avatar);
		}
	};
}
