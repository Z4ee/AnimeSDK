#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicStringInjection.h"
#include "unitysdk/RPG/GameCore/AbilityInstanceState.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/UseAbilityOption.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_417;
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

#define CLASS_1_A2D8E5AB4B623162_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18018790)
#define CLASS_1_A2D8E5AB4B623162_GET_ABILITYGLOBALUSEID_OFFSET UNITYSDK_OFFSET(0x18DB1920)
#define CLASS_1_A2D8E5AB4B623162_GET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0x18DB18E0)
#define CLASS_1_A2D8E5AB4B623162_GET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0x18DB1900)
#define CLASS_1_A2D8E5AB4B623162_GET_ISINTRIGGER_OFFSET UNITYSDK_OFFSET(0x18DB18C0)
#define CLASS_1_A2D8E5AB4B623162_GET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0x18DB18A0)
#define CLASS_1_A2D8E5AB4B623162_GET_TAG_OFFSET UNITYSDK_OFFSET(0x18DB1960)
#define CLASS_1_A2D8E5AB4B623162_GET_TARGETLISTINDEX_OFFSET UNITYSDK_OFFSET(0x18DB1880)
#define CLASS_1_A2D8E5AB4B623162_GET_TIMEFROMSTART_OFFSET UNITYSDK_OFFSET(0x18DB1B50)
#define CLASS_1_A2D8E5AB4B623162_GET_USEOPTION_OFFSET UNITYSDK_OFFSET(0x18DB1B70)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x18DB1940)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_1BAAF20C60E3BE61_OFFSET UNITYSDK_OFFSET(0x18DAF8F0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x18DAFFA0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_27FE160831643A26_OFFSET UNITYSDK_OFFSET(0x18DB1860)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_30A2382C3FCC5386_1_OFFSET UNITYSDK_OFFSET(0x18DAF7F0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x18DAF790)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x18DB1750)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x18DAF5F0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_47D88335E404DE12_OFFSET UNITYSDK_OFFSET(0x18DB1A60)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_543457E493C428FA_OFFSET UNITYSDK_OFFSET(0x18DB0160)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_68FB99B33E7C7AEB_OFFSET UNITYSDK_OFFSET(0x18DB1AC0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_70ABAF7F0B6E54DF_OFFSET UNITYSDK_OFFSET(0x18DB1870)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_831A63E2BFD59A60_OFFSET UNITYSDK_OFFSET(0x18DB0510)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_8377BC0DCBA8CDB6_OFFSET UNITYSDK_OFFSET(0x18DB1990)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_84952E9528E25353_OFFSET UNITYSDK_OFFSET(0x18DB1620)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18018AC0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_8A9A72FB00358D11_OFFSET UNITYSDK_OFFSET(0x18DAFE90)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_8E37FF4EF1D584B4_OFFSET UNITYSDK_OFFSET(0x18DAFFE0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_918892D3041414DB_OFFSET UNITYSDK_OFFSET(0x18DB02A0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_93A145ED6F5562B4_OFFSET UNITYSDK_OFFSET(0x18DB1540)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18018BD0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x18018F60)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_9BADE3E301981C8B_OFFSET UNITYSDK_OFFSET(0x18018C50)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_9C05ABC9E776C74C_OFFSET UNITYSDK_OFFSET(0x18019260)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_A8D78AA5E0EAC774_OFFSET UNITYSDK_OFFSET(0x18DB1980)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_A9B16756059F6D47_OFFSET UNITYSDK_OFFSET(0x18DAFD90)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x180191C0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x18DB1850)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_C5BCCB84D9F819F3_OFFSET UNITYSDK_OFFSET(0x18DB02B0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_C783EE0A4CAB17F8_OFFSET UNITYSDK_OFFSET(0x18DAF3B0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18DB1800)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_CA94882F410B6995_OFFSET UNITYSDK_OFFSET(0x18DB0370)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_CC9C9A9047B24E05_OFFSET UNITYSDK_OFFSET(0x18DB1A00)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0x18DB19A0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_DAC6E1EE61939DC7_OFFSET UNITYSDK_OFFSET(0x18DAF850)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_DBAADCCDBE5B4E3B_OFFSET UNITYSDK_OFFSET(0x18DAF890)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_EBA51AD1CAB619FD_OFFSET UNITYSDK_OFFSET(0x18DAF3F0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_F07840BBC25636A7_OFFSET UNITYSDK_OFFSET(0x18018D00)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_FB51ED6FD63B44C1_OFFSET UNITYSDK_OFFSET(0x18DAFB40)
#define CLASS_1_A2D8E5AB4B623162_SET_ABILITYGLOBALUSEID_OFFSET UNITYSDK_OFFSET(0x18DB1930)
#define CLASS_1_A2D8E5AB4B623162_SET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0x18DB18F0)
#define CLASS_1_A2D8E5AB4B623162_SET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0x18DB1910)
#define CLASS_1_A2D8E5AB4B623162_SET_ISINTRIGGER_OFFSET UNITYSDK_OFFSET(0x18DB18D0)
#define CLASS_1_A2D8E5AB4B623162_SET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0x18DB18B0)
#define CLASS_1_A2D8E5AB4B623162_SET_TAG_OFFSET UNITYSDK_OFFSET(0x18DB1970)
#define CLASS_1_A2D8E5AB4B623162_SET_TARGETLISTINDEX_OFFSET UNITYSDK_OFFSET(0x18DB1890)
#define CLASS_1_A2D8E5AB4B623162_SET_TIMEFROMSTART_OFFSET UNITYSDK_OFFSET(0x18DB1B60)
#define CLASS_1_A2D8E5AB4B623162_SET_USEOPTION_OFFSET UNITYSDK_OFFSET(0x18DB1B80)
#define CLASS_1_A2D8E5AB4B623162__CTOR_OFFSET UNITYSDK_OFFSET(0x180181F0)

