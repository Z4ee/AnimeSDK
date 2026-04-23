#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2D8E5AB4B623162.h"
#include "unitysdk/RPG/GameCore/AdventureAbilityManualTriggerType.h"

class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
class Class_2_AA23F9AB52F53415;
class Class_3_98C806684F7CC372_14;
class Class_3_98C806684F7CC372_15;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class AdventureAbilityConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_1A037263741137E5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A89A80)
#define CLASS_2_1A037263741137E5_METHOD_2_005B9075C96EF0A1_OFFSET UNITYSDK_OFFSET(0x9A89C60)
#define CLASS_2_1A037263741137E5_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x9A8A390)
#define CLASS_2_1A037263741137E5_METHOD_2_1EB4C16844667DDF_OFFSET UNITYSDK_OFFSET(0x9A8A450)
#define CLASS_2_1A037263741137E5_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x9A8A380)
#define CLASS_2_1A037263741137E5_METHOD_2_3CB619D478E17566_OFFSET UNITYSDK_OFFSET(0x9A8A2F0)
#define CLASS_2_1A037263741137E5_METHOD_2_4A3B5D9461CDF761_OFFSET UNITYSDK_OFFSET(0x9A89BA0)
#define CLASS_2_1A037263741137E5_METHOD_2_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x9A89A10)
#define CLASS_2_1A037263741137E5_METHOD_2_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x9A89E50)
#define CLASS_2_1A037263741137E5_METHOD_2_B43174FB86B04B80_OFFSET UNITYSDK_OFFSET(0x9A8A170)
#define CLASS_2_1A037263741137E5_METHOD_2_C293B8F3ADB851B9_OFFSET UNITYSDK_OFFSET(0x9A8A3A0)
#define CLASS_2_1A037263741137E5_METHOD_2_C6BD7598FB8E5123_OFFSET UNITYSDK_OFFSET(0x9A8A0E0)
#define CLASS_2_1A037263741137E5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9A89AD0)
#define CLASS_2_1A037263741137E5_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x9A89B20)
#define CLASS_2_1A037263741137E5_METHOD_2_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0x9A8A290)
#define CLASS_2_1A037263741137E5_METHOD_2_FB3E4BC75121BDBA_OFFSET UNITYSDK_OFFSET(0x9A8A580)
#define CLASS_2_1A037263741137E5__CTOR_OFFSET UNITYSDK_OFFSET(0x9A89940)
#define CLASS_2_1A037263741137E5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A8A370)

inline static constexpr unsigned int Class_2_1A037263741137E5_TypeDefinitionIndex = 50187;

class Class_2_1A037263741137E5 : public ::Class_1_A2D8E5AB4B623162
{
public:
	::Class_2_AA23F9AB52F53415* Field_2_3; // 0x90
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x98
	::System::UInt32 Field_2_0; // 0xA0
	::System::Int32 Field_2_1; // 0xA4

	::System::Void _ctor(::RPG::GameCore::AbilityComponent* a1, ::RPG::GameCore::AdventureAbilityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityComponent*, ::RPG::GameCore::AdventureAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_4A3B5D9461CDF761(::Class_2_AA23F9AB52F53415* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AA23F9AB52F53415*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_4A3B5D9461CDF761_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_005B9075C96EF0A1(::Class_2_AA23F9AB52F53415* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AA23F9AB52F53415*))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_005B9075C96EF0A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_9F8F6511E8EF1235_OFFSET))(this);
	}

	::System::Void Method_2_C6BD7598FB8E5123()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_C6BD7598FB8E5123_OFFSET))(this);
	}

	::Class_1_0AD6129525BF5F86* Method_2_B43174FB86B04B80(::RPG::GameCore::ProjectileData* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::Class_3_98C806684F7CC372_14* a4, ::Class_1_2B8E0B4950FE44E7* a5, ::Class_3_98C806684F7CC372_15* a6, ::System::Boolean a7, ::RPG::GameCore::NewProjectileConfig* a8)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_14*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_15*, ::System::Boolean, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_B43174FB86B04B80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::RPG::GameCore::TaskContext* Method_2_F2ACC5B1FFC4D55A()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_F2ACC5B1FFC4D55A_OFFSET))(this);
	}

	::RPG::GameCore::AdventureAbilityManualTriggerType Method_2_3CB619D478E17566()
	{
		return ((::RPG::GameCore::AdventureAbilityManualTriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_3CB619D478E17566_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_3C56C1AF247AC1EC_OFFSET))(this);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_2_C293B8F3ADB851B9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_C293B8F3ADB851B9_OFFSET))(this);
	}

	::Class_1_0AD6129525BF5F86* Method_2_1EB4C16844667DDF(::RPG::GameCore::ProjectileData* P0, ::RPG::GameCore::GameEntity* P1, ::RPG::GameCore::GameEntity* P2, ::Class_3_98C806684F7CC372_14* P3, ::Class_1_2B8E0B4950FE44E7* P4, ::Class_3_98C806684F7CC372_15* P5, ::System::Boolean P6, ::RPG::GameCore::NewProjectileConfig* P7)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_14*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_15*, ::System::Boolean, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_1EB4C16844667DDF_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}

	::RPG::GameCore::TaskContext* Method_2_FB3E4BC75121BDBA()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_FB3E4BC75121BDBA_OFFSET))(this);
	}
};
