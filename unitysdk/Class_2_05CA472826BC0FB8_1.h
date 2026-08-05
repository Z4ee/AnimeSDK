#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_05CA472826BC0FB8_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x158E0080)
#define CLASS_2_05CA472826BC0FB8_1_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x158DFE10)
#define CLASS_2_05CA472826BC0FB8_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x158E0110)
#define CLASS_2_05CA472826BC0FB8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x158E0100)

inline static constexpr unsigned int Class_2_05CA472826BC0FB8_1_TypeDefinitionIndex = 62250;

class Class_2_05CA472826BC0FB8_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_15; // 0x18
	::UnityEngine::GameObject* Field_2_11; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_13; // 0x28
	::UnityEngine::GameObject* Field_2_10; // 0x30
	::UnityEngine::GameObject* Field_2_8; // 0x38
	::UnityEngine::GameObject* Field_2_4; // 0x40
	::UnityEngine::GameObject* Field_2_14; // 0x48
	::UnityEngine::GameObject* Field_2_9; // 0x50
	::UnityEngine::GameObject* Field_2_6; // 0x58
	::UnityEngine::GameObject* Field_2_1; // 0x60
	::UnityEngine::GameObject* Field_2_0; // 0x68
	::UnityEngine::GameObject* Field_2_12; // 0x70
	::UnityEngine::GameObject* Field_2_5; // 0x78
	::UnityEngine::GameObject* Field_2_7; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05CA472826BC0FB8_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_05CA472826BC0FB8_1_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_05CA472826BC0FB8_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05CA472826BC0FB8_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
