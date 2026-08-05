#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UIMatchGameTrail; }

#define CLASS_2_759F9F5E10B92499_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x133F4B50)
#define CLASS_2_759F9F5E10B92499_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x133F4C40)
#define CLASS_2_759F9F5E10B92499__CTOR_OFFSET UNITYSDK_OFFSET(0x133F4C30)

inline static constexpr unsigned int Class_2_759F9F5E10B92499_TypeDefinitionIndex = 61447;

class Class_2_759F9F5E10B92499 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UIMatchGameTrail* Field_2_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_759F9F5E10B92499__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_759F9F5E10B92499_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_759F9F5E10B92499_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
