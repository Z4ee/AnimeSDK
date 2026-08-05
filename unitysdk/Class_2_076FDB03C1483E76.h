#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHollowCardItemBtnWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_076FDB03C1483E76_METHOD_2_0D9FFD4CAF63C36E_OFFSET UNITYSDK_OFFSET(0x17504AF0)
#define CLASS_2_076FDB03C1483E76_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x17504CD0)
#define CLASS_2_076FDB03C1483E76_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x17504960)
#define CLASS_2_076FDB03C1483E76_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17504D60)
#define CLASS_2_076FDB03C1483E76__CTOR_OFFSET UNITYSDK_OFFSET(0x17504D50)

inline static constexpr unsigned int Class_2_076FDB03C1483E76_TypeDefinitionIndex = 60743;

class Class_2_076FDB03C1483E76 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x18
	::UnityEngine::GameObject* Field_2_0; // 0x20
	::UnityEngine::GameObject* Field_2_7; // 0x28
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIHollowCardItemBtnWidgetController*>*>* Field_2_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_076FDB03C1483E76__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_076FDB03C1483E76_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_076FDB03C1483E76_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIHollowCardItemBtnWidgetController*>*>* Method_2_0D9FFD4CAF63C36E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIHollowCardItemBtnWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_076FDB03C1483E76_METHOD_2_0D9FFD4CAF63C36E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_076FDB03C1483E76_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
