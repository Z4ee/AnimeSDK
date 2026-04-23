#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RelicScoreCalculatorConfig.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicAffixType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1045;
class Class_1_843E9EA2A1BBF274;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicShowPropertyData; }
namespace RPG::Client::RelicSmartSuit { class MainPropertyMatchChecker; }
namespace RPG::GameCore { class RelicMainAffixAvatarValueRow; }
namespace RPG::GameCore { class RelicSubAffixAvatarValueRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_61CCFA89E19EDD2D_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x97E5D20)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_00774B5C8637A4AD_OFFSET UNITYSDK_OFFSET(0x97E5D30)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_00D1131E221027A5_OFFSET UNITYSDK_OFFSET(0x97E6500)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_061739BCA68F2B1B_1_OFFSET UNITYSDK_OFFSET(0x97E6EB0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_061739BCA68F2B1B_OFFSET UNITYSDK_OFFSET(0x97E6C80)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_1531AF6FB28345B4_OFFSET UNITYSDK_OFFSET(0x97E7190)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_4ECB529DECFD6AEC_OFFSET UNITYSDK_OFFSET(0x97E6000)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_5CF5175CFF5F10AC_OFFSET UNITYSDK_OFFSET(0x97E72B0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_6CBB61A49BB2C474_OFFSET UNITYSDK_OFFSET(0x97E7540)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_745C27D4BCAC384D_OFFSET UNITYSDK_OFFSET(0x97E6150)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_8CD3A05EB683B1A7_1_OFFSET UNITYSDK_OFFSET(0x97E73D0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_8CD3A05EB683B1A7_OFFSET UNITYSDK_OFFSET(0x97E6880)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_AA7047F594B773AE_OFFSET UNITYSDK_OFFSET(0x97E6A30)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_B835618663ACD999_OFFSET UNITYSDK_OFFSET(0x97E6340)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_EB1B0623B4BDD44D_OFFSET UNITYSDK_OFFSET(0x97E70E0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_EDA7579EB3F05B46_OFFSET UNITYSDK_OFFSET(0x97E61B0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_EF6A3193F3CB74FA_OFFSET UNITYSDK_OFFSET(0x97E67D0)
#define CLASS_1_61CCFA89E19EDD2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x97E7590)
#define CLASS_1_61CCFA89E19EDD2D__CTOR_OFFSET UNITYSDK_OFFSET(0x97E5DC0)

inline static constexpr unsigned int Class_1_61CCFA89E19EDD2D_TypeDefinitionIndex = 68697;

class Class_1_61CCFA89E19EDD2D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61CCFA89E19EDD2D_TypeDefinitionIndex)->GetStaticField(0xD8A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AttackDamageType>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AttackDamageType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61CCFA89E19EDD2D_TypeDefinitionIndex)->GetStaticField(0xD8A8);
	}
	::RPG::Client::RelicSmartSuit::MainPropertyMatchChecker* Field_1_5; // 0x10
	::RPG::GameCore::RelicSubAffixAvatarValueRow* Field_1_4; // 0x18
	::RPG::GameCore::RelicMainAffixAvatarValueRow* Field_1_3; // 0x20
	::Class_0_16E4307DCC419505_1045* Field_1_2; // 0x28
	::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig _Config_k__BackingField; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_1045* a1, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1045*, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D__CCTOR_OFFSET))();
	}

	::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig get_Config()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_GET_CONFIG_OFFSET))(this);
	}

	static ::Class_1_61CCFA89E19EDD2D* Method_1_00774B5C8637A4AD(::Class_0_16E4307DCC419505_1045* a1, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig a2)
	{
		return ((::Class_1_61CCFA89E19EDD2D*(*)(::Class_0_16E4307DCC419505_1045*, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_00774B5C8637A4AD_OFFSET))(a1, a2);
	}

	::Class_1_843E9EA2A1BBF274* Method_1_4ECB529DECFD6AEC(::RPG::Client::RelicItemData* a1)
	{
		return ((::Class_1_843E9EA2A1BBF274*(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_4ECB529DECFD6AEC_OFFSET))(this, a1);
	}

	::System::Single Method_1_745C27D4BCAC384D(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_745C27D4BCAC384D_OFFSET))(this, a1);
	}

	::System::Single Method_1_00D1131E221027A5(::RPG::GameCore::AvatarPropertyType a1, ::RPG::Client::RelicItemData* a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_00D1131E221027A5_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_8CD3A05EB683B1A7(::RPG::GameCore::RelicAffixType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::RelicAffixType))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_8CD3A05EB683B1A7_OFFSET))(this, a1);
	}

	::System::Single Method_1_EDA7579EB3F05B46(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_EDA7579EB3F05B46_OFFSET))(this, a1);
	}

	::System::Single Method_1_EB1B0623B4BDD44D(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicShowPropertyData* a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicShowPropertyData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_EB1B0623B4BDD44D_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_1531AF6FB28345B4(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicShowPropertyData* a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicShowPropertyData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_1531AF6FB28345B4_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_5CF5175CFF5F10AC(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_5CF5175CFF5F10AC_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_8CD3A05EB683B1A7_1(::RPG::GameCore::RelicAffixType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::RelicAffixType))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_8CD3A05EB683B1A7_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6CBB61A49BB2C474(::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_6CBB61A49BB2C474_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_EF6A3193F3CB74FA(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_EF6A3193F3CB74FA_OFFSET))(this, a1);
	}

	::System::Single Method_1_AA7047F594B773AE(::RPG::GameCore::AvatarPropertyType a1, ::System::UInt32 a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_AA7047F594B773AE_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_061739BCA68F2B1B(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_061739BCA68F2B1B_OFFSET))(this, a1);
	}

	::System::Single Method_1_061739BCA68F2B1B_1(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_061739BCA68F2B1B_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_B835618663ACD999(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_B835618663ACD999_OFFSET))(this, a1);
	}
};
