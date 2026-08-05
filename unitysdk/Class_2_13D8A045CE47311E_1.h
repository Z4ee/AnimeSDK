#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_13D8A045CE47311E_1_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x11409880)
#define CLASS_2_13D8A045CE47311E_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11409950)
#define CLASS_2_13D8A045CE47311E_1_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x11409710)
#define CLASS_2_13D8A045CE47311E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11409940)

inline static constexpr unsigned int Class_2_13D8A045CE47311E_1_TypeDefinitionIndex = 80894;

class Class_2_13D8A045CE47311E_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13D8A045CE47311E_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_13D8A045CE47311E_1_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_13D8A045CE47311E_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_13D8A045CE47311E_1_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
