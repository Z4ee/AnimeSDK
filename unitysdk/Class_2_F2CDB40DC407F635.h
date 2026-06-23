#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F2CDB40DC407F635_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x15081C00)
#define CLASS_2_F2CDB40DC407F635_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x15081DF0)
#define CLASS_2_F2CDB40DC407F635_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15081EE0)
#define CLASS_2_F2CDB40DC407F635__CTOR_OFFSET UNITYSDK_OFFSET(0x15081ED0)

inline static constexpr unsigned int Class_2_F2CDB40DC407F635_TypeDefinitionIndex = 73328;

class Class_2_F2CDB40DC407F635 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::UnityEngine::RectTransform* Field_2_6; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38
	::UnityEngine::RectTransform* Field_2_5; // 0x40
	::UnityEngine::Transform* Field_2_1; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2CDB40DC407F635__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2CDB40DC407F635_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2CDB40DC407F635_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2CDB40DC407F635_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
