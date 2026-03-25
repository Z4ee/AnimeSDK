#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicStringInjection.h"
#include "unitysdk/RPG/GameCore/AbilityInstanceState.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/UseAbilityOption.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_338;
class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
class Class_1_2CAAA2FDF9170110;
class Class_1_5F51D4049EA87B7B;
class Class_3_5775A4FEC79026BC;
class Class_3_98C806684F7CC372_7;
class Class_3_98C806684F7CC372_8;
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

#define CLASS_1_A2D8E5AB4B623162_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BC4B40)
#define CLASS_1_A2D8E5AB4B623162_GET_ABILITYGLOBALUSEID_OFFSET UNITYSDK_OFFSET(0x10BC7390)
#define CLASS_1_A2D8E5AB4B623162_GET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0x10BC7350)
#define CLASS_1_A2D8E5AB4B623162_GET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0x10BC7370)
#define CLASS_1_A2D8E5AB4B623162_GET_ISINTRIGGER_OFFSET UNITYSDK_OFFSET(0x10BC7330)
#define CLASS_1_A2D8E5AB4B623162_GET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0x10BC7310)
#define CLASS_1_A2D8E5AB4B623162_GET_TAG_OFFSET UNITYSDK_OFFSET(0x10BC73D0)
#define CLASS_1_A2D8E5AB4B623162_GET_TARGETLISTINDEX_OFFSET UNITYSDK_OFFSET(0x10BC72F0)
#define CLASS_1_A2D8E5AB4B623162_GET_TIMEFROMSTART_OFFSET UNITYSDK_OFFSET(0x10BC75C0)
#define CLASS_1_A2D8E5AB4B623162_GET_USEOPTION_OFFSET UNITYSDK_OFFSET(0x10BC75E0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x10BC73B0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_1F21C95ADDAECD68_OFFSET UNITYSDK_OFFSET(0x10BC5990)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_1FC86D2BFE10815E_OFFSET UNITYSDK_OFFSET(0x10BC6B40)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x10BC6C30)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_27FE160831643A26_OFFSET UNITYSDK_OFFSET(0x10BC72D0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10BC7210)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_47D88335E404DE12_OFFSET UNITYSDK_OFFSET(0x10BC74D0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_6764CB4AA84396FC_OFFSET UNITYSDK_OFFSET(0x10BC68E0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_68FB99B33E7C7AEB_OFFSET UNITYSDK_OFFSET(0x10BC7530)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x10BC4FB0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_70ABAF7F0B6E54DF_OFFSET UNITYSDK_OFFSET(0x10BC72E0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_8377BC0DCBA8CDB6_OFFSET UNITYSDK_OFFSET(0x10BC7400)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_84952E9528E25353_OFFSET UNITYSDK_OFFSET(0x10BC70E0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x10BC4DC0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_8C704EC832EDEFC8_1_OFFSET UNITYSDK_OFFSET(0x10BC6670)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x10BC6610)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_8E37FF4EF1D584B4_OFFSET UNITYSDK_OFFSET(0x10BC6C70)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_918892D3041414DB_OFFSET UNITYSDK_OFFSET(0x10BC6F30)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_9190ADFC6244BA35_OFFSET UNITYSDK_OFFSET(0x10BC6E20)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_93A145ED6F5562B4_OFFSET UNITYSDK_OFFSET(0x10BC7000)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10BC4E80)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_9BADE3E301981C8B_OFFSET UNITYSDK_OFFSET(0x10BC4F00)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x10BC53D0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_A758883D9873F01E_OFFSET UNITYSDK_OFFSET(0x10BC5AB0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_A8D78AA5E0EAC774_OFFSET UNITYSDK_OFFSET(0x10BC73F0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_A9B16756059F6D47_OFFSET UNITYSDK_OFFSET(0x10BC6A40)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x10BC72C0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_C5BCCB84D9F819F3_OFFSET UNITYSDK_OFFSET(0x10BC6F40)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_C6BD7598FB8E5123_OFFSET UNITYSDK_OFFSET(0x10BC5660)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_C783EE0A4CAB17F8_OFFSET UNITYSDK_OFFSET(0x10BC5950)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10BC4D70)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_CA94882F410B6995_OFFSET UNITYSDK_OFFSET(0x10BC49A0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_CC9C9A9047B24E05_OFFSET UNITYSDK_OFFSET(0x10BC7470)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_D41F2EAAA87E2BFD_OFFSET UNITYSDK_OFFSET(0x10BC7410)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_DAC6E1EE61939DC7_OFFSET UNITYSDK_OFFSET(0x10BC66D0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_DBAADCCDBE5B4E3B_OFFSET UNITYSDK_OFFSET(0x10BC6720)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_DF79B89DB8ADD51C_OFFSET UNITYSDK_OFFSET(0x10BC6780)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_F2E045B3786178E0_OFFSET UNITYSDK_OFFSET(0x10BC56F0)
#define CLASS_1_A2D8E5AB4B623162_METHOD_1_F4E96B4DEA400C5A_OFFSET UNITYSDK_OFFSET(0x10BC5150)
#define CLASS_1_A2D8E5AB4B623162_SET_ABILITYGLOBALUSEID_OFFSET UNITYSDK_OFFSET(0x10BC73A0)
#define CLASS_1_A2D8E5AB4B623162_SET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0x10BC7360)
#define CLASS_1_A2D8E5AB4B623162_SET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0x10BC7380)
#define CLASS_1_A2D8E5AB4B623162_SET_ISINTRIGGER_OFFSET UNITYSDK_OFFSET(0x10BC7340)
#define CLASS_1_A2D8E5AB4B623162_SET_SKILLPOINTENTITY_OFFSET UNITYSDK_OFFSET(0x10BC7320)
#define CLASS_1_A2D8E5AB4B623162_SET_TAG_OFFSET UNITYSDK_OFFSET(0x10BC73E0)
#define CLASS_1_A2D8E5AB4B623162_SET_TARGETLISTINDEX_OFFSET UNITYSDK_OFFSET(0x10BC7300)
#define CLASS_1_A2D8E5AB4B623162_SET_TIMEFROMSTART_OFFSET UNITYSDK_OFFSET(0x10BC75D0)
#define CLASS_1_A2D8E5AB4B623162_SET_USEOPTION_OFFSET UNITYSDK_OFFSET(0x10BC75F0)
#define CLASS_1_A2D8E5AB4B623162__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC4540)

