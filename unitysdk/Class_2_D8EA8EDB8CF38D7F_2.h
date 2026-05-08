#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D8EA8EDB8CF38D7F_2_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x10D9D9B0)
#define CLASS_2_D8EA8EDB8CF38D7F_2_METHOD_2_B04B0693FD45DBCD_OFFSET UNITYSDK_OFFSET(0x10D9D780)
#define CLASS_2_D8EA8EDB8CF38D7F_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10D9DAF0)
#define CLASS_2_D8EA8EDB8CF38D7F_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10D9DAE0)

inline static constexpr unsigned int Class_2_D8EA8EDB8CF38D7F_2_TypeDefinitionIndex = 74648;

class Class_2_D8EA8EDB8CF38D7F_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_9; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x38
	::UnityEngine::Transform* Field_2_5; // 0x40
	::UnityEngine::RectTransform* Field_2_8; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x50
	::UnityEngine::RectTransform* Field_2_7; // 0x58
	::UnityEngine::RectTransform* Field_2_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EA8EDB8CF38D7F_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B04B0693FD45DBCD(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D8EA8EDB8CF38D7F_2_METHOD_2_B04B0693FD45DBCD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8EA8EDB8CF38D7F_2_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D8EA8EDB8CF38D7F_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
