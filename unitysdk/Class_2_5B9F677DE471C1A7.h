#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5B9F677DE471C1A7_METHOD_2_AB195FC75502CC36_OFFSET UNITYSDK_OFFSET(0x12E9D730)
#define CLASS_2_5B9F677DE471C1A7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12E9D890)
#define CLASS_2_5B9F677DE471C1A7_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x12E9D690)
#define CLASS_2_5B9F677DE471C1A7__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9D880)

inline static constexpr unsigned int Class_2_5B9F677DE471C1A7_TypeDefinitionIndex = 45586;

class Class_2_5B9F677DE471C1A7 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B9F677DE471C1A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5B9F677DE471C1A7_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_AB195FC75502CC36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5B9F677DE471C1A7_METHOD_2_AB195FC75502CC36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5B9F677DE471C1A7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
