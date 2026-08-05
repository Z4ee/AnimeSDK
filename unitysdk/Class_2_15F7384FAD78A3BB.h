#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_15F7384FAD78A3BB_METHOD_2_01414A99793B5CD1_OFFSET UNITYSDK_OFFSET(0x14DC9560)
#define CLASS_2_15F7384FAD78A3BB_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x14DC9360)
#define CLASS_2_15F7384FAD78A3BB_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x14DC9740)
#define CLASS_2_15F7384FAD78A3BB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14DC9880)
#define CLASS_2_15F7384FAD78A3BB__CTOR_OFFSET UNITYSDK_OFFSET(0x14DC9870)

inline static constexpr unsigned int Class_2_15F7384FAD78A3BB_TypeDefinitionIndex = 55053;

class Class_2_15F7384FAD78A3BB : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x38
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15F7384FAD78A3BB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_15F7384FAD78A3BB_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15F7384FAD78A3BB_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Method_2_01414A99793B5CD1(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_15F7384FAD78A3BB_METHOD_2_01414A99793B5CD1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_15F7384FAD78A3BB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
