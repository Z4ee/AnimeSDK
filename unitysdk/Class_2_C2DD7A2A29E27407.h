#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_C2DD7A2A29E27407_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x1E5896F0)
#define CLASS_2_C2DD7A2A29E27407_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1E5898E0)
#define CLASS_2_C2DD7A2A29E27407_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1E589990)
#define CLASS_2_C2DD7A2A29E27407__CTOR_OFFSET UNITYSDK_OFFSET(0x1E589980)

inline static constexpr unsigned int Class_2_C2DD7A2A29E27407_TypeDefinitionIndex = 89424;

class Class_2_C2DD7A2A29E27407 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x28
	::Class_2_FDFE69FE7B72463B* Field_2_3; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x38
	::UnityEngine::Transform* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2DD7A2A29E27407__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C2DD7A2A29E27407_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C2DD7A2A29E27407_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2DD7A2A29E27407_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
