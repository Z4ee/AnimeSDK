#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_EXPEDITIONBATTLERANKHELPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCEFF1B0)
#define RPG_CLIENT_EXPEDITIONBATTLERANKHELPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCEFF1F0)
#define RPG_CLIENT_EXPEDITIONBATTLERANKHELPER___C__FROMSTAR_B__1_0_OFFSET UNITYSDK_OFFSET(0xCEFF200)
#define RPG_CLIENT_EXPEDITIONBATTLERANKHELPER___C__GETRANKSORDEREDBYSTARDESCENDING_B__3_0_OFFSET UNITYSDK_OFFSET(0xCEFF260)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleRankHelper___c_TypeDefinitionIndex = 63910;

	class ExpeditionBattleRankHelper___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionBattleRankHelper___c_TypeDefinitionIndex)->GetStaticField(0x66640);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionBattleRankHelper___c_TypeDefinitionIndex)->GetStaticField(0x66648);
		}
		static ::RPG::Client::ExpeditionBattleRankHelper___c** StaticGet___9()
		{
			return (::RPG::Client::ExpeditionBattleRankHelper___c**)Il2CppClass::FromTypeDefinitionIndex(ExpeditionBattleRankHelper___c_TypeDefinitionIndex)->GetStaticField(0x66650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKHELPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKHELPER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _FromStar_b__1_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKHELPER___C__FROMSTAR_B__1_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetRanksOrderedByStarDescending_b__3_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKHELPER___C__GETRANKSORDEREDBYSTARDESCENDING_B__3_0_OFFSET))(this, a1, a2);
		}
	};
}
