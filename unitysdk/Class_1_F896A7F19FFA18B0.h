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

#define CLASS_1_F896A7F19FFA18B0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E1FDC0)
#define CLASS_1_F896A7F19FFA18B0_GET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x15E20810)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_265045B8E51327D0_OFFSET UNITYSDK_OFFSET(0x15E1F380)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_5AEAA72641C1FC1E_OFFSET UNITYSDK_OFFSET(0x15E200B0)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_6B7D01FB64EF22E6_OFFSET UNITYSDK_OFFSET(0x15E20270)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x15E1FA00)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_8F537CE539CF0103_OFFSET UNITYSDK_OFFSET(0x15E1F2D0)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x15E1F800)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_9216B801ACD0B564_OFFSET UNITYSDK_OFFSET(0x15E1EFC0)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x15E1F700)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15E1F600)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_C2992E3B105F7E09_OFFSET UNITYSDK_OFFSET(0x15E201D0)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x15E1E8B0)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_E111A6E980D49A23_OFFSET UNITYSDK_OFFSET(0x15E205F0)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_E68AEBF88F1494A8_OFFSET UNITYSDK_OFFSET(0x15E20770)
#define CLASS_1_F896A7F19FFA18B0_METHOD_1_EB644D9FEE2FE9AD_OFFSET UNITYSDK_OFFSET(0x15E20420)
#define CLASS_1_F896A7F19FFA18B0_SET_GAMECONFIG_OFFSET UNITYSDK_OFFSET(0x15E20820)
#define CLASS_1_F896A7F19FFA18B0__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E20830)
#define CLASS_1_F896A7F19FFA18B0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1E690)

inline static constexpr unsigned int Class_1_F896A7F19FFA18B0_TypeDefinitionIndex = 73302;

class Class_1_F896A7F19FFA18B0 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F896A7F19FFA18B0_TypeDefinitionIndex)->GetStaticField(0xDDC0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F896A7F19FFA18B0_TypeDefinitionIndex)->GetStaticField(0xDDC8);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F896A7F19FFA18B0_TypeDefinitionIndex)->GetStaticField(0xDDD0);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F896A7F19FFA18B0_TypeDefinitionIndex)->GetStaticField(0xDDD8);
	}
	::RPG::GameCore::ElfRestaurantGameConfig* _GameConfig_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* Field_1_5; // 0x18
	::RPG::GameCore::ElfBuffConfig* Field_1_6; // 0x20
	::RPG::GameCore::ElfBehaviorStateConfig* Field_1_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RestaurantSuperEventType, ::RPG::GameCore::LittleGameEntityConfig*>* Field_1_8; // 0x30
	::Class_2_80F8710F847F1248* Field_1_9; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* Field_1_10; // 0x40
	::RPG::GameCore::LittleGameStateTreeConfig* Field_1_11; // 0x48
	::RPG::GameCore::LittleGameStateTreeConfig* Field_1_12; // 0x50
	::RPG::GameCore::ElfDailyWaveConfig* Field_1_13; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* Field_1_14; // 0x60
	::Class_1_938C223DA5C0C9C7* Field_1_15; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_B587CAF66AB56ABD*>* Field_1_16; // 0x70
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RestaurantNormalEventType, ::RPG::GameCore::RestaurantEventRewardRow*>* Field_1_17; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ElfBehaviorStateConfig*>* Field_1_18; // 0x80
	::RPG::GameCore::LittleGameLevelConfig* Field_1_19; // 0x88
	::RPG::GameCore::LittleGameStateTreeConfig* Field_1_20; // 0x90
	::Class_3_F4528A5C0F861AF2* Field_1_21; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::RestaurantSpecialBubbleRow*>*>* Field_1_22; // 0xA0
	::System::UInt32 Field_1_23; // 0xA8

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
