#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_765B57E84518AFBD_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xFEDF6F0)
#define CLASS_2_765B57E84518AFBD_METHOD_2_406753C81EE451FC_OFFSET UNITYSDK_OFFSET(0xFEDF320)
#define CLASS_2_765B57E84518AFBD_METHOD_2_C4115FB25AD4513C_OFFSET UNITYSDK_OFFSET(0xFEDF510)
#define CLASS_2_765B57E84518AFBD_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFEDF780)
#define CLASS_2_765B57E84518AFBD__CTOR_OFFSET UNITYSDK_OFFSET(0xFEDF770)

inline static constexpr unsigned int Class_2_765B57E84518AFBD_TypeDefinitionIndex = 51337;

class Class_2_765B57E84518AFBD : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::UnityEngine::Animation* Field_2_3; // 0x28
	::UnityEngine::Transform* Field_2_7; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x38
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_1; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_765B57E84518AFBD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_406753C81EE451FC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_765B57E84518AFBD_METHOD_2_406753C81EE451FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_765B57E84518AFBD_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Method_2_C4115FB25AD4513C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_765B57E84518AFBD_METHOD_2_C4115FB25AD4513C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_765B57E84518AFBD_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
