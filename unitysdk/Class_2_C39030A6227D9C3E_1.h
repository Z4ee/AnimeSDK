#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_C39030A6227D9C3E_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFE23180)
#define CLASS_2_C39030A6227D9C3E_1_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0xFE23080)
#define CLASS_2_C39030A6227D9C3E_1__CTOR_OFFSET UNITYSDK_OFFSET(0xFE23170)

inline static constexpr unsigned int Class_2_C39030A6227D9C3E_1_TypeDefinitionIndex = 64005;

class Class_2_C39030A6227D9C3E_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::UnityEngine::Transform* Field_2_1; // 0x28
	::UnityEngine::Transform* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C39030A6227D9C3E_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C39030A6227D9C3E_1_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C39030A6227D9C3E_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
