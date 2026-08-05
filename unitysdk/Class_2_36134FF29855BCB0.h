#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }

#define CLASS_2_36134FF29855BCB0_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x14B64F80)
#define CLASS_2_36134FF29855BCB0_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x14B65120)
#define CLASS_2_36134FF29855BCB0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14B65210)
#define CLASS_2_36134FF29855BCB0__CTOR_OFFSET UNITYSDK_OFFSET(0x14B65200)

inline static constexpr unsigned int Class_2_36134FF29855BCB0_TypeDefinitionIndex = 48275;

class Class_2_36134FF29855BCB0 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x28
	::MonoUITableScrollV2* Field_2_3; // 0x30
	::UnityEngine::CanvasGroup* Field_2_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36134FF29855BCB0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_36134FF29855BCB0_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36134FF29855BCB0_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_36134FF29855BCB0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
