#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define NPCCROWD_NPCPERFORMANCESCORETABLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE9578E0)
#define NPCCROWD_NPCPERFORMANCESCORETABLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE957920)
#define NPCCROWD_NPCPERFORMANCESCORETABLE___C__SERIALIZE_B__9_0_OFFSET UNITYSDK_OFFSET(0xE957930)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPerformanceScoreTable___c_TypeDefinitionIndex = 84262;

	class NPCPerformanceScoreTable___c : public ::System::Object
	{
	public:
		static ::NPCCrowd::NPCPerformanceScoreTable___c** StaticGet___9()
		{
			return (::NPCCrowd::NPCPerformanceScoreTable___c**)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceScoreTable___c_TypeDefinitionIndex)->GetStaticField(0x3AE20);
		}
		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(NPCPerformanceScoreTable___c_TypeDefinitionIndex)->GetStaticField(0x3AE28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCESCORETABLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCESCORETABLE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Serialize_b__9_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single> a, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single> b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>))((::PBYTE)hIl2Cpp + NPCCROWD_NPCPERFORMANCESCORETABLE___C__SERIALIZE_B__9_0_OFFSET))(this, a, b);
		}
	};
}
