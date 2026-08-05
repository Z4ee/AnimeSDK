#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_C39030A6227D9C3E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12A5CD90)
#define CLASS_2_C39030A6227D9C3E_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x12A5CC90)
#define CLASS_2_C39030A6227D9C3E__CTOR_OFFSET UNITYSDK_OFFSET(0x12A5CD80)

inline static constexpr unsigned int Class_2_C39030A6227D9C3E_TypeDefinitionIndex = 50496;

class Class_2_C39030A6227D9C3E : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_2; // 0x18
	::UnityEngine::Transform* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::UnityEngine::Transform* Field_2_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C39030A6227D9C3E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C39030A6227D9C3E_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C39030A6227D9C3E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
