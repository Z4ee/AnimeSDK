#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D244C6518E0DA169.h"
#include "unitysdk/Enum_3_5360C2E84E3F9315.h"
#include "unitysdk/Enum_3_57485C40B0629FAC.h"

namespace MoleMole::Config { class ButtonQTETaskSinglePressCountDownEntry; }
namespace MoleMole::Config { class RealtimeQTETaskEntryBase; }

#define CLASS_3_D207D4FE62A0CC16_METHOD_3_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x1CB7DFD0)
#define CLASS_3_D207D4FE62A0CC16_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CB7DFC0)
#define CLASS_3_D207D4FE62A0CC16_METHOD_3_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x1CB7E0A0)
#define CLASS_3_D207D4FE62A0CC16_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1CB7E180)
#define CLASS_3_D207D4FE62A0CC16__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB7DFE0)

inline static constexpr unsigned int Class_3_D207D4FE62A0CC16_TypeDefinitionIndex = 81858;

class Class_3_D207D4FE62A0CC16 : public ::Class_2_D244C6518E0DA169
{
public:
	::MoleMole::Config::ButtonQTETaskSinglePressCountDownEntry* Field_3_0; // 0x40

	::System::Void _ctor(::MoleMole::Config::RealtimeQTETaskEntryBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RealtimeQTETaskEntryBase*))((::PBYTE)hIl2Cpp + CLASS_3_D207D4FE62A0CC16__CTOR_OFFSET))(this, a1);
	}

	::Enum_3_5360C2E84E3F9315 Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_5360C2E84E3F9315(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D207D4FE62A0CC16_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::Enum_3_57485C40B0629FAC Method_3_A96DCA30C6927810_1()
	{
		return ((::Enum_3_57485C40B0629FAC(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D207D4FE62A0CC16_METHOD_3_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_3_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D207D4FE62A0CC16_METHOD_3_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D207D4FE62A0CC16_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
