#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicStringInjection.h"
#include "unitysdk/RPG/GameCore/AbilityInstanceState.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/UseAbilityOption.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_358;
class Class_1_0AD6129525BF5F86;
class Class_1_1C30CE192ABE4C54;
class Class_1_2B8E0B4950FE44E7;
class Class_1_5F51D4049EA87B7B;
class Class_3_07C3C4D2990C49EE;
class Class_3_98C806684F7CC372_14;
class Class_3_98C806684F7CC372_15;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class AbilityConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A2D8E5AB4B623162_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C4B700)
#define CLASS_1_A2D8E5AB4B623162_GET_ABILITYGLOBALUSEID_OFFSET UNITYSDK_OFFSET(0x13C4DE10)
#define CLASS_1_A2D8E5AB4B623162_GET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0x13C4DDD0)
#define CLASS_1_A2D8E5AB4B623162_GET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0x13C4DDF0)
#define CLASS_1_A2D8E5AB4B623162_GET_ISINTRIGGER_OFFSET UNITYSDK_OFFSET(0x13C4DDB0)
#define CLASS_1_A2D8E5AB4B623162_GET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0x13C4DD90)
#define CLASS_1_A2D8E5AB4B623162_GET_TAG_OFFSET UNITYSDK_OFFSET(0x13C4DE50)
#define CLASS_1_A2D8E5AB4B623162_GET_TARGETLISTINDEX_OFFSET UNITYSDK_OFFSET(0x13C4DD70)
#define CLASS_1_A2D8E5AB4B623162_GET_TIMEFROMSTART_OFFSET UNITYSDK_OFFSET(0x13C4E040)
#define CLASS_1_A2D8E5AB4B623162_GET_USEOPTION_OFFSET UNITYSDK_OFFSET(0x13C4E060)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x13C4DE30)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x13C4C910)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_27FE160831643A26_OFFSET UNITYSDK_OFFSET(0x13C4DD50)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x13C4DC40)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x13C4BAB0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_47D88335E404DE12_OFFSET UNITYSDK_OFFSET(0x13C4DF50)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_543457E493C428FA_OFFSET UNITYSDK_OFFSET(0x13C4CAD0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_68FB99B33E7C7AEB_OFFSET UNITYSDK_OFFSET(0x13C4DFB0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_70ABAF7F0B6E54DF_OFFSET UNITYSDK_OFFSET(0x13C4DD60)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_831A63E2BFD59A60_OFFSET UNITYSDK_OFFSET(0x13C4CCE0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_8377BC0DCBA8CDB6_OFFSET UNITYSDK_OFFSET(0x13C4DE80)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_84952E9528E25353_OFFSET UNITYSDK_OFFSET(0x13C4DB20)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_8A9A72FB00358D11_OFFSET UNITYSDK_OFFSET(0x13C4C800)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_8E37FF4EF1D584B4_OFFSET UNITYSDK_OFFSET(0x13C4C950)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_918892D3041414DB_OFFSET UNITYSDK_OFFSET(0x13C4CC10)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_93A145ED6F5562B4_OFFSET UNITYSDK_OFFSET(0x13C4DA40)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x13C4B980)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_9BADE3E301981C8B_OFFSET UNITYSDK_OFFSET(0x13C4BA00)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_9F6C57576636902D_OFFSET UNITYSDK_OFFSET(0x13C4BDD0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x13C4B8E0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_A2A9DCD74281CEB2_OFFSET UNITYSDK_OFFSET(0x13C4C010)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_A8D78AA5E0EAC774_OFFSET UNITYSDK_OFFSET(0x13C4DE70)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_A9B16756059F6D47_OFFSET UNITYSDK_OFFSET(0x13C4C700)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x13C4BF70)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_AE0B725AB77F7E6F_1_OFFSET UNITYSDK_OFFSET(0x13C4C410)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x13C4C3B0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x13C4DD40)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_C5BCCB84D9F819F3_OFFSET UNITYSDK_OFFSET(0x13C4CC20)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_C783EE0A4CAB17F8_OFFSET UNITYSDK_OFFSET(0x13C4C240)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13C4DCF0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_CA94882F410B6995_OFFSET UNITYSDK_OFFSET(0x13C4B560)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_CC9C9A9047B24E05_OFFSET UNITYSDK_OFFSET(0x13C4DEF0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_D18ADCF57B63A398_OFFSET UNITYSDK_OFFSET(0x13C3CF00)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0x13C4DE90)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_DAC6E1EE61939DC7_OFFSET UNITYSDK_OFFSET(0x13C4C470)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_DBAADCCDBE5B4E3B_OFFSET UNITYSDK_OFFSET(0x13C4C4C0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_E2C107D6A60322AB_OFFSET UNITYSDK_OFFSET(0x13C4C280)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_F07840BBC25636A7_OFFSET UNITYSDK_OFFSET(0x13C4BBE0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_F8F472A320546BB8_OFFSET UNITYSDK_OFFSET(0x13C4C520)
#define CLASS_1_A2D8E5AB4B623162_SET_ABILITYGLOBALUSEID_OFFSET UNITYSDK_OFFSET(0x13C4DE20)
#define CLASS_1_A2D8E5AB4B623162_SET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0x13C4DDE0)
#define CLASS_1_A2D8E5AB4B623162_SET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0x13C4DE00)
#define CLASS_1_A2D8E5AB4B623162_SET_ISINTRIGGER_OFFSET UNITYSDK_OFFSET(0x13C4DDC0)
#define CLASS_1_A2D8E5AB4B623162_SET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0x13C4DDA0)
#define CLASS_1_A2D8E5AB4B623162_SET_TAG_OFFSET UNITYSDK_OFFSET(0x13C4DE60)
#define CLASS_1_A2D8E5AB4B623162_SET_TARGETLISTINDEX_OFFSET UNITYSDK_OFFSET(0x13C4DD80)
#define CLASS_1_A2D8E5AB4B623162_SET_TIMEFROMSTART_OFFSET UNITYSDK_OFFSET(0x13C4E050)
#define CLASS_1_A2D8E5AB4B623162_SET_USEOPTION_OFFSET UNITYSDK_OFFSET(0x13C4E070)
#define CLASS_1_A2D8E5AB4B623162__CTOR_OFFSET UNITYSDK_OFFSET(0x13C4B110)

