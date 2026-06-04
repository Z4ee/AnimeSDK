#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB19D8E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB19D920)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__GETMONSTERDATALIST_B__2_0_OFFSET UNITYSDK_OFFSET(0xB19D930)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__GETMONSTERDATALIST_B__2_1_OFFSET UNITYSDK_OFFSET(0xB19D950)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendUtils___c_TypeDefinitionIndex = 57573;

	class ActivityLocalLegendUtils___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__2_1()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendUtils___c_TypeDefinitionIndex)->GetStaticField(0x56B60);
		}
		static ::RPG::Client::ActivityLocalLegendUtils___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityLocalLegendUtils___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendUtils___c_TypeDefinitionIndex)->GetStaticField(0x56B68);
		}
		static ::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendUtils___c_TypeDefinitionIndex)->GetStaticField(0x56B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetMonsterDataList_b__2_0(::RPG::Client::MonsterData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__GETMONSTERDATALIST_B__2_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetMonsterDataList_b__2_1(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS___C__GETMONSTERDATALIST_B__2_1_OFFSET))(this, a1, a2);
		}
	};
}
