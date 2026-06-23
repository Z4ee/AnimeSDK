#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_7CD0CB2DB1477D73_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x11AD5360)
#define CLASS_2_7CD0CB2DB1477D73_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x11AD4F50)
#define CLASS_2_7CD0CB2DB1477D73_METHOD_2_C4115FB25AD4513C_OFFSET UNITYSDK_OFFSET(0x11AD5180)
#define CLASS_2_7CD0CB2DB1477D73_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11AD5450)
#define CLASS_2_7CD0CB2DB1477D73__CTOR_OFFSET UNITYSDK_OFFSET(0x11AD5440)

inline static constexpr unsigned int Class_2_7CD0CB2DB1477D73_TypeDefinitionIndex = 84753;

class Class_2_7CD0CB2DB1477D73 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_2; // 0x18
	::UnityEngine::Animation* Field_2_1; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x28
	::MonoUITableScrollV2* Field_2_7; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38
	::UnityEngine::RectTransform* Field_2_6; // 0x40
	::UnityEngine::Animation* Field_2_8; // 0x48
	::UnityEngine::RectTransform* Field_2_4; // 0x50
	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Field_2_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CD0CB2DB1477D73__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7CD0CB2DB1477D73_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7CD0CB2DB1477D73_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CD0CB2DB1477D73_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>* Method_2_C4115FB25AD4513C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_1A39E1B51756BF41*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7CD0CB2DB1477D73_METHOD_2_C4115FB25AD4513C_OFFSET))(this, a1, a2);
	}
};
