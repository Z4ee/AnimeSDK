#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }

#define CLASS_2_68A5E7EF823C92F4_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x1BC36A80)
#define CLASS_2_68A5E7EF823C92F4_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1BC36C10)
#define CLASS_2_68A5E7EF823C92F4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1BC36CC0)
#define CLASS_2_68A5E7EF823C92F4__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC36CB0)

inline static constexpr unsigned int Class_2_68A5E7EF823C92F4_TypeDefinitionIndex = 51884;

class Class_2_68A5E7EF823C92F4 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_0; // 0x18
	::UnityEngine::CanvasGroup* Field_2_5; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68A5E7EF823C92F4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_68A5E7EF823C92F4_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_68A5E7EF823C92F4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68A5E7EF823C92F4_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
