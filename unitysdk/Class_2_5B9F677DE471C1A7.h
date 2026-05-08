#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5B9F677DE471C1A7_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x109213B0)
#define CLASS_2_5B9F677DE471C1A7_METHOD_2_AB195FC75502CC36_OFFSET UNITYSDK_OFFSET(0x10921260)
#define CLASS_2_5B9F677DE471C1A7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10921460)
#define CLASS_2_5B9F677DE471C1A7_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x10921090)
#define CLASS_2_5B9F677DE471C1A7__CTOR_OFFSET UNITYSDK_OFFSET(0x10921450)

inline static constexpr unsigned int Class_2_5B9F677DE471C1A7_TypeDefinitionIndex = 75483;

class Class_2_5B9F677DE471C1A7 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_3; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_0; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B9F677DE471C1A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5B9F677DE471C1A7_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5B9F677DE471C1A7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B9F677DE471C1A7_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_AB195FC75502CC36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5B9F677DE471C1A7_METHOD_2_AB195FC75502CC36_OFFSET))(this, a1, a2);
	}
};
