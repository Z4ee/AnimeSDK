#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5371BA3F9FFFF823___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x154A8300)
#define CLASS_1_5371BA3F9FFFF823___C__DISPLAYCLASS5_0___EVALUATEARESELECTIONSEQUAL_B__0_OFFSET UNITYSDK_OFFSET(0x154A8310)

inline static constexpr unsigned int Class_1_5371BA3F9FFFF823___c__DisplayClass5_0_TypeDefinitionIndex = 77105;

class Class_1_5371BA3F9FFFF823___c__DisplayClass5_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* selection; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5371BA3F9FFFF823___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __EvaluateAreSelectionsEqual_b__0(::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*))((::PBYTE)hIl2Cpp + CLASS_1_5371BA3F9FFFF823___C__DISPLAYCLASS5_0___EVALUATEARESELECTIONSEQUAL_B__0_OFFSET))(this, a1);
	}
};
