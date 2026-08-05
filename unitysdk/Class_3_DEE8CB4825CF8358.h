#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2BB5A4A452E9A1B4.h"
#include "unitysdk/Enum_3_B511486FFFFCE718.h"

namespace MoleMole { class UIBabeltowerTrickScoreRowWidgetController; }
namespace System { class String; }

#define CLASS_3_DEE8CB4825CF8358_METHOD_3_2FF741F05D237A76_OFFSET UNITYSDK_OFFSET(0x14240940)
#define CLASS_3_DEE8CB4825CF8358_METHOD_3_7602DC28ED1228BF_OFFSET UNITYSDK_OFFSET(0x14240730)
#define CLASS_3_DEE8CB4825CF8358_METHOD_3_DCE0A903A9E7E199_OFFSET UNITYSDK_OFFSET(0x14240A00)
#define CLASS_3_DEE8CB4825CF8358__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14240700)
#define CLASS_3_DEE8CB4825CF8358__CTOR_OFFSET UNITYSDK_OFFSET(0x142406C0)

inline static constexpr unsigned int Class_3_DEE8CB4825CF8358_TypeDefinitionIndex = 55169;

class Class_3_DEE8CB4825CF8358 : public ::Class_2_2BB5A4A452E9A1B4<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>
{
public:
	::System::Single Field_3_2; // 0x28
	::System::Boolean Field_3_1; // 0x2C
	::System::Boolean Field_3_0; // 0x2D
	::Enum_3_B511486FFFFCE718 Field_3_3; // 0x30

	::System::Void _ctor(::System::String* a1, ::Enum_3_B511486FFFFCE718 a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_B511486FFFFCE718, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DEE8CB4825CF8358__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DEE8CB4825CF8358__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7602DC28ED1228BF(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_DEE8CB4825CF8358_METHOD_3_7602DC28ED1228BF_OFFSET))(this, a1);
	}

	static ::Class_3_DEE8CB4825CF8358* Method_3_2FF741F05D237A76(::Enum_3_B511486FFFFCE718 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::Class_3_DEE8CB4825CF8358*(*)(::Enum_3_B511486FFFFCE718, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DEE8CB4825CF8358_METHOD_3_2FF741F05D237A76_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_DCE0A903A9E7E199(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_DEE8CB4825CF8358_METHOD_3_DCE0A903A9E7E199_OFFSET))(this, a1);
	}
};
