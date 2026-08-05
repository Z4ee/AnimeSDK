#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_E2347C49375EAD9E_METHOD_2_01414A99793B5CD1_OFFSET UNITYSDK_OFFSET(0x10688980)
#define CLASS_2_E2347C49375EAD9E_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x10688B60)
#define CLASS_2_E2347C49375EAD9E_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x10688750)
#define CLASS_2_E2347C49375EAD9E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10688C50)
#define CLASS_2_E2347C49375EAD9E__CTOR_OFFSET UNITYSDK_OFFSET(0x10688C40)

inline static constexpr unsigned int Class_2_E2347C49375EAD9E_TypeDefinitionIndex = 56121;

class Class_2_E2347C49375EAD9E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_4; // 0x18
	::UnityEngine::RectTransform* Field_2_6; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x28
	::UnityEngine::RectTransform* Field_2_10; // 0x30
	::UnityEngine::Animation* Field_2_7; // 0x38
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_5; // 0x40
	::UnityEngine::Animation* Field_2_8; // 0x48
	::MonoUITableScrollV2* Field_2_9; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2347C49375EAD9E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E2347C49375EAD9E_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E2347C49375EAD9E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2347C49375EAD9E_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Method_2_01414A99793B5CD1(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E2347C49375EAD9E_METHOD_2_01414A99793B5CD1_OFFSET))(this, a1, a2);
	}
};
