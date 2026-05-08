#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_9C016BBDDB38E296_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x16AE4A50)
#define CLASS_2_9C016BBDDB38E296_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x16AE4C20)
#define CLASS_2_9C016BBDDB38E296_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16AE4CF0)
#define CLASS_2_9C016BBDDB38E296__CTOR_OFFSET UNITYSDK_OFFSET(0x16AE4CE0)

inline static constexpr unsigned int Class_2_9C016BBDDB38E296_TypeDefinitionIndex = 65542;

class Class_2_9C016BBDDB38E296 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::UnityEngine::Transform* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::MonoUITableScrollV2* Field_2_1; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C016BBDDB38E296__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9C016BBDDB38E296_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C016BBDDB38E296_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9C016BBDDB38E296_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
