#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_3C79416A83F6226B_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x11313C10)
#define CLASS_2_3C79416A83F6226B_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x11313DB0)
#define CLASS_2_3C79416A83F6226B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11313EA0)
#define CLASS_2_3C79416A83F6226B__CTOR_OFFSET UNITYSDK_OFFSET(0x11313E90)

inline static constexpr unsigned int Class_2_3C79416A83F6226B_TypeDefinitionIndex = 54885;

class Class_2_3C79416A83F6226B : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadCustomList* Field_2_6; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x28
	::MonoUITableScrollV2* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C79416A83F6226B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3C79416A83F6226B_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C79416A83F6226B_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3C79416A83F6226B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
