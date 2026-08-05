#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C96DD177C1F2A967.h"
#include "unitysdk/System/Object.h"

class Class_1_84A668B8DE4853ED;
namespace MoleMole { class UIZenkovTaskRowWidgetController; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DF44937F6A83714C__CTOR_OFFSET UNITYSDK_OFFSET(0x18169EC0)

inline static constexpr unsigned int Class_1_DF44937F6A83714C_TypeDefinitionIndex = 70740;

class Class_1_DF44937F6A83714C : public ::System::Object
{
public:
	::System::Action_2<::Class_1_84A668B8DE4853ED*, ::MoleMole::UIZenkovTaskRowWidgetController*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_84A668B8DE4853ED*>* Field_1_1; // 0x18
	::System::Boolean Field_1_7; // 0x20
	::Enum_3_C96DD177C1F2A967 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF44937F6A83714C__CTOR_OFFSET))(this);
	}
};
