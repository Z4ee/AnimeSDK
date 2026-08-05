#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_1F0C3293D9525543_1_METHOD_2_01414A99793B5CD1_OFFSET UNITYSDK_OFFSET(0xE96F390)
#define CLASS_2_1F0C3293D9525543_1_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xE96F570)
#define CLASS_2_1F0C3293D9525543_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xE96F620)
#define CLASS_2_1F0C3293D9525543_1_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0xE96F1F0)
#define CLASS_2_1F0C3293D9525543_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE96F610)

inline static constexpr unsigned int Class_2_1F0C3293D9525543_1_TypeDefinitionIndex = 62261;

class Class_2_1F0C3293D9525543_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_6; // 0x28
	::UnityEngine::RectTransform* Field_2_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0C3293D9525543_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F0C3293D9525543_1_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Method_2_01414A99793B5CD1(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F0C3293D9525543_1_METHOD_2_01414A99793B5CD1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0C3293D9525543_1_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F0C3293D9525543_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
