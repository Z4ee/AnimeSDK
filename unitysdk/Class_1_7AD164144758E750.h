#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseScenePageController; }

#define CLASS_1_7AD164144758E750_METHOD_1_A8A1AAF650A5C1D1_OFFSET UNITYSDK_OFFSET(0x15914D50)
#define CLASS_1_7AD164144758E750__CTOR_OFFSET UNITYSDK_OFFSET(0x15914D40)

inline static constexpr unsigned int Class_1_7AD164144758E750_TypeDefinitionIndex = 80217;

class Class_1_7AD164144758E750 : public ::System::Object
{
public:
	::MoleMole::UIBaseScenePageController* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::UIBaseScenePageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseScenePageController*))((::PBYTE)hIl2Cpp + CLASS_1_7AD164144758E750__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A8A1AAF650A5C1D1(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7AD164144758E750_METHOD_1_A8A1AAF650A5C1D1_OFFSET))(this, a1);
	}
};
