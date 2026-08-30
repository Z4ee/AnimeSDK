#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_4D052AB586FDB247_1;
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_FATESTATISTICSINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD039C30)
#define RPG_CLIENT_FATESTATISTICSINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD039C70)
#define RPG_CLIENT_FATESTATISTICSINFO___C___SYNCDIFFICULTYINFO_B__4_0_OFFSET UNITYSDK_OFFSET(0xD039C80)
#define RPG_CLIENT_FATESTATISTICSINFO___C___SYNCDIFFICULTYINFO_B__4_2_OFFSET UNITYSDK_OFFSET(0xD039D20)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatisticsInfo___c_TypeDefinitionIndex = 64194;

	class FateStatisticsInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FateStatisticsInfo___c** StaticGet___9()
		{
			return (::RPG::Client::FateStatisticsInfo___c**)Il2CppClass::FromTypeDefinitionIndex(FateStatisticsInfo___c_TypeDefinitionIndex)->GetStaticField(0xD560);
		}
		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_4D052AB586FDB247_1*>>** StaticGet___9__4_2()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_4D052AB586FDB247_1*>>**)Il2CppClass::FromTypeDefinitionIndex(FateStatisticsInfo___c_TypeDefinitionIndex)->GetStaticField(0xD568);
		}
		static ::System::Func_1<::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FateStatisticsInfo___c_TypeDefinitionIndex)->GetStaticField(0xD570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO___C__CTOR_OFFSET))(this);
		}

		::System::String* __SyncDifficultyInfo_b__4_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO___C___SYNCDIFFICULTYINFO_B__4_0_OFFSET))(this);
		}

		::System::Int32 __SyncDifficultyInfo_b__4_2(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_4D052AB586FDB247_1*> a1, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_4D052AB586FDB247_1*> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_4D052AB586FDB247_1*>, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_4D052AB586FDB247_1*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO___C___SYNCDIFFICULTYINFO_B__4_2_OFFSET))(this, a1, a2);
		}
	};
}
