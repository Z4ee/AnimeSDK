#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4497C502C5DEB38E_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x155F65E0)
#define CLASS_2_4497C502C5DEB38E_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x155F6780)
#define CLASS_2_4497C502C5DEB38E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x155F6870)
#define CLASS_2_4497C502C5DEB38E__CTOR_OFFSET UNITYSDK_OFFSET(0x155F6860)

inline static constexpr unsigned int Class_2_4497C502C5DEB38E_TypeDefinitionIndex = 58508;

class Class_2_4497C502C5DEB38E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_5; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x20
	::UnityEngine::Transform* Field_2_7; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4497C502C5DEB38E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4497C502C5DEB38E_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4497C502C5DEB38E_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4497C502C5DEB38E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
