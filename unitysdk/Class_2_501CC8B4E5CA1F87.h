#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_501CC8B4E5CA1F87_METHOD_2_912644B05A6936B3_OFFSET UNITYSDK_OFFSET(0x12883090)
#define CLASS_2_501CC8B4E5CA1F87_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x128831E0)
#define CLASS_2_501CC8B4E5CA1F87_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x12882E70)
#define CLASS_2_501CC8B4E5CA1F87_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12883290)
#define CLASS_2_501CC8B4E5CA1F87__CTOR_OFFSET UNITYSDK_OFFSET(0x12883280)

inline static constexpr unsigned int Class_2_501CC8B4E5CA1F87_TypeDefinitionIndex = 51802;

class Class_2_501CC8B4E5CA1F87 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_7; // 0x18
	::UnityEngine::GameObject* Field_2_0; // 0x20
	::UnityEngine::GameObject* Field_2_6; // 0x28
	::UnityEngine::GameObject* Field_2_3; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x38
	::MoleMole::MonoGamepadSelectable* Field_2_5; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x48
	::UnityEngine::GameObject* Field_2_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501CC8B4E5CA1F87__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_501CC8B4E5CA1F87_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_501CC8B4E5CA1F87_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501CC8B4E5CA1F87_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Method_2_912644B05A6936B3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_501CC8B4E5CA1F87_METHOD_2_912644B05A6936B3_OFFSET))(this, a1, a2);
	}
};
