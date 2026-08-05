#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C856E655551E512E.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseScenePageController; }

#define CLASS_1_5BFBA851AB881BEA_METHOD_1_A8A1AAF650A5C1D1_OFFSET UNITYSDK_OFFSET(0x1667A690)
#define CLASS_1_5BFBA851AB881BEA_METHOD_1_AA99F82AB6A7BC4E_OFFSET UNITYSDK_OFFSET(0x1667A290)
#define CLASS_1_5BFBA851AB881BEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1667A280)

inline static constexpr unsigned int Class_1_5BFBA851AB881BEA_TypeDefinitionIndex = 57416;

class Class_1_5BFBA851AB881BEA : public ::System::Object
{
public:
	::MoleMole::UIBaseScenePageController* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::UIBaseScenePageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseScenePageController*))((::PBYTE)hIl2Cpp + CLASS_1_5BFBA851AB881BEA__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AA99F82AB6A7BC4E(::MoleMole::InputActionEvent a1, ::Enum_3_C856E655551E512E a2, ::MoleMole::InputLogicEventType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent, ::Enum_3_C856E655551E512E, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + CLASS_1_5BFBA851AB881BEA_METHOD_1_AA99F82AB6A7BC4E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_A8A1AAF650A5C1D1(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5BFBA851AB881BEA_METHOD_1_A8A1AAF650A5C1D1_OFFSET))(this, a1);
	}
};
