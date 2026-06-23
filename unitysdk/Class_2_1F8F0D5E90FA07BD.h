#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_1F8F0D5E90FA07BD_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x13AC4890)
#define CLASS_2_1F8F0D5E90FA07BD_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0x13AC4650)
#define CLASS_2_1F8F0D5E90FA07BD_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13AC4990)
#define CLASS_2_1F8F0D5E90FA07BD__CTOR_OFFSET UNITYSDK_OFFSET(0x13AC4980)

inline static constexpr unsigned int Class_2_1F8F0D5E90FA07BD_TypeDefinitionIndex = 80937;

class Class_2_1F8F0D5E90FA07BD : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_6; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40
	::UnityEngine::Transform* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F8F0D5E90FA07BD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F8F0D5E90FA07BD_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F8F0D5E90FA07BD_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F8F0D5E90FA07BD_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
