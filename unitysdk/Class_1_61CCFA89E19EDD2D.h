#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/RelicScoreCalculatorConfig.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicAffixType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1199;
class Class_1_CDFB27773AA3AA22;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicShowPropertyData; }
namespace RPG::Client::RelicSmartSuit { class MainPropertyMatchChecker; }
namespace RPG::GameCore { class RelicMainAffixAvatarValueRow; }
namespace RPG::GameCore { class RelicSubAffixAvatarValueRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_61CCFA89E19EDD2D_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x154CB2C0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_00774B5C8637A4AD_OFFSET UNITYSDK_OFFSET(0x154CB2D0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_061739BCA68F2B1B_OFFSET UNITYSDK_OFFSET(0x154CC070)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_0CEEA88BB1A12EBB_OFFSET UNITYSDK_OFFSET(0x154CC320)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_0FA8252577BC8F9E_1_OFFSET UNITYSDK_OFFSET(0x154CC590)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_0FA8252577BC8F9E_OFFSET UNITYSDK_OFFSET(0x154CBF80)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_30627E9B30ED700E_OFFSET UNITYSDK_OFFSET(0x154CBA00)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_4ECB529DECFD6AEC_OFFSET UNITYSDK_OFFSET(0x154CB640)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_6CBB61A49BB2C474_OFFSET UNITYSDK_OFFSET(0x154CC670)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_9F2083B826458A75_OFFSET UNITYSDK_OFFSET(0x154CB7F0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_B90C05B6DE91FF5F_OFFSET UNITYSDK_OFFSET(0x154CC410)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_C2B5A8C303F87C6E_OFFSET UNITYSDK_OFFSET(0x154CBC00)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_EF6A3193F3CB74FA_OFFSET UNITYSDK_OFFSET(0x154CBED0)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_F922E6C4176C279E_OFFSET UNITYSDK_OFFSET(0x154CB790)
#define CLASS_1_61CCFA89E19EDD2D_METHOD_1_F95954774A623827_OFFSET UNITYSDK_OFFSET(0x154CC290)
#define CLASS_1_61CCFA89E19EDD2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x154CC6C0)
#define CLASS_1_61CCFA89E19EDD2D__CTOR_OFFSET UNITYSDK_OFFSET(0x154CB360)

inline static constexpr unsigned int Class_1_61CCFA89E19EDD2D_TypeDefinitionIndex = 74332;

class Class_1_61CCFA89E19EDD2D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType>** StaticGet_IBNAIAKECIE()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61CCFA89E19EDD2D_TypeDefinitionIndex)->GetStaticField(0x5E950);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AttackDamageType>** StaticGet_CACFFENNFHD()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AttackDamageType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61CCFA89E19EDD2D_TypeDefinitionIndex)->GetStaticField(0x5E958);
	}
	::RPG::Client::RelicSmartSuit::MainPropertyMatchChecker* FDAJDAPOCCN; // 0x10
	::Class_0_16E4307DCC419505_1199* GANLOCFFMEF; // 0x18
	::RPG::GameCore::RelicMainAffixAvatarValueRow* NFGBGNPFFOC; // 0x20
	::RPG::GameCore::RelicSubAffixAvatarValueRow* LKODOEBPKKA; // 0x28
	::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig _Config_k__BackingField; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_1199* a1, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1199*, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D__CCTOR_OFFSET))();
	}

	::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig get_Config()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_GET_CONFIG_OFFSET))(this);
	}

	static ::Class_1_61CCFA89E19EDD2D* Method_1_00774B5C8637A4AD(::Class_0_16E4307DCC419505_1199* a1, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig a2)
	{
		return ((::Class_1_61CCFA89E19EDD2D*(*)(::Class_0_16E4307DCC419505_1199*, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_00774B5C8637A4AD_OFFSET))(a1, a2);
	}

	::Class_1_CDFB27773AA3AA22* Method_1_4ECB529DECFD6AEC(::RPG::Client::RelicItemData* a1)
	{
		return ((::Class_1_CDFB27773AA3AA22*(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_4ECB529DECFD6AEC_OFFSET))(this, a1);
	}

	::System::Single Method_1_F922E6C4176C279E(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_F922E6C4176C279E_OFFSET))(this, a1);
	}

	::System::Single Method_1_C2B5A8C303F87C6E(::RPG::GameCore::AvatarPropertyType a1, ::RPG::Client::RelicItemData* a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_C2B5A8C303F87C6E_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_0FA8252577BC8F9E(::RPG::GameCore::RelicAffixType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::RelicAffixType))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_0FA8252577BC8F9E_OFFSET))(this, a1);
	}

	::System::Single Method_1_9F2083B826458A75(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_9F2083B826458A75_OFFSET))(this, a1);
	}

	::System::Single Method_1_F95954774A623827(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicShowPropertyData* a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicShowPropertyData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_F95954774A623827_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_0CEEA88BB1A12EBB(::RPG::Client::RelicItemData* a1, ::RPG::Client::RelicShowPropertyData* a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicShowPropertyData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_0CEEA88BB1A12EBB_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_B90C05B6DE91FF5F(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_B90C05B6DE91FF5F_OFFSET))(this, a1);
	}

	::System::Single Method_1_0FA8252577BC8F9E_1(::RPG::GameCore::RelicAffixType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::RelicAffixType))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_0FA8252577BC8F9E_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6CBB61A49BB2C474(::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicScoreCalculatorConfig))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_6CBB61A49BB2C474_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_EF6A3193F3CB74FA(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_EF6A3193F3CB74FA_OFFSET))(this, a1);
	}

	::System::Single Method_1_061739BCA68F2B1B(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_061739BCA68F2B1B_OFFSET))(this, a1);
	}

	::System::Single Method_1_30627E9B30ED700E(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_61CCFA89E19EDD2D_METHOD_1_30627E9B30ED700E_OFFSET))(this, a1);
	}
};
