#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_49CAB3DE74280C58;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8B75D4724D02BBEC___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8CED3E0)
#define CLASS_1_8B75D4724D02BBEC___C__DISPLAYCLASS5_0___EVALUATEARESELECTIONSEQUAL_B__0_OFFSET UNITYSDK_OFFSET(0x8CED3F0)

inline static constexpr unsigned int Class_1_8B75D4724D02BBEC___c__DisplayClass5_0_TypeDefinitionIndex = 63117;

class Class_1_8B75D4724D02BBEC___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* selection; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B75D4724D02BBEC___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __EvaluateAreSelectionsEqual_b__0(::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>* s)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_2_49CAB3DE74280C58*>*))((::PBYTE)hIl2Cpp + CLASS_1_8B75D4724D02BBEC___C__DISPLAYCLASS5_0___EVALUATEARESELECTIONSEQUAL_B__0_OFFSET))(this, s);
	}
};
