#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2D8E5AB4B623162.h"
#include "unitysdk/RPG/GameCore/AdventureAbilityManualTriggerType.h"

class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
class Class_2_AA23F9AB52F53415;
class Class_3_07C3C4D2990C49EE;
class Class_3_98C806684F7CC372_14;
class Class_3_98C806684F7CC372_15;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class AdventureAbilityConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_6052D6419BE52328_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3D56A0)
#define CLASS_2_6052D6419BE52328_METHOD_2_1190E9419849D14F_OFFSET UNITYSDK_OFFSET(0xA3D5FB0)
#define CLASS_2_6052D6419BE52328_METHOD_2_2332F476B75A13EA_OFFSET UNITYSDK_OFFSET(0xA3D5D90)
#define CLASS_2_6052D6419BE52328_METHOD_2_33B1098CBCE7AEF5_OFFSET UNITYSDK_OFFSET(0xA3D6050)
#define CLASS_2_6052D6419BE52328_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0xA3D6040)
#define CLASS_2_6052D6419BE52328_METHOD_2_4896C1188121CF76_OFFSET UNITYSDK_OFFSET(0xA3D57D0)
#define CLASS_2_6052D6419BE52328_METHOD_2_6F3643A075115E43_OFFSET UNITYSDK_OFFSET(0xA3D5890)
#define CLASS_2_6052D6419BE52328_METHOD_2_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0xA3D5AB0)
#define CLASS_2_6052D6419BE52328_METHOD_2_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0xA3D6060)
#define CLASS_2_6052D6419BE52328_METHOD_2_A9B16756059F6D47_OFFSET UNITYSDK_OFFSET(0xA3D6070)
#define CLASS_2_6052D6419BE52328_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0xA3D5630)
#define CLASS_2_6052D6419BE52328_METHOD_2_B43174FB86B04B80_OFFSET UNITYSDK_OFFSET(0xA3D5E30)
#define CLASS_2_6052D6419BE52328_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA3D56F0)
#define CLASS_2_6052D6419BE52328_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xA3D5740)
#define CLASS_2_6052D6419BE52328_METHOD_2_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0xA3D5F50)
#define CLASS_2_6052D6419BE52328_METHOD_2_FB3E4BC75121BDBA_OFFSET UNITYSDK_OFFSET(0xA3D6190)
#define CLASS_2_6052D6419BE52328__CTOR_OFFSET UNITYSDK_OFFSET(0xA3D5560)
#define CLASS_2_6052D6419BE52328___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3D6030)

inline static constexpr unsigned int Class_2_6052D6419BE52328_TypeDefinitionIndex = 50854;

class Class_2_6052D6419BE52328 : public ::Class_1_A2D8E5AB4B623162
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x90
	::Class_2_AA23F9AB52F53415* Field_2_1; // 0x98
	::System::UInt32 Field_2_2; // 0xA0
	::System::Int32 Field_2_3; // 0xA4

	::System::Void _ctor(::RPG::GameCore::AbilityComponent* a1, ::RPG::GameCore::AdventureAbilityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityComponent*, ::RPG::GameCore::AdventureAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_4896C1188121CF76(::Class_2_AA23F9AB52F53415* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AA23F9AB52F53415*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328_METHOD_2_4896C1188121CF76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6F3643A075115E43(::Class_2_AA23F9AB52F53415* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AA23F9AB52F53415*))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328_METHOD_2_6F3643A075115E43_OFFSET))(this, a1);
	}

	::System::Void Method_2_80313B77C31AD02B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328_METHOD_2_80313B77C31AD02B_OFFSET))(this);
	}

	::System::Void Method_2_2332F476B75A13EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328_METHOD_2_2332F476B75A13EA_OFFSET))(this);
	}

	::Class_1_0AD6129525BF5F86* Method_2_B43174FB86B04B80(::RPG::GameCore::ProjectileData* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::Class_3_98C806684F7CC372_14* a4, ::Class_1_2B8E0B4950FE44E7* a5, ::Class_3_98C806684F7CC372_15* a6, ::System::Boolean a7, ::RPG::GameCore::NewProjectileConfig* a8)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_14*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_15*, ::System::Boolean, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328_METHOD_2_B43174FB86B04B80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::RPG::GameCore::TaskContext* Method_2_F2ACC5B1FFC4D55A()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328_METHOD_2_F2ACC5B1FFC4D55A_OFFSET))(this);
	}

	::RPG::GameCore::AdventureAbilityManualTriggerType Method_2_1190E9419849D14F()
	{
		return ((::RPG::GameCore::AdventureAbilityManualTriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328_METHOD_2_1190E9419849D14F_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328_METHOD_2_3C56C1AF247AC1EC_OFFSET))(this);
	}

	::System::Void Method_2_33B1098CBCE7AEF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328_METHOD_2_33B1098CBCE7AEF5_OFFSET))(this);
	}

	::System::Void Method_2_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328_METHOD_2_8F537CE539CF0103_OFFSET))(this);
	}

	::Class_1_0AD6129525BF5F86* Method_2_A9B16756059F6D47(::RPG::GameCore::ProjectileData* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::Class_3_98C806684F7CC372_14* a4, ::Class_1_2B8E0B4950FE44E7* a5, ::Class_3_98C806684F7CC372_15* a6, ::System::Boolean a7, ::RPG::GameCore::NewProjectileConfig* a8)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_14*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_15*, ::System::Boolean, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328_METHOD_2_A9B16756059F6D47_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::RPG::GameCore::TaskContext* Method_2_FB3E4BC75121BDBA()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6052D6419BE52328_METHOD_2_FB3E4BC75121BDBA_OFFSET))(this);
	}
};
