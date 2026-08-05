#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_BCA11629035BC7F2_4_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x10D2C4C0)
#define CLASS_2_BCA11629035BC7F2_4_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x10D2C320)
#define CLASS_2_BCA11629035BC7F2_4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10D2C550)
#define CLASS_2_BCA11629035BC7F2_4__CTOR_OFFSET UNITYSDK_OFFSET(0x10D2C540)

inline static constexpr unsigned int Class_2_BCA11629035BC7F2_4_TypeDefinitionIndex = 52031;

class Class_2_BCA11629035BC7F2_4 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_6; // 0x18
	::UnityEngine::RectTransform* Field_2_4; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x28
	::UnityEngine::RectTransform* Field_2_5; // 0x30
	::UnityEngine::RectTransform* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCA11629035BC7F2_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BCA11629035BC7F2_4_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCA11629035BC7F2_4_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BCA11629035BC7F2_4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
