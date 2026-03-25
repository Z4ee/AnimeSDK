#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2D8E5AB4B623162.h"
#include "unitysdk/RPG/GameCore/AdventureAbilityManualTriggerType.h"

class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
class Class_2_AA23F9AB52F53415;
class Class_3_5775A4FEC79026BC;
class Class_3_98C806684F7CC372_7;
class Class_3_98C806684F7CC372_8;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class AdventureAbilityConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_1A037263741137E5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC6E4D0)
#define CLASS_2_1A037263741137E5_METHOD_2_005B9075C96EF0A1_OFFSET UNITYSDK_OFFSET(0xAC6E6B0)
#define CLASS_2_1A037263741137E5_METHOD_2_1EB4C16844667DDF_OFFSET UNITYSDK_OFFSET(0xAC6EAC0)
#define CLASS_2_1A037263741137E5_METHOD_2_3CB619D478E17566_OFFSET UNITYSDK_OFFSET(0xAC6EA20)
#define CLASS_2_1A037263741137E5_METHOD_2_4A3B5D9461CDF761_OFFSET UNITYSDK_OFFSET(0xAC6E5F0)
#define CLASS_2_1A037263741137E5_METHOD_2_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0xAC6E460)
#define CLASS_2_1A037263741137E5_METHOD_2_B43174FB86B04B80_OFFSET UNITYSDK_OFFSET(0xAC6E8A0)
#define CLASS_2_1A037263741137E5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC6E520)
#define CLASS_2_1A037263741137E5_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xAC6E570)
#define CLASS_2_1A037263741137E5_METHOD_2_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0xAC6E9C0)
#define CLASS_2_1A037263741137E5_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0xAC6EAB0)
#define CLASS_2_1A037263741137E5_METHOD_2_FB3E4BC75121BDBA_OFFSET UNITYSDK_OFFSET(0xAC6EBF0)
#define CLASS_2_1A037263741137E5__CTOR_OFFSET UNITYSDK_OFFSET(0xAC6E390)
#define CLASS_2_1A037263741137E5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC6EAA0)

inline static constexpr unsigned int Class_2_1A037263741137E5_TypeDefinitionIndex = 43490;

class Class_2_1A037263741137E5 : public ::Class_1_A2D8E5AB4B623162
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x90
	::Class_2_AA23F9AB52F53415* Field_2_3; // 0x98
	::System::Int32 Field_2_1; // 0xA0
	::System::UInt32 Field_2_0; // 0xA4

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

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_4A3B5D9461CDF761(::Class_2_AA23F9AB52F53415* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AA23F9AB52F53415*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_4A3B5D9461CDF761_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_005B9075C96EF0A1(::Class_2_AA23F9AB52F53415* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AA23F9AB52F53415*))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_005B9075C96EF0A1_OFFSET))(this, a1);
	}

	::Class_1_0AD6129525BF5F86* Method_2_B43174FB86B04B80(::RPG::GameCore::ProjectileData* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::Class_3_98C806684F7CC372_7* a4, ::Class_1_2B8E0B4950FE44E7* a5, ::Class_3_98C806684F7CC372_8* a6, ::System::Boolean a7, ::RPG::GameCore::NewProjectileConfig* a8)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_7*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_8*, ::System::Boolean, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_B43174FB86B04B80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
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

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::Class_1_0AD6129525BF5F86* Method_2_1EB4C16844667DDF(::RPG::GameCore::ProjectileData* P0, ::RPG::GameCore::GameEntity* P1, ::RPG::GameCore::GameEntity* P2, ::Class_3_98C806684F7CC372_7* P3, ::Class_1_2B8E0B4950FE44E7* P4, ::Class_3_98C806684F7CC372_8* P5, ::System::Boolean P6, ::RPG::GameCore::NewProjectileConfig* P7)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_7*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_8*, ::System::Boolean, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_1EB4C16844667DDF_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}

	::RPG::GameCore::TaskContext* Method_2_FB3E4BC75121BDBA()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A037263741137E5_METHOD_2_FB3E4BC75121BDBA_OFFSET))(this);
	}
};
