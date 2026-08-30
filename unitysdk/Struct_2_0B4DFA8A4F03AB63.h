#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_0B4DFA8A4F03AB63_METHOD_2_1E6C28E6DF871DF8_OFFSET UNITYSDK_OFFSET(0x18FE2DC0)
#define STRUCT_2_0B4DFA8A4F03AB63_METHOD_2_8A716370F939485F_OFFSET UNITYSDK_OFFSET(0x18FE2A30)

inline static constexpr unsigned int Struct_2_0B4DFA8A4F03AB63_TypeDefinitionIndex = 57914;

struct alignas(4) Struct_2_0B4DFA8A4F03AB63
{
	::System::Int32 HPAIEAJFLED; // 0x10
	::System::Int32 FIDKNPMCIMM; // 0x14
	::System::Int32 OLHNLHLOEGP; // 0x18
	::System::Int32 OKAMFFLDCKC; // 0x1C

	static ::System::Void Method_2_8A716370F939485F(::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_0B4DFA8A4F03AB63>* a2)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_0B4DFA8A4F03AB63>*))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DFA8A4F03AB63_METHOD_2_8A716370F939485F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_1E6C28E6DF871DF8(::Class_1_AC66714FF5876767* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_0B4DFA8A4F03AB63>* a2)
	{
		return ((::System::Void(*)(::Class_1_AC66714FF5876767*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_0B4DFA8A4F03AB63>*))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DFA8A4F03AB63_METHOD_2_1E6C28E6DF871DF8_OFFSET))(a1, a2);
	}
};
