#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_26B62D6393FD3B48_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x132A5CB0)
#define CLASS_2_26B62D6393FD3B48_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x132A5E80)
#define CLASS_2_26B62D6393FD3B48_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x132A5F70)
#define CLASS_2_26B62D6393FD3B48__CTOR_OFFSET UNITYSDK_OFFSET(0x132A5F60)

inline static constexpr unsigned int Class_2_26B62D6393FD3B48_TypeDefinitionIndex = 55013;

class Class_2_26B62D6393FD3B48 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x28
	::MonoUITableScrollV2* Field_2_5; // 0x30
	::MonoUITableScrollV2* Field_2_3; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26B62D6393FD3B48__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_26B62D6393FD3B48_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26B62D6393FD3B48_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_26B62D6393FD3B48_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
