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
class Class_2_80F8710F847F1248;
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

#define CLASS_1_8A18D536F20183AD_METHOD_1_019C04DD793352A9_OFFSET UNITYSDK_OFFSET(0x15B0A040)
#define CLASS_1_8A18D536F20183AD_METHOD_1_0608B8DC5340A5BD_OFFSET UNITYSDK_OFFSET(0x15B09CA0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_087FFA4E2EF101BB_OFFSET UNITYSDK_OFFSET(0x15B0E480)
#define CLASS_1_8A18D536F20183AD_METHOD_1_099B5F018AFCBEEB_OFFSET UNITYSDK_OFFSET(0x15B0E150)
#define CLASS_1_8A18D536F20183AD_METHOD_1_0A37C445B2C9D335_OFFSET UNITYSDK_OFFSET(0x15B0BEA0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_0D13C86B964761EF_1_OFFSET UNITYSDK_OFFSET(0x15B0D6A0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_0D13C86B964761EF_OFFSET UNITYSDK_OFFSET(0x15B0D5A0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_0D81168BFF8EC067_OFFSET UNITYSDK_OFFSET(0x15B0B720)
#define CLASS_1_8A18D536F20183AD_METHOD_1_2818B682042525E5_OFFSET UNITYSDK_OFFSET(0x15B0FAA0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_285139CF2057D827_OFFSET UNITYSDK_OFFSET(0x15B0E0B0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_355F1FA4F195A34A_OFFSET UNITYSDK_OFFSET(0x15B0A550)
#define CLASS_1_8A18D536F20183AD_METHOD_1_383D782CE381494B_OFFSET UNITYSDK_OFFSET(0x15B0A450)
#define CLASS_1_8A18D536F20183AD_METHOD_1_43C9C455F1E685A0_OFFSET UNITYSDK_OFFSET(0x15B0B540)
#define CLASS_1_8A18D536F20183AD_METHOD_1_45A75B2F0BB0B141_OFFSET UNITYSDK_OFFSET(0x15B0E800)
#define CLASS_1_8A18D536F20183AD_METHOD_1_6212B41AAE2779E5_OFFSET UNITYSDK_OFFSET(0x15B0F6E0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_66B842E249F551CB_OFFSET UNITYSDK_OFFSET(0x15B0CCE0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_67D7A937E29DF16D_OFFSET UNITYSDK_OFFSET(0x15B09E00)
#define CLASS_1_8A18D536F20183AD_METHOD_1_6AFE210826458058_OFFSET UNITYSDK_OFFSET(0x15B0C320)
#define CLASS_1_8A18D536F20183AD_METHOD_1_758973C01527E3E1_OFFSET UNITYSDK_OFFSET(0x15B0DEF0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_77BF2B0088EAE91E_1_OFFSET UNITYSDK_OFFSET(0x15B0E050)
#define CLASS_1_8A18D536F20183AD_METHOD_1_77BF2B0088EAE91E_OFFSET UNITYSDK_OFFSET(0x15B0DFF0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_8504B85E12A3EF82_OFFSET UNITYSDK_OFFSET(0x15B0DB50)
#define CLASS_1_8A18D536F20183AD_METHOD_1_8A36779EBCCBE76B_OFFSET UNITYSDK_OFFSET(0x15B0F830)
#define CLASS_1_8A18D536F20183AD_METHOD_1_90BFB6E215043556_OFFSET UNITYSDK_OFFSET(0x15B0A920)
#define CLASS_1_8A18D536F20183AD_METHOD_1_92619A5B9759D762_1_OFFSET UNITYSDK_OFFSET(0x15B0D970)
#define CLASS_1_8A18D536F20183AD_METHOD_1_92619A5B9759D762_OFFSET UNITYSDK_OFFSET(0x15B0D7A0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_9AA4A9615DE62887_OFFSET UNITYSDK_OFFSET(0x15B0A2E0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_9B00B5FC3ACDA9A3_OFFSET UNITYSDK_OFFSET(0x15B0E6C0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_9B743AF1DAFBABCC_OFFSET UNITYSDK_OFFSET(0x15B0A5B0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_9E04F794F384F5D1_OFFSET UNITYSDK_OFFSET(0x15B0DBE0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_9EB2D79C81FCC798_OFFSET UNITYSDK_OFFSET(0x15B0A780)
#define CLASS_1_8A18D536F20183AD_METHOD_1_A806B748F9FFC800_OFFSET UNITYSDK_OFFSET(0x15B0A100)
#define CLASS_1_8A18D536F20183AD_METHOD_1_ACE0DD830C752340_OFFSET UNITYSDK_OFFSET(0x15B0E390)
#define CLASS_1_8A18D536F20183AD_METHOD_1_AFBEA473EA40629E_OFFSET UNITYSDK_OFFSET(0x15B0C4A0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_B22D7820050876E3_OFFSET UNITYSDK_OFFSET(0x15B0A1C0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_C32CF36FC153458E_OFFSET UNITYSDK_OFFSET(0x15B09F90)
#define CLASS_1_8A18D536F20183AD_METHOD_1_C6EB3E6321201B09_1_OFFSET UNITYSDK_OFFSET(0x15B0C9C0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_C6EB3E6321201B09_OFFSET UNITYSDK_OFFSET(0x15B0C000)
#define CLASS_1_8A18D536F20183AD_METHOD_1_C8EA8053CB98B931_OFFSET UNITYSDK_OFFSET(0x15B0E210)
#define CLASS_1_8A18D536F20183AD_METHOD_1_C931F7A37F6234DD_OFFSET UNITYSDK_OFFSET(0x15B09F00)
#define CLASS_1_8A18D536F20183AD_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x15B0F640)
#define CLASS_1_8A18D536F20183AD_METHOD_1_D26EAF38DD9B3015_OFFSET UNITYSDK_OFFSET(0x15B0E2F0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_D4A934B47A862E52_OFFSET UNITYSDK_OFFSET(0x15B0A390)
#define CLASS_1_8A18D536F20183AD_METHOD_1_E842E1908016B657_1_OFFSET UNITYSDK_OFFSET(0x15B0D320)
#define CLASS_1_8A18D536F20183AD_METHOD_1_E842E1908016B657_OFFSET UNITYSDK_OFFSET(0x15B0D0A0)
#define CLASS_1_8A18D536F20183AD_METHOD_1_F2F0F4CC93A31EF9_OFFSET UNITYSDK_OFFSET(0x15B0BAE0)
#define CLASS_1_8A18D536F20183AD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B0FB30)

