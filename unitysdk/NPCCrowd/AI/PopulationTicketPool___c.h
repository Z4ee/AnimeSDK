#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { template <typename T> class Comparison_1; }

#define NPCCROWD_AI_POPULATIONTICKETPOOL___C__BUILDNONWHITEROUNDORDER_B__14_0_OFFSET UNITYSDK_OFFSET(0xD87FBE0)
#define NPCCROWD_AI_POPULATIONTICKETPOOL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD87FB90)
#define NPCCROWD_AI_POPULATIONTICKETPOOL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD87FBD0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PopulationTicketPool___c_TypeDefinitionIndex = 72071;

	class PopulationTicketPool___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Single>>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::System::Int32, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(PopulationTicketPool___c_TypeDefinitionIndex)->GetStaticField(0x4C7A0);
		}
		static ::NPCCrowd::AI::PopulationTicketPool___c** StaticGet___9()
		{
			return (::NPCCrowd::AI::PopulationTicketPool___c**)Il2CppClass::FromTypeDefinitionIndex(PopulationTicketPool___c_TypeDefinitionIndex)->GetStaticField(0x4C7A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildNonWhiteRoundOrder_b__14_0(::System::ValueTuple_2<::System::Int32, ::System::Single> a, ::System::ValueTuple_2<::System::Int32, ::System::Single> b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Single>, ::System::ValueTuple_2<::System::Int32, ::System::Single>))((::PBYTE)hIl2Cpp + NPCCROWD_AI_POPULATIONTICKETPOOL___C__BUILDNONWHITEROUNDORDER_B__14_0_OFFSET))(this, a, b);
		}
	};
}
