#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_FB90F8F234309AE5_1_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x15BC9340)
#define CLASS_2_FB90F8F234309AE5_1_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x15BC9540)
#define CLASS_2_FB90F8F234309AE5_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15BC9610)
#define CLASS_2_FB90F8F234309AE5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC9600)

inline static constexpr unsigned int Class_2_FB90F8F234309AE5_1_TypeDefinitionIndex = 76094;

class Class_2_FB90F8F234309AE5_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_9; // 0x18
	::UnityEngine::Transform* Field_2_11; // 0x20
	::UnityEngine::Transform* Field_2_10; // 0x28
	::UnityEngine::Transform* Field_2_6; // 0x30
	::UnityEngine::Transform* Field_2_7; // 0x38
	::UnityEngine::Transform* Field_2_1; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB90F8F234309AE5_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FB90F8F234309AE5_1_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB90F8F234309AE5_1_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FB90F8F234309AE5_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