inline static constexpr unsigned int Class_1_A2D8E5AB4B623162_TypeDefinitionIndex = 50848;

class Class_1_A2D8E5AB4B623162 : public ::System::Object
{
public:
	::RPG::GameCore::AbilityConfig* Field_1_0; // 0x10
	::Class_3_07C3C4D2990C49EE* Field_1_1; // 0x18
	::Class_1_1C30CE192ABE4C54* _DynamicValues_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Class_1_0AD6129525BF5F86*>* Field_1_3; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* _DynamicStrings_k__BackingField; // 0x38
	::RPG::GameCore::AbilityComponent* Field_1_6; // 0x40
	::Class_3_07C3C4D2990C49EE* Field_1_7; // 0x48
	::RPG::GameCore::TaskContext* Field_1_8; // 0x50
	::RPG::GameCore::GameEntity* _SkillPointEntity_k__BackingField; // 0x58
	::RPG::GameCore::JsonEnum* _Tag_k__BackingField; // 0x60
	::RPG::GameCore::GameEntity* Field_1_11; // 0x68
	::RPG::GameCore::GameEntityList* Field_1_12; // 0x70
	::RPG::GameCore::UseAbilityOption _UseOption_k__BackingField; // 0x78
	::System::Int32 _TargetListIndex_k__BackingField; // 0x7C
	::System::Boolean _IsInTrigger_k__BackingField; // 0x80
	::System::Single _TimeFromStart_k__BackingField; // 0x84
	::System::UInt32 _AbilityGlobalUseId_k__BackingField; // 0x88
	::RPG::GameCore::AbilityInstanceState Field_1_18; // 0x8C

