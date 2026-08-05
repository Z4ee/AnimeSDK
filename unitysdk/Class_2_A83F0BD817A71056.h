#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_CA67A9CEB871FFD3;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_A83F0BD817A71056_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1A7DBE70)
#define CLASS_2_A83F0BD817A71056_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1A7DBF70)
#define CLASS_2_A83F0BD817A71056_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x1A7DBC00)
#define CLASS_2_A83F0BD817A71056__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7DBF60)

inline static constexpr unsigned int Class_2_A83F0BD817A71056_TypeDefinitionIndex = 68056;

class Class_2_A83F0BD817A71056 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_2; // 0x18
	::UnityEngine::GameObject* Field_2_3; // 0x20
	::Class_2_CA67A9CEB871FFD3* Field_2_7; // 0x28
	::UnityEngine::GameObject* Field_2_11; // 0x30
	::UnityEngine::CanvasGroup* Field_2_6; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x40
	::Class_2_FDFE69FE7B72463B* Field_2_5; // 0x48
	::Class_2_CA67A9CEB871FFD3* Field_2_0; // 0x50
	::Class_2_CA67A9CEB871FFD3* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A83F0BD817A71056__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A83F0BD817A71056_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A83F0BD817A71056_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A83F0BD817A71056_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
