#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigEffectSound; }
namespace MoleMole { class ConfigEnvironmentSound; }
namespace MoleMole { class ConfigLevelSound; }
namespace MoleMole { class ConfigRichtapSound; }
namespace MoleMole { class ConfigVoiceToEvent; }
namespace System { class Action; }

#define CLASS_1_F8560145B15070C4_CLASS_1_3413ADAE2A077A52_METHOD_1_3EE10B6FD369494B_OFFSET UNITYSDK_OFFSET(0x18372350)
#define CLASS_1_F8560145B15070C4_CLASS_1_3413ADAE2A077A52_METHOD_1_46E9CA28128A1B20_OFFSET UNITYSDK_OFFSET(0x18372380)
#define CLASS_1_F8560145B15070C4_CLASS_1_3413ADAE2A077A52_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x18372300)
#define CLASS_1_F8560145B15070C4_CLASS_1_3413ADAE2A077A52_METHOD_1_8D9EEB13646460AE_OFFSET UNITYSDK_OFFSET(0x18372320)
#define CLASS_1_F8560145B15070C4_CLASS_1_3413ADAE2A077A52_METHOD_1_9FD99D2898CEFE78_OFFSET UNITYSDK_OFFSET(0x183722D0)
#define CLASS_1_F8560145B15070C4_CLASS_1_3413ADAE2A077A52_METHOD_1_C94155453D0E9D6B_OFFSET UNITYSDK_OFFSET(0x183723B0)
#define CLASS_1_F8560145B15070C4_CLASS_1_3413ADAE2A077A52__CTOR_OFFSET UNITYSDK_OFFSET(0x183722C0)

inline static constexpr unsigned int Class_1_F8560145B15070C4_Class_1_3413ADAE2A077A52_TypeDefinitionIndex = 58742;

class Class_1_F8560145B15070C4_Class_1_3413ADAE2A077A52 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8560145B15070C4_CLASS_1_3413ADAE2A077A52__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9FD99D2898CEFE78(::MoleMole::ConfigEffectSound* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigEffectSound*))((::PBYTE)hIl2Cpp + CLASS_1_F8560145B15070C4_CLASS_1_3413ADAE2A077A52_METHOD_1_9FD99D2898CEFE78_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D9EEB13646460AE(::MoleMole::ConfigRichtapSound* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigRichtapSound*))((::PBYTE)hIl2Cpp + CLASS_1_F8560145B15070C4_CLASS_1_3413ADAE2A077A52_METHOD_1_8D9EEB13646460AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_3EE10B6FD369494B(::MoleMole::ConfigLevelSound* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigLevelSound*))((::PBYTE)hIl2Cpp + CLASS_1_F8560145B15070C4_CLASS_1_3413ADAE2A077A52_METHOD_1_3EE10B6FD369494B_OFFSET))(this, a1);
	}

	::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8560145B15070C4_CLASS_1_3413ADAE2A077A52_METHOD_1_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_1_46E9CA28128A1B20(::MoleMole::ConfigEnvironmentSound* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigEnvironmentSound*))((::PBYTE)hIl2Cpp + CLASS_1_F8560145B15070C4_CLASS_1_3413ADAE2A077A52_METHOD_1_46E9CA28128A1B20_OFFSET))(this, a1);
	}

	::System::Void Method_1_C94155453D0E9D6B(::MoleMole::ConfigVoiceToEvent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigVoiceToEvent*))((::PBYTE)hIl2Cpp + CLASS_1_F8560145B15070C4_CLASS_1_3413ADAE2A077A52_METHOD_1_C94155453D0E9D6B_OFFSET))(this, a1);
	}
};
