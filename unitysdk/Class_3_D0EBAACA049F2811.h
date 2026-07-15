#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ReceiveDynamicSkillButtonInput; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D0EBAACA049F2811_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18724120)
#define CLASS_3_D0EBAACA049F2811_METHOD_3_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x187245E0)
#define CLASS_3_D0EBAACA049F2811_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18724290)
#define CLASS_3_D0EBAACA049F2811_TICK_OFFSET UNITYSDK_OFFSET(0x18724670)
#define CLASS_3_D0EBAACA049F2811__CTOR_OFFSET UNITYSDK_OFFSET(0x18724010)

inline static constexpr unsigned int Class_3_D0EBAACA049F2811_TypeDefinitionIndex = 52776;

class Class_3_D0EBAACA049F2811 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ReceiveDynamicSkillButtonInput*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_3_1; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_3_2; // 0x38
	::RPG::GameCore::ControlSkillType Field_3_3; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReceiveDynamicSkillButtonInput* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReceiveDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + CLASS_3_D0EBAACA049F2811__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D0EBAACA049F2811_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D0EBAACA049F2811_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D0EBAACA049F2811_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D0EBAACA049F2811_METHOD_3_3C56C1AF247AC1EC_OFFSET))(this);
	}
};
