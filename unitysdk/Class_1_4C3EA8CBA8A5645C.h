#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ElfRestaurant/SIMEmotionState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ElfBehaviorStateType.h"
#include "unitysdk/RPG/GameCore/ElfProperty.h"
#include "unitysdk/RPG/GameCore/ElfTargetType.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/RestaurantDynamicValueType.h"
#include "unitysdk/RPG/GameCore/RestaurantNormalEventType.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_32B92D1867E3C418;
class Class_1_F896A7F19FFA18B0;
class Class_2_43D1AA62A6D00FFF;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantEventParams; }
namespace RPG::GameCore { class ElfBehaviorStateContentItem; }
namespace RPG::GameCore { class ElfBehaviorStateEmojiItem; }
namespace RPG::GameCore { class ElfBehaviorStateItem; }
namespace RPG::GameCore { class ElfBuff; }
namespace RPG::GameCore { class ElfPropertyModifier; }
namespace RPG::GameCore { class ElfWaveCustomerConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_087FFA4E2EF101BB_OFFSET UNITYSDK_OFFSET(0x95117E0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_099B5F018AFCBEEB_OFFSET UNITYSDK_OFFSET(0x95040B0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_0A37C445B2C9D335_OFFSET UNITYSDK_OFFSET(0x950F140)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_0D13C86B964761EF_1_OFFSET UNITYSDK_OFFSET(0x9510BE0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_0D13C86B964761EF_OFFSET UNITYSDK_OFFSET(0x9510AE0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_0D959FF260B17021_OFFSET UNITYSDK_OFFSET(0x9512AC0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_18BDE1E9B35E197E_1_OFFSET UNITYSDK_OFFSET(0x950FD50)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_18BDE1E9B35E197E_OFFSET UNITYSDK_OFFSET(0x950F2B0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_2818B682042525E5_OFFSET UNITYSDK_OFFSET(0x9513380)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_285139CF2057D827_OFFSET UNITYSDK_OFFSET(0x95023B0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_2C4CACFCB85F415D_OFFSET UNITYSDK_OFFSET(0x9512F40)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_2CF7730C46CAA5BB_OFFSET UNITYSDK_OFFSET(0x950D390)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_355F1FA4F195A34A_OFFSET UNITYSDK_OFFSET(0x95022F0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_383D782CE381494B_OFFSET UNITYSDK_OFFSET(0x950D7A0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_3BFFE341217F7AF3_OFFSET UNITYSDK_OFFSET(0x950D2E0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_45A75B2F0BB0B141_OFFSET UNITYSDK_OFFSET(0x9511BB0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_49F0D97618C02893_OFFSET UNITYSDK_OFFSET(0x950E790)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_5455C42C8DC1139B_OFFSET UNITYSDK_OFFSET(0x950DA70)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_6133764619ACBC4F_OFFSET UNITYSDK_OFFSET(0x950D250)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_67D7A937E29DF16D_OFFSET UNITYSDK_OFFSET(0x950D150)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_6934B72928B52064_OFFSET UNITYSDK_OFFSET(0x950EA00)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_6AFE210826458058_OFFSET UNITYSDK_OFFSET(0x950F6B0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_758973C01527E3E1_OFFSET UNITYSDK_OFFSET(0x95021F0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_77BF2B0088EAE91E_1_OFFSET UNITYSDK_OFFSET(0x95114F0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_77BF2B0088EAE91E_OFFSET UNITYSDK_OFFSET(0x9502350)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_7E9CB8126341F58E_OFFSET UNITYSDK_OFFSET(0x9510CE0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_8504B85E12A3EF82_OFFSET UNITYSDK_OFFSET(0x95110F0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_8A36779EBCCBE76B_OFFSET UNITYSDK_OFFSET(0x9513100)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_90BFB6E215043556_OFFSET UNITYSDK_OFFSET(0x950DC10)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_92619A5B9759D762_OFFSET UNITYSDK_OFFSET(0x9510EE0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_9AA4A9615DE62887_OFFSET UNITYSDK_OFFSET(0x950D630)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_9B00B5FC3ACDA9A3_OFFSET UNITYSDK_OFFSET(0x9511A70)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_9B743AF1DAFBABCC_OFFSET UNITYSDK_OFFSET(0x950D8A0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_9E04F794F384F5D1_OFFSET UNITYSDK_OFFSET(0x9511180)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_ACE0DD830C752340_OFFSET UNITYSDK_OFFSET(0x95116F0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_AFBEA473EA40629E_OFFSET UNITYSDK_OFFSET(0x950F840)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_B22D7820050876E3_OFFSET UNITYSDK_OFFSET(0x950D510)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_C8EA8053CB98B931_OFFSET UNITYSDK_OFFSET(0x9511550)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x9512A20)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_D26EAF38DD9B3015_OFFSET UNITYSDK_OFFSET(0x9511650)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_D4A934B47A862E52_OFFSET UNITYSDK_OFFSET(0x950D6E0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_D5999BF4C232F1C9_OFFSET UNITYSDK_OFFSET(0x950D450)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_EB754F983527AB71_OFFSET UNITYSDK_OFFSET(0x950CFF0)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_F054547EE8FC0772_1_OFFSET UNITYSDK_OFFSET(0x9510810)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_F054547EE8FC0772_OFFSET UNITYSDK_OFFSET(0x9510540)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_F2AA42404B4DCA14_OFFSET UNITYSDK_OFFSET(0x9510150)
#define CLASS_1_4C3EA8CBA8A5645C_METHOD_1_F2F0F4CC93A31EF9_OFFSET UNITYSDK_OFFSET(0x950ED50)
#define CLASS_1_4C3EA8CBA8A5645C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9513410)

inline static constexpr unsigned int Class_1_4C3EA8CBA8A5645C_TypeDefinitionIndex = 55689;

class Class_1_4C3EA8CBA8A5645C : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C3EA8CBA8A5645C_TypeDefinitionIndex)->GetStaticField(0x5A00);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C3EA8CBA8A5645C_TypeDefinitionIndex)->GetStaticField(0x5A08);
	}
	static ::RPG::Client::ElfRestaurantGameInstance** StaticGet_Field_1_10()
	{
		return (::RPG::Client::ElfRestaurantGameInstance**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C3EA8CBA8A5645C_TypeDefinitionIndex)->GetStaticField(0x5A10);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C3EA8CBA8A5645C_TypeDefinitionIndex)->GetStaticField(0x5A18);
	}
	static ::Class_2_43D1AA62A6D00FFF** StaticGet_Field_1_11()
	{
		return (::Class_2_43D1AA62A6D00FFF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C3EA8CBA8A5645C_TypeDefinitionIndex)->GetStaticField(0x5A20);
	}
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C3EA8CBA8A5645C_TypeDefinitionIndex)->GetStaticField(0x5A28);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C3EA8CBA8A5645C_TypeDefinitionIndex)->GetStaticField(0x5A30);
	}
	static ::System::String** StaticGet_Field_1_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C3EA8CBA8A5645C_TypeDefinitionIndex)->GetStaticField(0x5A38);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C3EA8CBA8A5645C_TypeDefinitionIndex)->GetStaticField(0x5A40);
	}
	static ::System::Boolean* StaticGet_Field_1_9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C3EA8CBA8A5645C_TypeDefinitionIndex)->GetStaticField(0x2C40);
	}
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::Char Field_1_8; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_EB754F983527AB71(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_EB754F983527AB71_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_67D7A937E29DF16D(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::UInt32(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_67D7A937E29DF16D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6133764619ACBC4F(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_6133764619ACBC4F_OFFSET))(a1);
	}

	static ::System::Void Method_1_3BFFE341217F7AF3(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_3BFFE341217F7AF3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_2CF7730C46CAA5BB(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_2CF7730C46CAA5BB_OFFSET))(a1);
	}

	static ::System::Void Method_1_D5999BF4C232F1C9(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_D5999BF4C232F1C9_OFFSET))(a1);
	}

	static ::RPG::GameCore::ElfBehaviorStateItem* Method_1_B22D7820050876E3(::RPG::GameCore::ElfBehaviorStateItem* a1)
	{
		return ((::RPG::GameCore::ElfBehaviorStateItem*(*)(::RPG::GameCore::ElfBehaviorStateItem*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_B22D7820050876E3_OFFSET))(a1);
	}

	static ::RPG::GameCore::ElfBehaviorStateContentItem* Method_1_9AA4A9615DE62887(::RPG::GameCore::ElfBehaviorStateContentItem* a1)
	{
		return ((::RPG::GameCore::ElfBehaviorStateContentItem*(*)(::RPG::GameCore::ElfBehaviorStateContentItem*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_9AA4A9615DE62887_OFFSET))(a1);
	}

	static ::RPG::GameCore::ElfBehaviorStateEmojiItem* Method_1_D4A934B47A862E52(::RPG::GameCore::ElfBehaviorStateEmojiItem* a1)
	{
		return ((::RPG::GameCore::ElfBehaviorStateEmojiItem*(*)(::RPG::GameCore::ElfBehaviorStateEmojiItem*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_D4A934B47A862E52_OFFSET))(a1);
	}

	static ::System::Void Method_1_383D782CE381494B(::RPG::GameCore::ElfBehaviorStateItem* a1, ::RPG::GameCore::ElfBehaviorStateItem* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::ElfBehaviorStateItem*, ::RPG::GameCore::ElfBehaviorStateItem*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_383D782CE381494B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_355F1FA4F195A34A(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* a1)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_355F1FA4F195A34A_OFFSET))(a1);
	}

	static ::System::Void Method_1_9B743AF1DAFBABCC(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::String* a2, ::RPG::Client::TextID a3, ::System::String* a4, ::RPG::GameCore::ElfBehaviorStateType a5, ::System::Single a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::String*, ::RPG::Client::TextID, ::System::String*, ::RPG::GameCore::ElfBehaviorStateType, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_9B743AF1DAFBABCC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_5455C42C8DC1139B(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_5455C42C8DC1139B_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Method_1_90BFB6E215043556(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfTargetType a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3, ::RPG::GameCore::LittleGameEntityType a4)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfTargetType, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_90BFB6E215043556_OFFSET))(a1, a2, a3, a4);
	}

	static ::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Method_1_49F0D97618C02893(::RPG::GameCore::LittleGameEntityType a1)
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_49F0D97618C02893_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6934B72928B52064(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::RestaurantDynamicValueType a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::RestaurantDynamicValueType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_6934B72928B52064_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_F2F0F4CC93A31EF9(::System::String* a1, ::Il2CppArray<::System::Single>* a2)
	{
		return ((::System::Single(*)(::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_F2F0F4CC93A31EF9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A37C445B2C9D335(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_0A37C445B2C9D335_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_6AFE210826458058(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::Class_1_F896A7F19FFA18B0* a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::Class_1_F896A7F19FFA18B0*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_6AFE210826458058_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_18BDE1E9B35E197E(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::UInt32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_18BDE1E9B35E197E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_18BDE1E9B35E197E_1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::UInt32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_18BDE1E9B35E197E_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F054547EE8FC0772(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::String* a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3, ::Il2CppArray<::System::Single>* a4)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::String*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_F054547EE8FC0772_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F054547EE8FC0772_1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::String* a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3, ::Il2CppArray<::System::Single>* a4)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::String*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_F054547EE8FC0772_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_AFBEA473EA40629E(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfBuff* a2, ::Il2CppArray<::System::Single>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfBuff*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_AFBEA473EA40629E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F2AA42404B4DCA14(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfBuff* a2, ::Il2CppArray<::System::Single>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfBuff*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_F2AA42404B4DCA14_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0D13C86B964761EF(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::Il2CppArray<::RPG::GameCore::ElfPropertyModifier*>* a2, ::Il2CppArray<::System::Single>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::Il2CppArray<::RPG::GameCore::ElfPropertyModifier*>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_0D13C86B964761EF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0D13C86B964761EF_1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::Il2CppArray<::RPG::GameCore::ElfPropertyModifier*>* a2, ::Il2CppArray<::System::Single>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::Il2CppArray<::RPG::GameCore::ElfPropertyModifier*>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_0D13C86B964761EF_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_7E9CB8126341F58E(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfPropertyModifier* a2, ::Il2CppArray<::System::Single>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfPropertyModifier*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_7E9CB8126341F58E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_92619A5B9759D762(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfPropertyModifier* a2, ::Il2CppArray<::System::Single>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfPropertyModifier*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_92619A5B9759D762_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8504B85E12A3EF82(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfProperty a2)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfProperty))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_8504B85E12A3EF82_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9E04F794F384F5D1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_9E04F794F384F5D1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_758973C01527E3E1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_758973C01527E3E1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_77BF2B0088EAE91E(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_77BF2B0088EAE91E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_77BF2B0088EAE91E_1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_77BF2B0088EAE91E_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_285139CF2057D827(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::RestaurantNormalEventType a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::RestaurantNormalEventType))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_285139CF2057D827_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_099B5F018AFCBEEB(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::RestaurantSuperEventType a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_099B5F018AFCBEEB_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_C8EA8053CB98B931(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfProperty a2)
	{
		return ((::System::Single(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfProperty))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_C8EA8053CB98B931_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D26EAF38DD9B3015(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfProperty a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfProperty, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_D26EAF38DD9B3015_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::LittleGame::ElfRestaurant::SIMEmotionState Method_1_ACE0DD830C752340(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::RPG::Client::LittleGame::ElfRestaurant::SIMEmotionState(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_ACE0DD830C752340_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_087FFA4E2EF101BB(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_087FFA4E2EF101BB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9B00B5FC3ACDA9A3(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_9B00B5FC3ACDA9A3_OFFSET))(a1);
	}

	static ::System::Void Method_1_45A75B2F0BB0B141(::RPG::GameCore::RestaurantNormalEventType a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3, ::UnityEngine::Vector3 a4, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::RestaurantNormalEventType, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_45A75B2F0BB0B141_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::System::Void Method_1_0D959FF260B17021(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_0D959FF260B17021_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2C4CACFCB85F415D(::Class_1_32B92D1867E3C418* a1)
	{
		return ((::System::Boolean(*)(::Class_1_32B92D1867E3C418*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_2C4CACFCB85F415D_OFFSET))(a1);
	}

	static ::System::Void Method_1_8A36779EBCCBE76B(::RPG::GameCore::ElfWaveCustomerConfig* a1, ::RPG::GameCore::ElfWaveCustomerConfig* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::ElfWaveCustomerConfig*, ::RPG::GameCore::ElfWaveCustomerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_8A36779EBCCBE76B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2818B682042525E5(::UnityEngine::Quaternion a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_4C3EA8CBA8A5645C_METHOD_1_2818B682042525E5_OFFSET))(a1);
	}
};
