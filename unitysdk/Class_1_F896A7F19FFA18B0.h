#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_938C223DA5C0C9C7;
class Class_1_B587CAF66AB56ABD;
class Class_2_80F8710F847F1248;
class Class_3_F4528A5C0F861AF2;
namespace RPG::GameCore { class ElfBehaviorStateConfig; }
namespace RPG::GameCore { class ElfBuff; }
namespace RPG::GameCore { class ElfBuffConfig; }
namespace RPG::GameCore { class ElfDailyWaveConfig; }
namespace RPG::GameCore { class ElfRestaurantGameConfig; }
namespace RPG::GameCore { class ElfSpecialEventConfig; }
namespace RPG::GameCore { class ElfSuperEventTypeConfig; }
namespace RPG::GameCore { class ElfWaveCustomerConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class LittleGameStateTreeConfig; }
namespace RPG::GameCore { class RestaurantEventRewardRow; }
namespace RPG::GameCore { class RestaurantSpecialBubbleRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F896A7F19FFA18B0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C97240)
#define CLASS_1_F896A7F19FFA18B0_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x18C97C90)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_265045B8E51327D0_OFFSET UNITYSDK_OFFSET(0x18C96810)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_5AEAA72641C1FC1E_OFFSET UNITYSDK_OFFSET(0x18C97540)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_6B7D01FB64EF22E6_OFFSET UNITYSDK_OFFSET(0x18C97700)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x18C96E80)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0x18C96760)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x18C96C80)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_9216B801ACD0B564_OFFSET UNITYSDK_OFFSET(0x18C96450)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x18C96B80)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18C96A80)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_C2992E3B105F7E09_OFFSET UNITYSDK_OFFSET(0x18C97660)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x18C95D40)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_E111A6E980D49A23_OFFSET UNITYSDK_OFFSET(0x18C97A70)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_E68AEBF88F1494A8_OFFSET UNITYSDK_OFFSET(0x18C97BF0)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_EB644D9FEE2FE9AD_OFFSET UNITYSDK_OFFSET(0x18C978B0)
#define CLASS_1_F896A7F19FFA18B0_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x18C97CA0)
#define CLASS_1_F896A7F19FFA18B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C97CB0)
#define CLASS_1_F896A7F19FFA18B0__CTOR_OFFSET UNITYSDK_OFFSET(0x18C95B20)

inline static constexpr unsigned int Class_1_F896A7F19FFA18B0_TypeDefinitionIndex = 76781;

class Class_1_F896A7F19FFA18B0 : public ::System::Object
{
public:
	static ::System::String** StaticGet_BKEODCGPDBE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F896A7F19FFA18B0_TypeDefinitionIndex)->GetStaticField(0x5E8D0);
	}
	static ::System::String** StaticGet_CMDFEEFNFIP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F896A7F19FFA18B0_TypeDefinitionIndex)->GetStaticField(0x5E8D8);
	}
	static ::System::String** StaticGet_CPCJDNNAKCJ()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F896A7F19FFA18B0_TypeDefinitionIndex)->GetStaticField(0x5E8E0);
	}
	static ::System::String** StaticGet_GKCCFPDDFML()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F896A7F19FFA18B0_TypeDefinitionIndex)->GetStaticField(0x5E8E8);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RestaurantSuperEventType, ::RPG::GameCore::LittleGameEntityConfig*>* CKKDCOPDHHK; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* MFPIDNOGPOF; // 0x18
	::RPG::GameCore::ElfDailyWaveConfig* GPCPFJNGAJJ; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ElfBehaviorStateConfig*>* GIGGFDAHCAC; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* LLMDPDFEFNE; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::RestaurantSpecialBubbleRow*>*>* LJKKGBBEIMP; // 0x38
	::RPG::GameCore::ElfBuffConfig* MBOKKHFKBAJ; // 0x40
	::RPG::GameCore::LittleGameStateTreeConfig* IELHPOFHKPG; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* GOPEKIINHHD; // 0x50
	::RPG::GameCore::ElfRestaurantGameConfig* _GameConfig_k__BackingField; // 0x58
	::Class_2_80F8710F847F1248* EEFMDEHLLFI; // 0x60
	::Class_1_938C223DA5C0C9C7* HIHNBLKIAAL; // 0x68
	::RPG::GameCore::LittleGameStateTreeConfig* LDJLEMJMLJJ; // 0x70
	::RPG::GameCore::LittleGameStateTreeConfig* OFGOJIFBLBM; // 0x78
	::RPG::GameCore::LittleGameLevelConfig* CLKEPOJFDPD; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_B587CAF66AB56ABD*>* HJMNMBENFEN; // 0x88
	::Class_3_F4528A5C0F861AF2* PDENFEFCAGN; // 0x90
	::RPG::GameCore::ElfBehaviorStateConfig* HLFCGABNIKO; // 0x98
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RestaurantNormalEventType, ::RPG::GameCore::RestaurantEventRewardRow*>* OPDJKHPKKNG; // 0xA0
	::System::UInt32 KJHIDGFLLGC; // 0xA8

	::System::Void _ctor(::Class_3_F4528A5C0F861AF2* a1, ::Class_2_80F8710F847F1248* a2, ::RPG::GameCore::LittleGameLevelConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F4528A5C0F861AF2*, ::Class_2_80F8710F847F1248*, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_5AEAA72641C1FC1E(::System::String* a1, ::RPG::GameCore::ElfBuff*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::ElfBuff*&))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_METHOD_1_5AEAA72641C1FC1E_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ElfSuperEventTypeConfig* Method_1_C2992E3B105F7E09(::RPG::GameCore::RestaurantSuperEventType a1)
	{
		return ((::RPG::GameCore::ElfSuperEventTypeConfig*(*)(::PVOID, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_METHOD_1_C2992E3B105F7E09_OFFSET))(this, a1);
	}

	::RPG::GameCore::ElfWaveCustomerConfig* Method_1_6B7D01FB64EF22E6()
	{
		return ((::RPG::GameCore::ElfWaveCustomerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_METHOD_1_6B7D01FB64EF22E6_OFFSET))(this);
	}

	::RPG::GameCore::ElfBehaviorStateConfig* Method_1_EB644D9FEE2FE9AD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ElfBehaviorStateConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_METHOD_1_EB644D9FEE2FE9AD_OFFSET))(this, a1);
	}

	::RPG::GameCore::ElfSpecialEventConfig* Method_1_E111A6E980D49A23(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ElfSpecialEventConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_METHOD_1_E111A6E980D49A23_OFFSET))(this, a1);
	}

	::RPG::GameCore::ElfSpecialEventConfig* Method_1_E68AEBF88F1494A8(::System::String* a1)
	{
		return ((::RPG::GameCore::ElfSpecialEventConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_METHOD_1_E68AEBF88F1494A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_METHOD_1_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::System::Void Method_1_9216B801ACD0B564()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_METHOD_1_9216B801ACD0B564_OFFSET))(this);
	}

	::System::Void Method_1_8F537CE539CF0103()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_METHOD_1_8F537CE539CF0103_OFFSET))(this);
	}

	::System::Void Method_1_265045B8E51327D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_METHOD_1_265045B8E51327D0_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::RPG::GameCore::ElfRestaurantGameConfig* get_GameConfig()
	{
		return ((::RPG::GameCore::ElfRestaurantGameConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_GET_GAMECONFIG_OFFSET))(this);
	}

	::System::Void set_GameConfig(::RPG::GameCore::ElfRestaurantGameConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElfRestaurantGameConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F896A7F19FFA18B0_SET_GAMECONFIG_OFFSET))(this, a1);
	}
};