inline static constexpr unsigned int Class_1_A2D8E5AB4B623162_TypeDefinitionIndex = 43484;

class Class_1_A2D8E5AB4B623162 : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* Field_1_18; // 0x10
	::Class_1_2CAAA2FDF9170110* _DynamicValues_k__BackingField; // 0x18
	::RPG::GameCore::AbilityConfig* Field_1_10; // 0x20
	::RPG::GameCore::GameEntity* _SkillPointEntity_k__BackingField; // 0x28
	::RPG::GameCore::GameEntity* Field_1_17; // 0x30
	::Class_3_5775A4FEC79026BC* Field_1_14; // 0x38
	::Class_3_5775A4FEC79026BC* Field_1_16; // 0x40
	::System::Collections::Generic::List_1<::Class_1_0AD6129525BF5F86*>* Field_1_13; // 0x48
	::RPG::GameCore::AbilityComponent* Field_1_9; // 0x50
	::RPG::GameCore::GameEntityList* Field_1_12; // 0x58
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* _DynamicStrings_k__BackingField; // 0x60
	::RPG::GameCore::JsonEnum* _Tag_k__BackingField; // 0x68
	::Class_3_5775A4FEC79026BC* Field_1_15; // 0x70
	::System::Int32 _TargetListIndex_k__BackingField; // 0x78
	::System::UInt32 _AbilityGlobalUseId_k__BackingField; // 0x7C
	::System::Single _TimeFromStart_k__BackingField; // 0x80
	::RPG::GameCore::AbilityInstanceState Field_1_11; // 0x84
	::RPG::GameCore::UseAbilityOption _UseOption_k__BackingField; // 0x88
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

	::System::Void Method_1_F4E96B4DEA400C5A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_F4E96B4DEA400C5A_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_9F8F6511E8EF1235_OFFSET))(this);
	}

	::System::Void Method_1_C6BD7598FB8E5123()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_C6BD7598FB8E5123_OFFSET))(this);
	}

	::System::Void Method_1_F2E045B3786178E0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_F2E045B3786178E0_OFFSET))(this, a1);
	}

	::RPG::GameCore::AbilityComponent* Method_1_C783EE0A4CAB17F8()
	{
		return ((::RPG::GameCore::AbilityComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_C783EE0A4CAB17F8_OFFSET))(this);
	}

	::System::Void Method_1_1F21C95ADDAECD68(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::UseAbilityOption a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::UseAbilityOption))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_1F21C95ADDAECD68_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_1_8C704EC832EDEFC8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_8C704EC832EDEFC8_1_OFFSET))(this);
	}

	::RPG::GameCore::AbilityInstanceState Method_1_DAC6E1EE61939DC7()
	{
		return ((::RPG::GameCore::AbilityInstanceState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_DAC6E1EE61939DC7_OFFSET))(this);
	}

	::System::Type* Method_1_DBAADCCDBE5B4E3B()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_DBAADCCDBE5B4E3B_OFFSET))(this);
	}

	::Class_1_0AD6129525BF5F86* Method_1_DF79B89DB8ADD51C(::RPG::GameCore::NewProjectileConfig* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::Class_3_98C806684F7CC372_7* a4, ::Class_1_2B8E0B4950FE44E7* a5, ::Class_3_98C806684F7CC372_8* a6, ::System::Boolean a7)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::RPG::GameCore::NewProjectileConfig*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_7*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_DF79B89DB8ADD51C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Class_1_0AD6129525BF5F86* Method_1_6764CB4AA84396FC(::RPG::GameCore::ProjectileData* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::Class_3_98C806684F7CC372_7* a4, ::Class_1_2B8E0B4950FE44E7* a5, ::Class_3_98C806684F7CC372_8* a6, ::System::Boolean a7)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_7*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_6764CB4AA84396FC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Class_1_0AD6129525BF5F86* Method_1_A9B16756059F6D47(::RPG::GameCore::ProjectileData* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::Class_3_98C806684F7CC372_7* a4, ::Class_1_2B8E0B4950FE44E7* a5, ::Class_3_98C806684F7CC372_8* a6, ::System::Boolean a7, ::RPG::GameCore::NewProjectileConfig* a8)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_7*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_8*, ::System::Boolean, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_A9B16756059F6D47_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_1_1FC86D2BFE10815E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_1FC86D2BFE10815E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_0AD6129525BF5F86*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0AD6129525BF5F86*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	::System::Void Method_1_8E37FF4EF1D584B4(::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicStringInjection>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicStringInjection>*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_8E37FF4EF1D584B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_9190ADFC6244BA35(::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicFloatInjection>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::AbilityDynamicFloatInjection>*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_9190ADFC6244BA35_OFFSET))(this, a1);
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

	::System::Void Method_1_A758883D9873F01E(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_A758883D9873F01E_OFFSET))(this, a1);
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

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
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

	::System::Void set_TargetListIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_TARGETLISTINDEX_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_SkillPointEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_GET_SKILLPOINTENTITY_OFFSET))(this);
	}

	::System::Void set_SkillPointEntity(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_SKILLPOINTENTITY_OFFSET))(this, value);
	}

	::System::Boolean get_IsInTrigger()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_GET_ISINTRIGGER_OFFSET))(this);
	}

	::System::Void set_IsInTrigger(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_ISINTRIGGER_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* get_DynamicStrings()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_GET_DYNAMICSTRINGS_OFFSET))(this);
	}

	::System::Void set_DynamicStrings(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_DYNAMICSTRINGS_OFFSET))(this, value);
	}

	::Class_1_2CAAA2FDF9170110* get_DynamicValues()
	{
		return ((::Class_1_2CAAA2FDF9170110*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_GET_DYNAMICVALUES_OFFSET))(this);
	}

	::System::Void set_DynamicValues(::Class_1_2CAAA2FDF9170110* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CAAA2FDF9170110*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_DYNAMICVALUES_OFFSET))(this, value);
	}

	::System::UInt32 get_AbilityGlobalUseId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_GET_ABILITYGLOBALUSEID_OFFSET))(this);
	}

	::System::Void set_AbilityGlobalUseId(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_ABILITYGLOBALUSEID_OFFSET))(this, value);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::RPG::GameCore::JsonEnum* get_Tag()
	{
		return ((::RPG::GameCore::JsonEnum*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_GET_TAG_OFFSET))(this);
	}

	::System::Void set_Tag(::RPG::GameCore::JsonEnum* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_TAG_OFFSET))(this, value);
	}

	::RPG::GameCore::AbilityComponent* Method_1_A8D78AA5E0EAC774()
	{
		return ((::RPG::GameCore::AbilityComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_A8D78AA5E0EAC774_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Method_1_8377BC0DCBA8CDB6()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_8377BC0DCBA8CDB6_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_338* Method_1_D41F2EAAA87E2BFD()
	{
		return ((::Class_0_16E4307DCC419505_338*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_D41F2EAAA87E2BFD_OFFSET))(this);
	}

	::System::Void Method_1_CC9C9A9047B24E05(::Class_0_16E4307DCC419505_338* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_338*))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_METHOD_1_CC9C9A9047B24E05_OFFSET))(this, a1);
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

	::System::Void set_TimeFromStart(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_TIMEFROMSTART_OFFSET))(this, value);
	}

	::RPG::GameCore::UseAbilityOption get_UseOption()
	{
		return ((::RPG::GameCore::UseAbilityOption(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_GET_USEOPTION_OFFSET))(this);
	}

	::System::Void set_UseOption(::RPG::GameCore::UseAbilityOption value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UseAbilityOption))((::PBYTE)hIl2Cpp + CLASS_1_A2D8E5AB4B623162_SET_USEOPTION_OFFSET))(this, value);
	}
};
