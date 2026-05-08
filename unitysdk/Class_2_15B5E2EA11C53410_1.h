#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_15B5E2EA11C53410_1_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x128AAE80)
#define CLASS_2_15B5E2EA11C53410_1_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x128AACF0)
#define CLASS_2_15B5E2EA11C53410_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x128AAF70)
#define CLASS_2_15B5E2EA11C53410_1__CTOR_OFFSET UNITYSDK_OFFSET(0x128AAF60)

inline static constexpr unsigned int Class_2_15B5E2EA11C53410_1_TypeDefinitionIndex = 71213;

class Class_2_15B5E2EA11C53410_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::MonoUITableScrollV2* Field_2_0; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15B5E2EA11C53410_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_15B5E2EA11C53410_1_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_15B5E2EA11C53410_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_15B5E2EA11C53410_1_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
