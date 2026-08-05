#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralScrollViewTestWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_DFA182DCA701DFC4_METHOD_2_01414A99793B5CD1_OFFSET UNITYSDK_OFFSET(0x12764B60)
#define CLASS_2_DFA182DCA701DFC4_METHOD_2_13C86289EBC799A4_OFFSET UNITYSDK_OFFSET(0x12764D40)
#define CLASS_2_DFA182DCA701DFC4_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x12764F20)
#define CLASS_2_DFA182DCA701DFC4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12764FB0)
#define CLASS_2_DFA182DCA701DFC4_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x127649C0)
#define CLASS_2_DFA182DCA701DFC4__CTOR_OFFSET UNITYSDK_OFFSET(0x12764FA0)

inline static constexpr unsigned int Class_2_DFA182DCA701DFC4_TypeDefinitionIndex = 65191;

class Class_2_DFA182DCA701DFC4 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIGeneralScrollViewTestWidgetController*>*>* Field_2_7; // 0x18
	::UnityEngine::GameObject* Field_2_6; // 0x20
	::System::Collections::Generic::List_1<::Class_2_B4378B46E0020E85*>* Field_2_0; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFA182DCA701DFC4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DFA182DCA701DFC4_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_B4378B46E0020E85*>* Method_2_01414A99793B5CD1(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_B4378B46E0020E85*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DFA182DCA701DFC4_METHOD_2_01414A99793B5CD1_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIGeneralScrollViewTestWidgetController*>*>* Method_2_13C86289EBC799A4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIGeneralScrollViewTestWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DFA182DCA701DFC4_METHOD_2_13C86289EBC799A4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DFA182DCA701DFC4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFA182DCA701DFC4_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
