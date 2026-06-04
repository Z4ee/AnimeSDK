#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/RPG/GameCore/SwitchMascotSection.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_401;
class Class_1_23F67DD15593C8D6;
class Class_1_ADE34076259CCCF7_2;
class Class_2_61477CBA48D8BF6F_Class_1_B2904BA63FDA89C5;
namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class MonoDroneAirwallControl; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class SwitchMascotPuzzleBoard; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MazePuzzleSwitchMascotRow; }
namespace RPG::GameCore { class SwitchMascotConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_61477CBA48D8BF6F_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x14284290)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x142820F0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_0B74EAD4E27D287C_1_OFFSET UNITYSDK_OFFSET(0x142869B0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_0B74EAD4E27D287C_OFFSET UNITYSDK_OFFSET(0x142867C0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x14281C70)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_0CB7EAA5B9C083D3_OFFSET UNITYSDK_OFFSET(0x14284820)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_11CF35CFDBBEAE0A_OFFSET UNITYSDK_OFFSET(0x14285BC0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x142879B0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x14284350)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x14281E50)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_1E27A7B84BD57C4A_OFFSET UNITYSDK_OFFSET(0x142865B0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x14284CE0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_284B3166B7E1035B_OFFSET UNITYSDK_OFFSET(0x14287000)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0x14284E60)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_30D1209326FA87FC_2_OFFSET UNITYSDK_OFFSET(0x14281B50)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x14283560)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_3160EACC8F1729F2_1_OFFSET UNITYSDK_OFFSET(0x14286E00)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_3160EACC8F1729F2_OFFSET UNITYSDK_OFFSET(0x14286C60)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_3617F51E36984770_OFFSET UNITYSDK_OFFSET(0x142836B0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_37D3D9A3F3244B90_OFFSET UNITYSDK_OFFSET(0x14282EA0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14285B70)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_3C111959D3BB5616_OFFSET UNITYSDK_OFFSET(0x14288520)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x14288BE0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x14286560)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_3F08B7FA8DEB9BF7_OFFSET UNITYSDK_OFFSET(0x14285200)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14283AE0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_4679E7840A7526E1_OFFSET UNITYSDK_OFFSET(0x142838B0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_4D92CAACEA159BBF_OFFSET UNITYSDK_OFFSET(0x14286830)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_5035AF85CDD1C32C_OFFSET UNITYSDK_OFFSET(0x14287B30)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_55157FBA4997D865_OFFSET UNITYSDK_OFFSET(0x142832A0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_5EE047E48143A8CA_OFFSET UNITYSDK_OFFSET(0x14284F60)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x14283D20)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x14284D40)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_793ACC65EDA3751A_OFFSET UNITYSDK_OFFSET(0x14284DE0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_7FF4BF6FF88B610E_OFFSET UNITYSDK_OFFSET(0x14288950)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_86AAE2399DD62BCF_OFFSET UNITYSDK_OFFSET(0x14287E40)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x14282C00)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_8923446497E3D0C5_OFFSET UNITYSDK_OFFSET(0x14283F30)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_899EC372DEC6EBDF_OFFSET UNITYSDK_OFFSET(0x142847B0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_93A1480D2A66C53A_OFFSET UNITYSDK_OFFSET(0x14286410)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_95A7FF7AF0E79B18_OFFSET UNITYSDK_OFFSET(0x14287A40)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x142819E0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14284D90)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x14283060)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x142817A0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x14285B10)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x14283410)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_AE3766D5A384001B_OFFSET UNITYSDK_OFFSET(0x142878C0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x14288960)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_B36E5DDA49749712_OFFSET UNITYSDK_OFFSET(0x14286F40)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_B8EF8C4350807858_OFFSET UNITYSDK_OFFSET(0x142857C0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_BA7B415A985A3C25_OFFSET UNITYSDK_OFFSET(0x14284FC0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_BF5E2DCAE0BF038A_1_OFFSET UNITYSDK_OFFSET(0x14283B40)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x14282A10)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_BF6F0FF54BBF3C41_OFFSET UNITYSDK_OFFSET(0x14287D80)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_CE3FD378493F8DEF_1_OFFSET UNITYSDK_OFFSET(0x14285130)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_CE3FD378493F8DEF_OFFSET UNITYSDK_OFFSET(0x14285060)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x14282860)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_D2B5C4AB724DE8E1_OFFSET UNITYSDK_OFFSET(0x14288300)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x14281C00)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_D829460A9C07E886_OFFSET UNITYSDK_OFFSET(0x14288720)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_DA1A8A25D0B64A55_OFFSET UNITYSDK_OFFSET(0x142883C0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_DF7CEFC0E6C5FD0D_1_OFFSET UNITYSDK_OFFSET(0x14286AE0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_DF7CEFC0E6C5FD0D_2_OFFSET UNITYSDK_OFFSET(0x14286BA0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x14286A20)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0x14288670)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_F5909B5FD6F94F42_OFFSET UNITYSDK_OFFSET(0x14284AC0)
#define CLASS_2_61477CBA48D8BF6F_METHOD_2_F62A76C6284AD01E_OFFSET UNITYSDK_OFFSET(0x14286620)
#define CLASS_2_61477CBA48D8BF6F_ONINIT_OFFSET UNITYSDK_OFFSET(0x142813F0)
#define CLASS_2_61477CBA48D8BF6F_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x14282F50)
#define CLASS_2_61477CBA48D8BF6F_TICK_OFFSET UNITYSDK_OFFSET(0x142842A0)
#define CLASS_2_61477CBA48D8BF6F__CCTOR_OFFSET UNITYSDK_OFFSET(0x14288A60)
#define CLASS_2_61477CBA48D8BF6F__CTOR_OFFSET UNITYSDK_OFFSET(0x14288970)
#define CLASS_2_61477CBA48D8BF6F___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x14288AC0)
#define CLASS_2_61477CBA48D8BF6F___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x14288B20)
#define CLASS_2_61477CBA48D8BF6F___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x14288B80)

inline static constexpr unsigned int Class_2_61477CBA48D8BF6F_TypeDefinitionIndex = 56361;

class Class_2_61477CBA48D8BF6F : public ::Class_1_47C4886CB6C61234
{
public:
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_61477CBA48D8BF6F_TypeDefinitionIndex)->GetStaticField(0x25630);
	}
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_61477CBA48D8BF6F_TypeDefinitionIndex)->GetStaticField(0x25638);
	}
	static ::System::String** StaticGet_Field_2_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_61477CBA48D8BF6F_TypeDefinitionIndex)->GetStaticField(0x25640);
	}
	static ::System::UInt32* StaticGet_Field_2_3()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_61477CBA48D8BF6F_TypeDefinitionIndex)->GetStaticField(0x9390);
	}
	::RPG::Client::SwitchMascotPuzzleBoard* Field_2_4; // 0x20
	::RPG::GameCore::GameEntity* Field_2_5; // 0x28
	::RPG::GameCore::GameEntity* Field_2_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_61477CBA48D8BF6F_Class_1_B2904BA63FDA89C5*>* Field_2_7; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Field_2_8; // 0x40
	::RPG::GameCore::MazePuzzleSwitchMascotRow* Field_2_9; // 0x48
	::RPG::Client::MonoDroneAirwallControl* Field_2_10; // 0x50
	::RPG::Client::AchievementData* Field_2_11; // 0x58
	::UnityEngine::GameObject* Field_2_12; // 0x60
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_13; // 0x68
	::RPG::GameCore::AdventureCharacterController* Field_2_14; // 0x70
	::Class_1_23F67DD15593C8D6* Field_2_15; // 0x78
	::RPG::GameCore::SwitchMascotConfig* Field_2_16; // 0x80
	::System::Boolean Field_2_17; // 0x88
	::System::Boolean Field_2_18; // 0x89
	::System::Boolean Field_2_19; // 0x8A
	::System::Boolean Field_2_20; // 0x8B
	::System::Boolean Field_2_21; // 0x8C
	::System::Boolean Field_2_22; // 0x8D
	::System::UInt64 Field_2_23; // 0x90
	::System::Single Field_2_24; // 0x98
	::System::Single Field_2_25; // 0x9C
	::System::Int32 Field_2_26; // 0xA0
	::System::Int32 Field_2_27; // 0xA4
	::System::Single Field_2_28; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F__CCTOR_OFFSET))();
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_ONUNINIT_OFFSET))(this);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_7646FFE662147970_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_2_793ACC65EDA3751A(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_793ACC65EDA3751A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5EE047E48143A8CA(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_5EE047E48143A8CA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BA7B415A985A3C25(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_BA7B415A985A3C25_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_CE3FD378493F8DEF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_CE3FD378493F8DEF_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_CE3FD378493F8DEF_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_CE3FD378493F8DEF_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3F08B7FA8DEB9BF7(::RPG::GameCore::SwitchMascotSection a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchMascotSection, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_3F08B7FA8DEB9BF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B8EF8C4350807858(::RPG::GameCore::SwitchMascotSection a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchMascotSection))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_B8EF8C4350807858_OFFSET))(this, a1);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_11CF35CFDBBEAE0A(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_11CF35CFDBBEAE0A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E27A7B84BD57C4A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_1E27A7B84BD57C4A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_A239DF324AF4215D_1_OFFSET))(this);
	}

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Void Method_2_55157FBA4997D865()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_55157FBA4997D865_OFFSET))(this);
	}

	::System::Void Method_2_0B74EAD4E27D287C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_0B74EAD4E27D287C_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B74EAD4E27D287C_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_0B74EAD4E27D287C_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_DF7CEFC0E6C5FD0D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_DF7CEFC0E6C5FD0D_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3160EACC8F1729F2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_3160EACC8F1729F2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3160EACC8F1729F2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_3160EACC8F1729F2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B36E5DDA49749712(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_B36E5DDA49749712_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE3766D5A384001B(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_AE3766D5A384001B_OFFSET))(this, a1);
	}

	::System::Void Method_2_37D3D9A3F3244B90()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_37D3D9A3F3244B90_OFFSET))(this);
	}

	::System::Void Method_2_4D92CAACEA159BBF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_4D92CAACEA159BBF_OFFSET))(this, a1);
	}

	::System::Void Method_2_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_1DE6433C25680F9D_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_95A7FF7AF0E79B18(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_95A7FF7AF0E79B18_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BF6F0FF54BBF3C41(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_BF6F0FF54BBF3C41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5035AF85CDD1C32C(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_5035AF85CDD1C32C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Int32 Method_2_86AAE2399DD62BCF(::Il2CppArray<::Class_1_ADE34076259CCCF7_2*>* a1, ::RPG::GameCore::SwitchMascotSection a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::Class_1_ADE34076259CCCF7_2*>*, ::RPG::GameCore::SwitchMascotSection))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_86AAE2399DD62BCF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3617F51E36984770()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_3617F51E36984770_OFFSET))(this);
	}

	::System::Void Method_2_284B3166B7E1035B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_284B3166B7E1035B_OFFSET))(this, a1);
	}

	::Class_2_61477CBA48D8BF6F_Class_1_B2904BA63FDA89C5* Method_2_D2B5C4AB724DE8E1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_2_61477CBA48D8BF6F_Class_1_B2904BA63FDA89C5*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_D2B5C4AB724DE8E1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C111959D3BB5616(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_3C111959D3BB5616_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_DA1A8A25D0B64A55(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_DA1A8A25D0B64A55_OFFSET))(this, a1);
	}

	::System::Void Method_2_4679E7840A7526E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_4679E7840A7526E1_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_30D1209326FA87FC_1_OFFSET))(this);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_899EC372DEC6EBDF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_899EC372DEC6EBDF_OFFSET))(this, a1);
	}

	::System::Void Method_2_E05ADF64DE351167(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_E05ADF64DE351167_OFFSET))(this, a1);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_2_8923446497E3D0C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_8923446497E3D0C5_OFFSET))(this);
	}

	::System::Void Method_2_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_2_BF5E2DCAE0BF038A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_BF5E2DCAE0BF038A_1_OFFSET))(this);
	}

	::System::Void Method_2_0CB7EAA5B9C083D3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_0CB7EAA5B9C083D3_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::UnityEngine::Transform*, ::System::String*> Method_2_93A1480D2A66C53A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Transform*, ::System::String*>(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_93A1480D2A66C53A_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5909B5FD6F94F42(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_F5909B5FD6F94F42_OFFSET))(this, a1);
	}

	::System::Void Method_2_D829460A9C07E886(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_D829460A9C07E886_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_30D1209326FA87FC_2_OFFSET))(this);
	}

	::System::Void Method_2_F62A76C6284AD01E(::RPG::Client::AchievementData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_F62A76C6284AD01E_OFFSET))(this, a1);
	}

	::RPG::GameCore::MazePuzzleSwitchMascotRow* Method_2_7FF4BF6FF88B610E()
	{
		return ((::RPG::GameCore::MazePuzzleSwitchMascotRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_7FF4BF6FF88B610E_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_61477CBA48D8BF6F_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
