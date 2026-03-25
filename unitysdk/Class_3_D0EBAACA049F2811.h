#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class ReceiveDynamicSkillButtonInput; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D0EBAACA049F2811_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111E0DC0)
#define CLASS_3_D0EBAACA049F2811_METHOD_3_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x111E1190)
#define CLASS_3_D0EBAACA049F2811_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x111E0E60)
#define CLASS_3_D0EBAACA049F2811_TICK_OFFSET UNITYSDK_OFFSET(0x111E1220)
#define CLASS_3_D0EBAACA049F2811__CTOR_OFFSET UNITYSDK_OFFSET(0x111E0CB0)
#define CLASS_3_D0EBAACA049F2811___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111E14A0)
#define CLASS_3_D0EBAACA049F2811___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x111E1540)

inline static constexpr unsigned int Class_3_D0EBAACA049F2811_TypeDefinitionIndex = 44250;

class Class_3_D0EBAACA049F2811 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ReceiveDynamicSkillButtonInput*>
{
public:
	::Class_3_5775A4FEC79026BC* Field_3_2; // 0x28
	::Class_3_5775A4FEC79026BC* Field_3_1; // 0x30
	::Class_3_5775A4FEC79026BC* Field_3_0; // 0x38
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

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D0EBAACA049F2811___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D0EBAACA049F2811___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