inline static constexpr unsigned int Class_1_8A18D536F20183AD_TypeDefinitionIndex = 57682;

class Class_1_8A18D536F20183AD : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A18D536F20183AD_TypeDefinitionIndex)->GetStaticField(0x2780);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A18D536F20183AD_TypeDefinitionIndex)->GetStaticField(0x2788);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A18D536F20183AD_TypeDefinitionIndex)->GetStaticField(0x2790);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A18D536F20183AD_TypeDefinitionIndex)->GetStaticField(0x2798);
	}
	static ::RPG::Client::ElfRestaurantGameInstance** StaticGet_Field_1_4()
	{
		return (::RPG::Client::ElfRestaurantGameInstance**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A18D536F20183AD_TypeDefinitionIndex)->GetStaticField(0x27A0);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A18D536F20183AD_TypeDefinitionIndex)->GetStaticField(0x27A8);
	}
	static ::System::String** StaticGet_Field_1_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A18D536F20183AD_TypeDefinitionIndex)->GetStaticField(0x27B0);
	}
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A18D536F20183AD_TypeDefinitionIndex)->GetStaticField(0x27B8);
	}
	static ::Class_2_80F8710F847F1248** StaticGet_Field_1_8()
	{
		return (::Class_2_80F8710F847F1248**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A18D536F20183AD_TypeDefinitionIndex)->GetStaticField(0x27C0);
	}
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::Char Field_1_10; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0608B8DC5340A5BD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_0608B8DC5340A5BD_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_67D7A937E29DF16D(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::UInt32(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_67D7A937E29DF16D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C931F7A37F6234DD(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_C931F7A37F6234DD_OFFSET))(a1);
	}

	static ::System::Void Method_1_C32CF36FC153458E(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_C32CF36FC153458E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_019C04DD793352A9(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_019C04DD793352A9_OFFSET))(a1);
	}

	static ::System::Void Method_1_A806B748F9FFC800(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_A806B748F9FFC800_OFFSET))(a1);
	}

	static ::RPG::GameCore::ElfBehaviorStateItem* Method_1_B22D7820050876E3(::RPG::GameCore::ElfBehaviorStateItem* a1)
	{
		return ((::RPG::GameCore::ElfBehaviorStateItem*(*)(::RPG::GameCore::ElfBehaviorStateItem*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_B22D7820050876E3_OFFSET))(a1);
	}

	static ::RPG::GameCore::ElfBehaviorStateContentItem* Method_1_9AA4A9615DE62887(::RPG::GameCore::ElfBehaviorStateContentItem* a1)
	{
		return ((::RPG::GameCore::ElfBehaviorStateContentItem*(*)(::RPG::GameCore::ElfBehaviorStateContentItem*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_9AA4A9615DE62887_OFFSET))(a1);
	}

	static ::RPG::GameCore::ElfBehaviorStateEmojiItem* Method_1_D4A934B47A862E52(::RPG::GameCore::ElfBehaviorStateEmojiItem* a1)
	{
		return ((::RPG::GameCore::ElfBehaviorStateEmojiItem*(*)(::RPG::GameCore::ElfBehaviorStateEmojiItem*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_D4A934B47A862E52_OFFSET))(a1);
	}

	static ::System::Void Method_1_383D782CE381494B(::RPG::GameCore::ElfBehaviorStateItem* a1, ::RPG::GameCore::ElfBehaviorStateItem* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::ElfBehaviorStateItem*, ::RPG::GameCore::ElfBehaviorStateItem*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_383D782CE381494B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_355F1FA4F195A34A(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* a1)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_355F1FA4F195A34A_OFFSET))(a1);
	}

	static ::System::Void Method_1_9B743AF1DAFBABCC(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::String* a2, ::RPG::Client::TextID a3, ::System::String* a4, ::RPG::GameCore::ElfBehaviorStateType a5, ::System::Single a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::String*, ::RPG::Client::TextID, ::System::String*, ::RPG::GameCore::ElfBehaviorStateType, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_9B743AF1DAFBABCC_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_9EB2D79C81FCC798(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_9EB2D79C81FCC798_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Method_1_90BFB6E215043556(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfTargetType a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3, ::RPG::GameCore::LittleGameEntityType a4)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfTargetType, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_90BFB6E215043556_OFFSET))(a1, a2, a3, a4);
	}

	static ::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Method_1_43C9C455F1E685A0(::RPG::GameCore::LittleGameEntityType a1)
	{
		return ((::Entitas::IMatcher_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*(*)(::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_43C9C455F1E685A0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0D81168BFF8EC067(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::RestaurantDynamicValueType a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::RestaurantDynamicValueType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_0D81168BFF8EC067_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_F2F0F4CC93A31EF9(::System::String* a1, ::Il2CppArray<::System::Single>* a2)
	{
		return ((::System::Single(*)(::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_F2F0F4CC93A31EF9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0A37C445B2C9D335(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_0A37C445B2C9D335_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_6AFE210826458058(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::Class_1_F896A7F19FFA18B0* a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::Class_1_F896A7F19FFA18B0*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_6AFE210826458058_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_C6EB3E6321201B09(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::UInt32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_C6EB3E6321201B09_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C6EB3E6321201B09_1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::UInt32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_C6EB3E6321201B09_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E842E1908016B657(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::String* a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3, ::Il2CppArray<::System::Single>* a4)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::String*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_E842E1908016B657_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_E842E1908016B657_1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::String* a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3, ::Il2CppArray<::System::Single>* a4)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::String*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_E842E1908016B657_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_AFBEA473EA40629E(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfBuff* a2, ::Il2CppArray<::System::Single>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfBuff*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_AFBEA473EA40629E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_66B842E249F551CB(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfBuff* a2, ::Il2CppArray<::System::Single>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfBuff*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_66B842E249F551CB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0D13C86B964761EF(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::Il2CppArray<::RPG::GameCore::ElfPropertyModifier*>* a2, ::Il2CppArray<::System::Single>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::Il2CppArray<::RPG::GameCore::ElfPropertyModifier*>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_0D13C86B964761EF_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0D13C86B964761EF_1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::Il2CppArray<::RPG::GameCore::ElfPropertyModifier*>* a2, ::Il2CppArray<::System::Single>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::Il2CppArray<::RPG::GameCore::ElfPropertyModifier*>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_0D13C86B964761EF_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_92619A5B9759D762(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfPropertyModifier* a2, ::Il2CppArray<::System::Single>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfPropertyModifier*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_92619A5B9759D762_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_92619A5B9759D762_1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfPropertyModifier* a2, ::Il2CppArray<::System::Single>* a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfPropertyModifier*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_92619A5B9759D762_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8504B85E12A3EF82(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfProperty a2)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfProperty))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_8504B85E12A3EF82_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9E04F794F384F5D1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_9E04F794F384F5D1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_758973C01527E3E1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_758973C01527E3E1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_77BF2B0088EAE91E(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_77BF2B0088EAE91E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_77BF2B0088EAE91E_1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_77BF2B0088EAE91E_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_285139CF2057D827(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::RestaurantNormalEventType a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::RestaurantNormalEventType))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_285139CF2057D827_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_099B5F018AFCBEEB(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::RestaurantSuperEventType a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_099B5F018AFCBEEB_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_C8EA8053CB98B931(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfProperty a2)
	{
		return ((::System::Single(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfProperty))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_C8EA8053CB98B931_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D26EAF38DD9B3015(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::RPG::GameCore::ElfProperty a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::GameCore::ElfProperty, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_D26EAF38DD9B3015_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::LittleGame::ElfRestaurant::SIMEmotionState Method_1_ACE0DD830C752340(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::RPG::Client::LittleGame::ElfRestaurant::SIMEmotionState(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_ACE0DD830C752340_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_087FFA4E2EF101BB(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_087FFA4E2EF101BB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9B00B5FC3ACDA9A3(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_9B00B5FC3ACDA9A3_OFFSET))(a1);
	}

	static ::System::Void Method_1_45A75B2F0BB0B141(::RPG::GameCore::RestaurantNormalEventType a1, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a2, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* a3, ::UnityEngine::Vector3 a4, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams* a5)
	{
		return ((::System::Void(*)(::RPG::GameCore::RestaurantNormalEventType, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantEventParams*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_45A75B2F0BB0B141_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::System::Boolean Method_1_6212B41AAE2779E5(::Class_1_32B92D1867E3C418* a1)
	{
		return ((::System::Boolean(*)(::Class_1_32B92D1867E3C418*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_6212B41AAE2779E5_OFFSET))(a1);
	}

	static ::System::Void Method_1_8A36779EBCCBE76B(::RPG::GameCore::ElfWaveCustomerConfig* a1, ::RPG::GameCore::ElfWaveCustomerConfig* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::ElfWaveCustomerConfig*, ::RPG::GameCore::ElfWaveCustomerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_8A36779EBCCBE76B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2818B682042525E5(::UnityEngine::Quaternion a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_8A18D536F20183AD_METHOD_1_2818B682042525E5_OFFSET))(a1);
	}
};
