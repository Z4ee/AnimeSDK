#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7C2D4BBA2A4A8499.h"

namespace MoleMole { class UIMainCityInteractButtonChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_0B067CF04045EAA5_METHOD_2_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x13D69FB0)
#define CLASS_2_0B067CF04045EAA5__CTOR_OFFSET UNITYSDK_OFFSET(0x13D69FA0)

inline static constexpr unsigned int Class_2_0B067CF04045EAA5_TypeDefinitionIndex = 82980;

class Class_2_0B067CF04045EAA5 : public ::Class_1_7C2D4BBA2A4A8499
{
public:
	::MoleMole::UIWindowController* Field_2_0; // 0x10
	::MoleMole::UIMainCityInteractButtonChildWindowController* Field_2_1; // 0x18
	::Class_1_7C2D4BBA2A4A8499* Field_2_2; // 0x20

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::MoleMole::UIMainCityInteractButtonChildWindowController* a2, ::Class_1_7C2D4BBA2A4A8499* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::MoleMole::UIMainCityInteractButtonChildWindowController*, ::Class_1_7C2D4BBA2A4A8499*))((::PBYTE)hIl2Cpp + CLASS_2_0B067CF04045EAA5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0B067CF04045EAA5_METHOD_2_3845AD389B8E1E47_OFFSET))(this);
	}
};
