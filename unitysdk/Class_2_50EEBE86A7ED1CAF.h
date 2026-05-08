#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_50EEBE86A7ED1CAF_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x11C03C10)
#define CLASS_2_50EEBE86A7ED1CAF_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x11C039E0)
#define CLASS_2_50EEBE86A7ED1CAF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11C03CA0)
#define CLASS_2_50EEBE86A7ED1CAF__CTOR_OFFSET UNITYSDK_OFFSET(0x11C03C90)

inline static constexpr unsigned int Class_2_50EEBE86A7ED1CAF_TypeDefinitionIndex = 49481;

class Class_2_50EEBE86A7ED1CAF : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_5; // 0x18
	::UnityEngine::Transform* Field_2_7; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_3; // 0x28
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40
	::UnityEngine::RectTransform* Field_2_4; // 0x48
	::MoleMole::MonoInputKey* Field_2_6; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50EEBE86A7ED1CAF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_50EEBE86A7ED1CAF_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50EEBE86A7ED1CAF_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_50EEBE86A7ED1CAF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
