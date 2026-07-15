#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_4D052AB586FDB247_1;
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_FATESTATISTICSINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19721410)
#define RPG_CLIENT_FATESTATISTICSINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19721450)
#define RPG_CLIENT_FATESTATISTICSINFO___C___SYNCDIFFICULTYINFO_B__4_0_OFFSET UNITYSDK_OFFSET(0x19721460)
#define RPG_CLIENT_FATESTATISTICSINFO___C___SYNCDIFFICULTYINFO_B__4_2_OFFSET UNITYSDK_OFFSET(0x19721500)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatisticsInfo___c_TypeDefinitionIndex = 61213;

	class FateStatisticsInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FateStatisticsInfo___c** StaticGet___9()
		{
			return (::RPG::Client::FateStatisticsInfo___c**)Il2CppClass::FromTypeDefinitionIndex(FateStatisticsInfo___c_TypeDefinitionIndex)->GetStaticField(0xD340);
		}
		static ::System::Func_1<::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FateStatisticsInfo___c_TypeDefinitionIndex)->GetStaticField(0xD348);
		}
		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_4D052AB586FDB247_1*>>** StaticGet___9__4_2()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::Class_1_4D052AB586FDB247_1*>>**)Il2CppClass::FromTypeDefinitionIndex(FateStatisticsInfo___c_TypeDefinitionIndex)->GetStaticField(0xD350);
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
