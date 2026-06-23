#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UITapesConfig; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A0D395A24A28DAE3_METHOD_2_0E09E70D88F8EDD3_OFFSET UNITYSDK_OFFSET(0x12D895B0)
#define CLASS_2_A0D395A24A28DAE3_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x12D897E0)
#define CLASS_2_A0D395A24A28DAE3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12D898B0)
#define CLASS_2_A0D395A24A28DAE3__CTOR_OFFSET UNITYSDK_OFFSET(0x12D898A0)

inline static constexpr unsigned int Class_2_A0D395A24A28DAE3_TypeDefinitionIndex = 84232;

class Class_2_A0D395A24A28DAE3 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UITapesConfig* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_7; // 0x20
	::UnityEngine::Transform* Field_2_6; // 0x28
	::UnityEngine::Transform* Field_2_10; // 0x30
	::UnityEngine::GameObject* Field_2_1; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x40
	::UnityEngine::Animation* Field_2_4; // 0x48
	::UnityEngine::Animation* Field_2_8; // 0x50
	::UnityEngine::Transform* Field_2_9; // 0x58
	::UnityEngine::Transform* Field_2_5; // 0x60
	::UnityEngine::Animation* Field_2_3; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0D395A24A28DAE3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E09E70D88F8EDD3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A0D395A24A28DAE3_METHOD_2_0E09E70D88F8EDD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0D395A24A28DAE3_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A0D395A24A28DAE3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
