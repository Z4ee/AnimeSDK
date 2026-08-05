#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
class MonoGeneralLevelUpConfig;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_D069850164AB7014_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x11FCFF20)
#define CLASS_2_D069850164AB7014_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11FD0030)
#define CLASS_2_D069850164AB7014__CTOR_OFFSET UNITYSDK_OFFSET(0x11FD0020)

inline static constexpr unsigned int Class_2_D069850164AB7014_TypeDefinitionIndex = 85859;

class Class_2_D069850164AB7014 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::MonoGeneralLevelUpConfig* Field_2_2; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D069850164AB7014__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D069850164AB7014_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D069850164AB7014_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
