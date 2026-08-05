#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_1F0C3293D9525543_METHOD_2_01414A99793B5CD1_OFFSET UNITYSDK_OFFSET(0x14BA1060)
#define CLASS_2_1F0C3293D9525543_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x14BA1240)
#define CLASS_2_1F0C3293D9525543_METHOD_2_4C9CB642EC86F4C4_OFFSET UNITYSDK_OFFSET(0x14BA0F10)
#define CLASS_2_1F0C3293D9525543_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x14BA0CC0)
#define CLASS_2_1F0C3293D9525543_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14BA1360)
#define CLASS_2_1F0C3293D9525543__CTOR_OFFSET UNITYSDK_OFFSET(0x14BA1350)

inline static constexpr unsigned int Class_2_1F0C3293D9525543_TypeDefinitionIndex = 68300;

class Class_2_1F0C3293D9525543 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_7; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_2; // 0x38
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_11; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0C3293D9525543__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F0C3293D9525543_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Method_2_01414A99793B5CD1(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F0C3293D9525543_METHOD_2_01414A99793B5CD1_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Method_2_4C9CB642EC86F4C4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F0C3293D9525543_METHOD_2_4C9CB642EC86F4C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F0C3293D9525543_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F0C3293D9525543_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
