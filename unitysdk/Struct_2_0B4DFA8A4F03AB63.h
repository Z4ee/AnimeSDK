#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_0B4DFA8A4F03AB63_METHOD_2_1E6C28E6DF871DF8_OFFSET UNITYSDK_OFFSET(0xA445C70)
#define STRUCT_2_0B4DFA8A4F03AB63_METHOD_2_482A238D6CA636D9_OFFSET UNITYSDK_OFFSET(0xA445940)

inline static constexpr unsigned int Struct_2_0B4DFA8A4F03AB63_TypeDefinitionIndex = 53972;

struct alignas(4) Struct_2_0B4DFA8A4F03AB63
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C

	static ::System::Void Method_2_482A238D6CA636D9(::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_0B4DFA8A4F03AB63>* a2)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::AIDecisionUnitConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_0B4DFA8A4F03AB63>*))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DFA8A4F03AB63_METHOD_2_482A238D6CA636D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_1E6C28E6DF871DF8(::Class_1_AC66714FF5876767* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_0B4DFA8A4F03AB63>* a2)
	{
		return ((::System::Void(*)(::Class_1_AC66714FF5876767*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_0B4DFA8A4F03AB63>*))((::PBYTE)hIl2Cpp + STRUCT_2_0B4DFA8A4F03AB63_METHOD_2_1E6C28E6DF871DF8_OFFSET))(a1, a2);
	}
};
