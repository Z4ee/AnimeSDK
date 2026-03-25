#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F57E30)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F57E70)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__GETMONSTERDATALIST_B__2_0_OFFSET UNITYSDK_OFFSET(0x8F57E80)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__GETMONSTERDATALIST_B__2_1_OFFSET UNITYSDK_OFFSET(0x8F57EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendUtils___c_TypeDefinitionIndex = 49950;

	class ActivityLocalLegendUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendUtils___c_TypeDefinitionIndex)->GetStaticField(0x2C530);
		}
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__2_1()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendUtils___c_TypeDefinitionIndex)->GetStaticField(0x2C538);
		}
		static ::RPG::Client::ActivityLocalLegendUtils___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityLocalLegendUtils___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendUtils___c_TypeDefinitionIndex)->GetStaticField(0x2C540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetMonsterDataList_b__2_0(::RPG::Client::MonsterData* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__GETMONSTERDATALIST_B__2_0_OFFSET))(this, x);
		}

		::System::Int32 _GetMonsterDataList_b__2_1(::RPG::Client::MonsterData* a, ::RPG::Client::MonsterData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__GETMONSTERDATALIST_B__2_1_OFFSET))(this, a, b);
		}
	};
}
