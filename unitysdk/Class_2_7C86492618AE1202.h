#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7C86492618AE1202_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xB4F78D0)
#define CLASS_2_7C86492618AE1202_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB4F79A0)
#define CLASS_2_7C86492618AE1202_METHOD_2_EBA1DA59141868AB_OFFSET UNITYSDK_OFFSET(0xB4F7750)
#define CLASS_2_7C86492618AE1202__CTOR_OFFSET UNITYSDK_OFFSET(0xB4F7990)

inline static constexpr unsigned int Class_2_7C86492618AE1202_TypeDefinitionIndex = 46670;

class Class_2_7C86492618AE1202 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x20
	::MonoUITableScrollV2* Field_2_3; // 0x28
	::UnityEngine::UI::Text* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C86492618AE1202__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBA1DA59141868AB(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7C86492618AE1202_METHOD_2_EBA1DA59141868AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7C86492618AE1202_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C86492618AE1202_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
