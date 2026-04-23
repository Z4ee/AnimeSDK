#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DD81253E160EB8B2;
class Class_1_F65DC6656DEF8159;
namespace RPG::Client { class Effect_ParticleBackwardMonoPlugin; }
namespace RPG::Client { class Effect_RendererMatBackwardMonoPlugin; }
namespace RPG::Client { class EntityTimelineControlNode; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TimeRewindEffConfig; }

#define CLASS_1_EB12C59D9F121FDC_CLEAR_OFFSET UNITYSDK_OFFSET(0x124DAA10)
#define CLASS_1_EB12C59D9F121FDC_METHOD_1_182E80CD9B0202EB_OFFSET UNITYSDK_OFFSET(0x124DA470)
#define CLASS_1_EB12C59D9F121FDC_METHOD_1_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x124DAE60)
#define CLASS_1_EB12C59D9F121FDC_METHOD_1_264C4240ED75E08B_OFFSET UNITYSDK_OFFSET(0x124DA600)
#define CLASS_1_EB12C59D9F121FDC_METHOD_1_3D81D6DE93C85F92_OFFSET UNITYSDK_OFFSET(0x124DA760)
#define CLASS_1_EB12C59D9F121FDC_METHOD_1_51AA029DE3B8B5BD_OFFSET UNITYSDK_OFFSET(0x124DB840)
#define CLASS_1_EB12C59D9F121FDC_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x124DA980)
#define CLASS_1_EB12C59D9F121FDC_METHOD_1_AA194C2184220475_OFFSET UNITYSDK_OFFSET(0x124DA340)
#define CLASS_1_EB12C59D9F121FDC_METHOD_1_AB1A9623E03F063F_OFFSET UNITYSDK_OFFSET(0x124DB620)
#define CLASS_1_EB12C59D9F121FDC_METHOD_1_B9F72A112CB05C02_OFFSET UNITYSDK_OFFSET(0x124DA260)
#define CLASS_1_EB12C59D9F121FDC_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x124DA420)
#define CLASS_1_EB12C59D9F121FDC_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x124DA9D0)
#define CLASS_1_EB12C59D9F121FDC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x124DA3D0)
#define CLASS_1_EB12C59D9F121FDC_METHOD_1_D378160D37B885FA_OFFSET UNITYSDK_OFFSET(0x124DB8F0)
#define CLASS_1_EB12C59D9F121FDC_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x124DAA90)
#define CLASS_1_EB12C59D9F121FDC_METHOD_1_E93DAC0FCFC435B3_OFFSET UNITYSDK_OFFSET(0x124DAF60)
#define CLASS_1_EB12C59D9F121FDC__CTOR_OFFSET UNITYSDK_OFFSET(0x124DBB00)

inline static constexpr unsigned int Class_1_EB12C59D9F121FDC_TypeDefinitionIndex = 56064;

class Class_1_EB12C59D9F121FDC : public ::System::Object
{
public:
	::Class_1_DD81253E160EB8B2* Field_1_1; // 0x10
	::Il2CppArray<::RPG::Client::Effect_RendererMatBackwardMonoPlugin*>* Field_1_9; // 0x18
	::Il2CppArray<::RPG::Client::Effect_ParticleBackwardMonoPlugin*>* Field_1_8; // 0x20
	::Class_1_F65DC6656DEF8159* Field_1_15; // 0x28
	::RPG::Client::MonoEffectPluginFollow* Field_1_10; // 0x30
	::RPG::Client::EntityTimelineControlNode* Field_1_12; // 0x38
	::RPG::Client::MonoEffect* Field_1_2; // 0x40
	::RPG::GameCore::GameEntity* Field_1_3; // 0x48
	::RPG::GameCore::TimeRewindEffConfig* Field_1_0; // 0x50
	::System::Single Field_1_13; // 0x58
	::RPG::GameCore::TimeRewindState Field_1_4; // 0x5C
	::System::Boolean Field_1_11; // 0x60
	::System::Boolean Field_1_14; // 0x61
	::System::Single Field_1_5; // 0x64
	::System::Single Field_1_7; // 0x68
	::System::Single Field_1_6; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B9F72A112CB05C02(::RPG::GameCore::GameEntity* a1, ::Class_1_F65DC6656DEF8159* a2, ::RPG::GameCore::TimeRewindEffConfig* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::RPG::Client::EntityTimelineControlNode* a7)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_F65DC6656DEF8159*, ::RPG::GameCore::TimeRewindEffConfig*, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::EntityTimelineControlNode*))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC_METHOD_1_B9F72A112CB05C02_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_AA194C2184220475(::RPG::GameCore::TimeRewindState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC_METHOD_1_AA194C2184220475_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_182E80CD9B0202EB(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC_METHOD_1_182E80CD9B0202EB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_264C4240ED75E08B(::RPG::GameCore::TimeRewindState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC_METHOD_1_264C4240ED75E08B_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D81D6DE93C85F92(::RPG::GameCore::TimeRewindState a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC_METHOD_1_3D81D6DE93C85F92_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_1_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC_METHOD_1_1CD1133DC003C11C_OFFSET))(this, a1);
	}

	::System::Void Method_1_E93DAC0FCFC435B3(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC_METHOD_1_E93DAC0FCFC435B3_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_AB1A9623E03F063F(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC_METHOD_1_AB1A9623E03F063F_OFFSET))(this, a1);
	}

	::System::Single Method_1_51AA029DE3B8B5BD(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC_METHOD_1_51AA029DE3B8B5BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_D378160D37B885FA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EB12C59D9F121FDC_METHOD_1_D378160D37B885FA_OFFSET))(this, a1);
	}
};
