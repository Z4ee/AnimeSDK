#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A9613D9C64F0521C.h"

namespace MoleMole { class UIBabeltowerTrickScoreRowWidgetController; }
namespace System { class String; }

#define CLASS_3_B0491C180D29B3FA_METHOD_3_541F33404EB25A67_OFFSET UNITYSDK_OFFSET(0xDB1F1C0)
#define CLASS_3_B0491C180D29B3FA_METHOD_3_DCE0A903A9E7E199_OFFSET UNITYSDK_OFFSET(0xDB1F230)
#define CLASS_3_B0491C180D29B3FA__CTOR_OFFSET UNITYSDK_OFFSET(0xDB1F190)

inline static constexpr unsigned int Class_3_B0491C180D29B3FA_TypeDefinitionIndex = 81891;

class Class_3_B0491C180D29B3FA : public ::Class_2_A9613D9C64F0521C<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>
{
public:
	::System::String* Field_3_1; // 0x28
	::System::Single Field_3_0; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B0491C180D29B3FA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_541F33404EB25A67(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_B0491C180D29B3FA_METHOD_3_541F33404EB25A67_OFFSET))(this, a1);
	}

	::System::Void Method_3_DCE0A903A9E7E199(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_B0491C180D29B3FA_METHOD_3_DCE0A903A9E7E199_OFFSET))(this, a1);
	}
};
