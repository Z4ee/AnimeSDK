#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }

#define CLASS_2_E9ABE5073CEACE88_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x11226670)
#define CLASS_2_E9ABE5073CEACE88_1_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x11226520)
#define CLASS_2_E9ABE5073CEACE88_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11226700)
#define CLASS_2_E9ABE5073CEACE88_1__CTOR_OFFSET UNITYSDK_OFFSET(0x112266F0)

inline static constexpr unsigned int Class_2_E9ABE5073CEACE88_1_TypeDefinitionIndex = 76676;

class Class_2_E9ABE5073CEACE88_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9ABE5073CEACE88_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E9ABE5073CEACE88_1_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E9ABE5073CEACE88_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9ABE5073CEACE88_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