	::System::Void _ctor(::RPG::GameCore::AbilityComponent* a1, ::RPG::GameCore::AbilityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityComponent*, ::RPG::GameCore::AbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::Class_1_5F51D4049EA87B7B* Method_1_9BADE3E301981C8B()
	{
		return ((::Class_1_5F51D4049EA87B7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_9BADE3E301981C8B_OFFSET))(this);
	}

	::System::Void Method_1_F07840BBC25636A7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_F07840BBC25636A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F6C57576636902D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_9F6C57576636902D_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_A2A9DCD74281CEB2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_A2A9DCD74281CEB2_OFFSET))(this, a1);
	}

	::RPG::GameCore::AbilityComponent* Method_1_C783EE0A4CAB17F8()
	{
		return ((::RPG::GameCore::AbilityComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_C783EE0A4CAB17F8_OFFSET))(this);
	}

	::System::Void Method_1_E2C107D6A60322AB(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::UseAbilityOption a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::UseAbilityOption))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_E2C107D6A60322AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_1_AE0B725AB77F7E6F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_AE0B725AB77F7E6F_1_OFFSET))(this);
	}

	::RPG::GameCore::AbilityInstanceState Method_1_DAC6E1EE61939DC7()
	{
		return ((::RPG::GameCore::AbilityInstanceState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_DAC6E1EE61939DC7_OFFSET))(this);
	}

	::System::Type* Method_1_DBAADCCDBE5B4E3B()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_DBAADCCDBE5B4E3B_OFFSET))(this);
	}

	::Class_1_0AD6129525BF5F86* Method_1_F8F472A320546BB8(::RPG::GameCore::NewProjectileConfig* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::Class_3_98C806684F7CC372_14* a4, ::Class_1_2B8E0B4950FE44E7* a5, ::Class_3_98C806684F7CC372_15* a6, ::System::Boolean a7)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::RPG::GameCore::NewProjectileConfig*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_14*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_15*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_F8F472A320546BB8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Class_1_0AD6129525BF5F86* Method_1_D18ADCF57B63A398(::RPG::GameCore::ProjectileData* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::Class_3_98C806684F7CC372_14* a4, ::Class_1_2B8E0B4950FE44E7* a5, ::Class_3_98C806684F7CC372_15* a6, ::System::Boolean a7)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_14*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_15*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_D18ADCF57B63A398_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Class_1_0AD6129525BF5F86* Method_1_A9B16756059F6D47(::RPG::GameCore::ProjectileData* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::Class_3_98C806684F7CC372_14* a4, ::Class_1_2B8E0B4950FE44E7* a5, ::Class_3_98C806684F7CC372_15* a6, ::System::Boolean a7, ::RPG::GameCore::NewProjectileConfig* a8)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_14*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_15*, ::System::Boolean, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_A9B16756059F6D47_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_1_8A9A72FB00358D11()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_8A9A72FB00358D11_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_0AD6129525BF5F86*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0AD6129525BF5F86*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	::System::Void Method_1_8E37FF4EF1D584B4(::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicStringInjection>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicStringInjection>*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_8E37FF4EF1D584B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_543457E493C428FA(::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicFloatInjection>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicFloatInjection>*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_543457E493C428FA_OFFSET))(this, a1);
	}

	::RPG::GameCore::AbilityConfig* Method_1_918892D3041414DB()
	{
		return ((::RPG::GameCore::AbilityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_918892D3041414DB_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Method_1_C5BCCB84D9F819F3()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_C5BCCB84D9F819F3_OFFSET))(this);
	}

	::System::Void Method_1_CA94882F410B6995(::RPG::GameCore::AbilityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_CA94882F410B6995_OFFSET))(this, a1);
	}

	::System::Void Method_1_831A63E2BFD59A60(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_831A63E2BFD59A60_OFFSET))(this, a1);
	}

	::System::Void Method_1_84952E9528E25353(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_84952E9528E25353_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_93A145ED6F5562B4(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_93A145ED6F5562B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void Method_1_27FE160831643A26(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_27FE160831643A26_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_70ABAF7F0B6E54DF()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_70ABAF7F0B6E54DF_OFFSET))(this);
	}

	::System::Int32 get_TargetListIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_GET_TARGETLISTINDEX_OFFSET))(this);
	}

	::System::Void set_TargetListIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_TARGETLISTINDEX_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_SkillPointEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_GET_SKILLPOINTENTITY_OFFSET))(this);
	}

	::System::Void set_SkillPointEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_SKILLPOINTENTITY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsInTrigger()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_GET_ISINTRIGGER_OFFSET))(this);
	}

	::System::Void set_IsInTrigger(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_ISINTRIGGER_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* get_DynamicStrings()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_GET_DYNAMICSTRINGS_OFFSET))(this);
	}

	::System::Void set_DynamicStrings(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_DYNAMICSTRINGS_OFFSET))(this, a1);
	}

	::Class_1_1C30CE192ABE4C54* get_DynamicValues()
	{
		return ((::Class_1_1C30CE192ABE4C54*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_GET_DYNAMICVALUES_OFFSET))(this);
	}

	::System::Void set_DynamicValues(::Class_1_1C30CE192ABE4C54* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C30CE192ABE4C54*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_DYNAMICVALUES_OFFSET))(this, a1);
	}

	::System::UInt32 get_AbilityGlobalUseId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_GET_ABILITYGLOBALUSEID_OFFSET))(this);
	}

	::System::Void set_AbilityGlobalUseId(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_ABILITYGLOBALUSEID_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::RPG::GameCore::JsonEnum* get_Tag()
	{
		return ((::RPG::GameCore::JsonEnum*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_GET_TAG_OFFSET))(this);
	}

	::System::Void set_Tag(::RPG::GameCore::JsonEnum* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_TAG_OFFSET))(this, a1);
	}

	::RPG::GameCore::AbilityComponent* Method_1_A8D78AA5E0EAC774()
	{
		return ((::RPG::GameCore::AbilityComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_A8D78AA5E0EAC774_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Method_1_8377BC0DCBA8CDB6()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_8377BC0DCBA8CDB6_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_358* Method_1_D41F2EAAA87E2BFD()
	{
		return ((::Class_0_16E4307DCC419505_358*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_D41F2EAAA87E2BFD_OFFSET))(this);
	}

	::System::Void Method_1_CC9C9A9047B24E05(::Class_0_16E4307DCC419505_358* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_CC9C9A9047B24E05_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_47D88335E404DE12()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_47D88335E404DE12_OFFSET))(this);
	}

	::System::Boolean Method_1_68FB99B33E7C7AEB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_68FB99B33E7C7AEB_OFFSET))(this);
	}

	::System::Single get_TimeFromStart()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_GET_TIMEFROMSTART_OFFSET))(this);
	}

	::System::Void set_TimeFromStart(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_TIMEFROMSTART_OFFSET))(this, a1);
	}

	::RPG::GameCore::UseAbilityOption get_UseOption()
	{
		return ((::RPG::GameCore::UseAbilityOption(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_GET_USEOPTION_OFFSET))(this);
	}

	::System::Void set_UseOption(::RPG::GameCore::UseAbilityOption a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UseAbilityOption))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_USEOPTION_OFFSET))(this, a1);
	}
};
