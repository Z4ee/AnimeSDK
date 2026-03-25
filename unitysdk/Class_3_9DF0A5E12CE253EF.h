#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CF936FB7CE3B8D17.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9D4DD2F4235F8658;
class Class_2_A0580152EB393340;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class AdvSetAIMoveTo; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9DF0A5E12CE253EF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11051370)
#define CLASS_3_9DF0A5E12CE253EF_METHOD_3_44D7B58B9D189F38_OFFSET UNITYSDK_OFFSET(0x11051950)
#define CLASS_3_9DF0A5E12CE253EF_METHOD_3_736EFAF4152D13AF_OFFSET UNITYSDK_OFFSET(0x11051CA0)
#define CLASS_3_9DF0A5E12CE253EF_METHOD_3_9216B801ACD0B564_OFFSET UNITYSDK_OFFSET(0x11051D30)
#define CLASS_3_9DF0A5E12CE253EF_METHOD_3_C2CB27D3BB7D9DBC_OFFSET UNITYSDK_OFFSET(0x11051EC0)
#define CLASS_3_9DF0A5E12CE253EF_METHOD_3_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0x11052130)
#define CLASS_3_9DF0A5E12CE253EF_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x11052270)
#define CLASS_3_9DF0A5E12CE253EF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11051440)
#define CLASS_3_9DF0A5E12CE253EF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11052010)
#define CLASS_3_9DF0A5E12CE253EF_TICK_OFFSET UNITYSDK_OFFSET(0x11051A30)
#define CLASS_3_9DF0A5E12CE253EF__CTOR_OFFSET UNITYSDK_OFFSET(0x11051220)
#define CLASS_3_9DF0A5E12CE253EF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x110523D0)

inline static constexpr unsigned int Class_3_9DF0A5E12CE253EF_TypeDefinitionIndex = 42502;

class Class_3_9DF0A5E12CE253EF : public ::Class_2_CF936FB7CE3B8D17
{
public:
	::Class_2_A0580152EB393340* Field_3_1; // 0x30
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* Field_3_7; // 0x38
	::Class_2_9D4DD2F4235F8658* Field_3_2; // 0x40
	::RPG::GameCore::AdvSetAIMoveTo* Field_3_0; // 0x48
	::Class_3_5775A4FEC79026BC* Field_3_3; // 0x50
	::UnityEngine::Vector3 Field_3_4; // 0x58
	::System::Boolean Field_3_6; // 0x64
	::UnityEngine::Quaternion Field_3_5; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetAIMoveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetAIMoveTo*))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_9216B801ACD0B564()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_METHOD_3_9216B801ACD0B564_OFFSET))(this);
	}

	::System::Void Method_3_C2CB27D3BB7D9DBC(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_METHOD_3_C2CB27D3BB7D9DBC_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_E6D3C4C666E119D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_METHOD_3_E6D3C4C666E119D9_OFFSET))(this);
	}

	::System::Void Method_3_44D7B58B9D189F38(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_METHOD_3_44D7B58B9D189F38_OFFSET))(this, a1);
	}

	::System::Void Method_3_736EFAF4152D13AF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_METHOD_3_736EFAF4152D13AF_OFFSET))(this, a1);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DF0A5E12CE253EF___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