inline static constexpr unsigned int Class_1_A2D8E5AB4B623162_TypeDefinitionIndex = 54617;

class Class_1_A2D8E5AB4B623162 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntityList* GACEAOFPHOL; // 0x10
	::RPG::GameCore::GameEntity* IIJHEGOKIHJ; // 0x18
	::Class_3_07C3C4D2990C49EE* CLJEOHHIOKK; // 0x20
	::RPG::GameCore::AbilityComponent* JDEMOOOCPIK; // 0x28
	::RPG::GameCore::JsonEnum* _Tag_k__BackingField; // 0x30
	::RPG::GameCore::AbilityConfig* OFKGLJOAMLD; // 0x38
	::RPG::GameCore::TaskContext* LKKEALOOKKN; // 0x40
	::System::Collections::Generic::List_1<::Class_1_0AD6129525BF5F86*>* ILEMHGIBNIG; // 0x48
	::Class_1_1C30CE192ABE4C54* _DynamicValues_k__BackingField; // 0x50
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* _DynamicStrings_k__BackingField; // 0x58
	::RPG::GameCore::GameEntity* _SkillPointEntity_k__BackingField; // 0x60
	::Class_3_07C3C4D2990C49EE* NPICOLOFPGK; // 0x68
	::Class_3_07C3C4D2990C49EE* PPCEGDLCPJH; // 0x70
	::RPG::GameCore::UseAbilityOption _UseOption_k__BackingField; // 0x78
	::RPG::GameCore::AbilityInstanceState PINEIHNFLLG; // 0x7C
	::System::UInt32 _AbilityGlobalUseId_k__BackingField; // 0x80
	::System::Single _TimeFromStart_k__BackingField; // 0x84
	::System::Int32 _TargetListIndex_k__BackingField; // 0x88
	::System::Boolean _IsInTrigger_k__BackingField; // 0x8C

	::System::Void _ctor(::RPG::GameCore::AbilityComponent* a1, ::RPG::GameCore::AbilityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityComponent*, ::RPG::GameCore::AbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
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

	::System::Void Method_1_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_9765352E01408D38_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_9C05ABC9E776C74C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_9C05ABC9E776C74C_OFFSET))(this, a1);
	}

	::RPG::GameCore::AbilityComponent* Method_1_C783EE0A4CAB17F8()
	{
		return ((::RPG::GameCore::AbilityComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_C783EE0A4CAB17F8_OFFSET))(this);
	}

	::System::Void Method_1_EBA51AD1CAB619FD(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::UseAbilityOption a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::UseAbilityOption))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_EBA51AD1CAB619FD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_1_30A2382C3FCC5386_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_30A2382C3FCC5386_1_OFFSET))(this);
	}

	::RPG::GameCore::AbilityInstanceState Method_1_DAC6E1EE61939DC7()
	{
		return ((::RPG::GameCore::AbilityInstanceState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_DAC6E1EE61939DC7_OFFSET))(this);
	}

	::System::Type* Method_1_DBAADCCDBE5B4E3B()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_DBAADCCDBE5B4E3B_OFFSET))(this);
	}

	::Class_1_0AD6129525BF5F86* Method_1_1BAAF20C60E3BE61(::RPG::GameCore::NewProjectileConfig* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::Class_3_98C806684F7CC372_14* a4, ::Class_1_2B8E0B4950FE44E7* a5, ::Class_3_98C806684F7CC372_15* a6, ::System::Boolean a7)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::RPG::GameCore::NewProjectileConfig*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_14*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_15*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_1BAAF20C60E3BE61_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Class_1_0AD6129525BF5F86* Method_1_FB51ED6FD63B44C1(::RPG::GameCore::ProjectileData* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::Class_3_98C806684F7CC372_14* a4, ::Class_1_2B8E0B4950FE44E7* a5, ::Class_3_98C806684F7CC372_15* a6, ::System::Boolean a7)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_14*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_15*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_FB51ED6FD63B44C1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
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

	::Class_0_16E4307DCC419505_417* Method_1_D41F2EAAA87E2BFD()
	{
		return ((::Class_0_16E4307DCC419505_417*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_D41F2EAAA87E2BFD_OFFSET))(this);
	}

	::System::Void Method_1_CC9C9A9047B24E05(::Class_0_16E4307DCC419505_417* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_417*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_CC9C9A9047B24E05_OFFSET))(this, a1);
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
