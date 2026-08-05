#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_53FDDB62C05D7434_1_METHOD_2_5DE301B3C0032BA5_OFFSET UNITYSDK_OFFSET(0x12119E90)
#define CLASS_2_53FDDB62C05D7434_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12119F80)
#define CLASS_2_53FDDB62C05D7434_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12119F70)

inline static constexpr unsigned int Class_2_53FDDB62C05D7434_1_TypeDefinitionIndex = 87681;

class Class_2_53FDDB62C05D7434_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53FDDB62C05D7434_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5DE301B3C0032BA5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_53FDDB62C05D7434_1_METHOD_2_5DE301B3C0032BA5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_53FDDB62C05D7434_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
