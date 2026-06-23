#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_6649B9A2EDB08512_METHOD_2_912644B05A6936B3_OFFSET UNITYSDK_OFFSET(0x12DFF2A0)
#define CLASS_2_6649B9A2EDB08512_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12DFF400)
#define CLASS_2_6649B9A2EDB08512_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x12DFF200)
#define CLASS_2_6649B9A2EDB08512__CTOR_OFFSET UNITYSDK_OFFSET(0x12DFF3F0)

inline static constexpr unsigned int Class_2_6649B9A2EDB08512_TypeDefinitionIndex = 75766;

class Class_2_6649B9A2EDB08512 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6649B9A2EDB08512__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6649B9A2EDB08512_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6649B9A2EDB08512_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Method_2_912644B05A6936B3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6649B9A2EDB08512_METHOD_2_912644B05A6936B3_OFFSET))(this, a1, a2);
	}
};
