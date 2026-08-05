#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_4073BCAB7FBABFEE_METHOD_2_4F04DC1F998B4F77_OFFSET UNITYSDK_OFFSET(0x11175500)
#define CLASS_2_4073BCAB7FBABFEE_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x11175690)
#define CLASS_2_4073BCAB7FBABFEE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11175780)
#define CLASS_2_4073BCAB7FBABFEE__CTOR_OFFSET UNITYSDK_OFFSET(0x11175770)

inline static constexpr unsigned int Class_2_4073BCAB7FBABFEE_TypeDefinitionIndex = 88915;

class Class_2_4073BCAB7FBABFEE : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x20
	::UnityEngine::UI::Text* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4073BCAB7FBABFEE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4F04DC1F998B4F77(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4073BCAB7FBABFEE_METHOD_2_4F04DC1F998B4F77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4073BCAB7FBABFEE_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4073BCAB7FBABFEE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
