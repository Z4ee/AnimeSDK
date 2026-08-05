#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_AFAF57AA27518C5A_METHOD_2_01414A99793B5CD1_OFFSET UNITYSDK_OFFSET(0x13E74AA0)
#define CLASS_2_AFAF57AA27518C5A_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x13E74C80)
#define CLASS_2_AFAF57AA27518C5A_METHOD_2_406753C81EE451FC_OFFSET UNITYSDK_OFFSET(0x13E748B0)
#define CLASS_2_AFAF57AA27518C5A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13E74D10)
#define CLASS_2_AFAF57AA27518C5A__CTOR_OFFSET UNITYSDK_OFFSET(0x13E74D00)

inline static constexpr unsigned int Class_2_AFAF57AA27518C5A_TypeDefinitionIndex = 69093;

class Class_2_AFAF57AA27518C5A : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x28
	::UnityEngine::Transform* Field_2_9; // 0x30
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_7; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x40
	::UnityEngine::Transform* Field_2_0; // 0x48
	::UnityEngine::Animation* Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFAF57AA27518C5A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_406753C81EE451FC(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AFAF57AA27518C5A_METHOD_2_406753C81EE451FC_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Method_2_01414A99793B5CD1(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AFAF57AA27518C5A_METHOD_2_01414A99793B5CD1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AFAF57AA27518C5A_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AFAF57AA27518C5A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
