#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2BB5A4A452E9A1B4.h"

namespace MoleMole { class UIBabeltowerTrickScoreRowWidgetController; }
namespace System { class String; }

#define CLASS_3_B0491C180D29B3FA_METHOD_3_2E0868C39DA3BDF9_OFFSET UNITYSDK_OFFSET(0x1A7CA650)
#define CLASS_3_B0491C180D29B3FA_METHOD_3_DCE0A903A9E7E199_OFFSET UNITYSDK_OFFSET(0x1A7CA6C0)
#define CLASS_3_B0491C180D29B3FA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7CA620)

inline static constexpr unsigned int Class_3_B0491C180D29B3FA_TypeDefinitionIndex = 73187;

class Class_3_B0491C180D29B3FA : public ::Class_2_2BB5A4A452E9A1B4<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>
{
public:
	::System::String* Field_3_7; // 0x28
	::System::Single Field_3_0; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B0491C180D29B3FA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_2E0868C39DA3BDF9(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_B0491C180D29B3FA_METHOD_3_2E0868C39DA3BDF9_OFFSET))(this, a1);
	}

	::System::Void Method_3_DCE0A903A9E7E199(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_B0491C180D29B3FA_METHOD_3_DCE0A903A9E7E199_OFFSET))(this, a1);
	}
};
