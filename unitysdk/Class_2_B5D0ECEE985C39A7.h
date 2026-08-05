#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_B5D0ECEE985C39A7_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x13CD51A0)
#define CLASS_2_B5D0ECEE985C39A7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13CD5270)
#define CLASS_2_B5D0ECEE985C39A7_METHOD_2_F485ED5438CB5FFD_OFFSET UNITYSDK_OFFSET(0x13CD5050)
#define CLASS_2_B5D0ECEE985C39A7__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD5260)

inline static constexpr unsigned int Class_2_B5D0ECEE985C39A7_TypeDefinitionIndex = 55685;

class Class_2_B5D0ECEE985C39A7 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_7; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5D0ECEE985C39A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F485ED5438CB5FFD(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B5D0ECEE985C39A7_METHOD_2_F485ED5438CB5FFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5D0ECEE985C39A7_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B5D0ECEE985C39A7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
