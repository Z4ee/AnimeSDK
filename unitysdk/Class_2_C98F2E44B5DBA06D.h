#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_C98F2E44B5DBA06D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x106A8E10)
#define CLASS_2_C98F2E44B5DBA06D_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x106A8CB0)
#define CLASS_2_C98F2E44B5DBA06D__CTOR_OFFSET UNITYSDK_OFFSET(0x106A8E00)

inline static constexpr unsigned int Class_2_C98F2E44B5DBA06D_TypeDefinitionIndex = 59814;

class Class_2_C98F2E44B5DBA06D : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_11; // 0x18
	::MonoUITableScrollV2* Field_2_2; // 0x20
	::UnityEngine::UI::Text* Field_2_6; // 0x28
	::UnityEngine::UI::Text* Field_2_7; // 0x30
	::UnityEngine::UI::Text* Field_2_5; // 0x38
	::UnityEngine::UI::Text* Field_2_1; // 0x40
	::UnityEngine::UI::Text* Field_2_0; // 0x48
	::UnityEngine::UI::Text* Field_2_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98F2E44B5DBA06D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C98F2E44B5DBA06D_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C98F2E44B5DBA06D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
