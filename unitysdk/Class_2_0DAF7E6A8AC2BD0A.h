#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/RPG/GameCore/SwitchMascotSection.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
class Class_1_23F67DD15593C8D6;
class Class_1_ADE34076259CCCF7_2;
class Class_2_0DAF7E6A8AC2BD0A_Class_1_B575E19A8DC2E7A9;
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

#define CLASS_2_0DAF7E6A8AC2BD0A_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xE0169D0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xE0148B0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_019FAF8DF887E9D8_OFFSET UNITYSDK_OFFSET(0xE014020)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_04C8F82349DC4E83_1_OFFSET UNITYSDK_OFFSET(0xE019140)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_04C8F82349DC4E83_OFFSET UNITYSDK_OFFSET(0xE018F60)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xE014440)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_0ED51BEF22C2FF5B_OFFSET UNITYSDK_OFFSET(0xE015880)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xE01A140)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0xE016A90)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0xE014610)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_1E27A7B84BD57C4A_OFFSET UNITYSDK_OFFSET(0xE018D50)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xE0174A0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_284B3166B7E1035B_OFFSET UNITYSDK_OFFSET(0xE019800)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0xE017620)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_30D1209326FA87FC_2_OFFSET UNITYSDK_OFFSET(0xE014320)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xE015CD0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_3389C72D04C6EBF5_OFFSET UNITYSDK_OFFSET(0xE01A5E0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xE0183A0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_3C111959D3BB5616_OFFSET UNITYSDK_OFFSET(0xE01AD30)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xE018D00)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE016220)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_463A5CCB24F47BB6_OFFSET UNITYSDK_OFFSET(0xE017770)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_5035AF85CDD1C32C_OFFSET UNITYSDK_OFFSET(0xE01A2C0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_57B2EBADDC82E2F5_OFFSET UNITYSDK_OFFSET(0xE0175A0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0xE019740)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xE01A060)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_5EE047E48143A8CA_OFFSET UNITYSDK_OFFSET(0xE017710)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0xE016010)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_623EAEB8D1DF0AA1_OFFSET UNITYSDK_OFFSET(0xE018000)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_6864BF0C477F1F62_OFFSET UNITYSDK_OFFSET(0xE016F60)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_695579C6786804DA_OFFSET UNITYSDK_OFFSET(0xE015E20)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_7163BBB1CD5A2114_1_OFFSET UNITYSDK_OFFSET(0xE017940)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_7163BBB1CD5A2114_OFFSET UNITYSDK_OFFSET(0xE017830)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0xE01B400)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_7FF4BF6FF88B610E_OFFSET UNITYSDK_OFFSET(0xE01B160)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0xE015420)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_8923446497E3D0C5_OFFSET UNITYSDK_OFFSET(0xE016670)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_93A1480D2A66C53A_OFFSET UNITYSDK_OFFSET(0xE018BB0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_93E150ED784F41DF_OFFSET UNITYSDK_OFFSET(0xE01AF30)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_952E03771D024CEE_OFFSET UNITYSDK_OFFSET(0xE017A50)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_95A7FF7AF0E79B18_OFFSET UNITYSDK_OFFSET(0xE01A1D0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_9725A4CA0CFEC673_OFFSET UNITYSDK_OFFSET(0xE0141F0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xE017550)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0xE018340)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_A88CDF038776FAA5_OFFSET UNITYSDK_OFFSET(0xE018FC0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xE017500)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xE015B80)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_AFFF454231BE9638_OFFSET UNITYSDK_OFFSET(0xE01AAD0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xE01B170)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_B9A97467188E4B69_1_OFFSET UNITYSDK_OFFSET(0xE016280)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xE015220)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_BF6F0FF54BBF3C41_OFFSET UNITYSDK_OFFSET(0xE01A510)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0xE016460)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0xE015060)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0xE0143D0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0xE015A50)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_DA1A8A25D0B64A55_OFFSET UNITYSDK_OFFSET(0xE01ABD0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0xE0156C0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_DF7CEFC0E6C5FD0D_1_OFFSET UNITYSDK_OFFSET(0xE019260)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_DF7CEFC0E6C5FD0D_2_OFFSET UNITYSDK_OFFSET(0xE019320)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_DF7CEFC0E6C5FD0D_3_OFFSET UNITYSDK_OFFSET(0xE0193E0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_DF7CEFC0E6C5FD0D_4_OFFSET UNITYSDK_OFFSET(0xE0195C0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0xE0191A0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0xE01AE80)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_ECAA253D18A27C68_OFFSET UNITYSDK_OFFSET(0xE016EF0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_F5909B5FD6F94F42_OFFSET UNITYSDK_OFFSET(0xE017290)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_F62A76C6284AD01E_OFFSET UNITYSDK_OFFSET(0xE018DC0)
#define CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_FD4325E690D001B6_OFFSET UNITYSDK_OFFSET(0xE0183F0)
#define CLASS_2_0DAF7E6A8AC2BD0A_ONINIT_OFFSET UNITYSDK_OFFSET(0xE013C80)
#define CLASS_2_0DAF7E6A8AC2BD0A_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xE015770)
#define CLASS_2_0DAF7E6A8AC2BD0A_TICK_OFFSET UNITYSDK_OFFSET(0xE0169E0)
#define CLASS_2_0DAF7E6A8AC2BD0A__CCTOR_OFFSET UNITYSDK_OFFSET(0xE01B270)
#define CLASS_2_0DAF7E6A8AC2BD0A__CTOR_OFFSET UNITYSDK_OFFSET(0xE01B180)
#define CLASS_2_0DAF7E6A8AC2BD0A___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0xE01B2D0)
#define CLASS_2_0DAF7E6A8AC2BD0A___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xE01B330)
#define CLASS_2_0DAF7E6A8AC2BD0A___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xE01B390)

inline static constexpr unsigned int Class_2_0DAF7E6A8AC2BD0A_TypeDefinitionIndex = 55610;

class Class_2_0DAF7E6A8AC2BD0A : public ::Class_1_47C4886CB6C61234
{
public:
	static ::System::String** StaticGet_Field_2_25()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0DAF7E6A8AC2BD0A_TypeDefinitionIndex)->GetStaticField(0x7EC0);
	}
	static ::System::String** StaticGet_Field_2_26()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0DAF7E6A8AC2BD0A_TypeDefinitionIndex)->GetStaticField(0x7EC8);
	}
	static ::System::String** StaticGet_Field_2_27()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0DAF7E6A8AC2BD0A_TypeDefinitionIndex)->GetStaticField(0x7ED0);
	}
	static ::System::UInt32* StaticGet_Field_2_28()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0DAF7E6A8AC2BD0A_TypeDefinitionIndex)->GetStaticField(0x3690);
	}
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_13; // 0x20
	::RPG::GameCore::SwitchMascotConfig* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Field_2_18; // 0x30
	::Class_1_23F67DD15593C8D6* Field_2_15; // 0x38
	::RPG::GameCore::AdventureCharacterController* Field_2_2; // 0x40
	::RPG::Client::MonoDroneAirwallControl* Field_2_6; // 0x48
	::RPG::GameCore::MazePuzzleSwitchMascotRow* Field_2_3; // 0x50
	::RPG::GameCore::GameEntity* Field_2_19; // 0x58
	::RPG::Client::SwitchMascotPuzzleBoard* Field_2_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_0DAF7E6A8AC2BD0A_Class_1_B575E19A8DC2E7A9*>* Field_2_16; // 0x68
	::RPG::Client::AchievementData* Field_2_24; // 0x70
	::UnityEngine::GameObject* Field_2_5; // 0x78
	::RPG::GameCore::GameEntity* Field_2_1; // 0x80
	::System::UInt64 Field_2_7; // 0x88
	::System::Int32 Field_2_12; // 0x90
	::System::Boolean Field_2_20; // 0x94
	::System::Boolean Field_2_9; // 0x95
	::System::Single Field_2_11; // 0x98
	::System::Single Field_2_21; // 0x9C
	::System::Int32 Field_2_14; // 0xA0
	::System::Single Field_2_17; // 0xA4
	::System::Boolean Field_2_22; // 0xA8
	::System::Boolean Field_2_8; // 0xA9
	::System::Boolean Field_2_10; // 0xAA
	::System::Boolean Field_2_23; // 0xAB

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A__CCTOR_OFFSET))();
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_ONUNINIT_OFFSET))(this);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_2_57B2EBADDC82E2F5(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_57B2EBADDC82E2F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5EE047E48143A8CA(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_5EE047E48143A8CA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_463A5CCB24F47BB6(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_463A5CCB24F47BB6_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_7163BBB1CD5A2114(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_7163BBB1CD5A2114_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_7163BBB1CD5A2114_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_7163BBB1CD5A2114_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_952E03771D024CEE(::RPG::GameCore::SwitchMascotSection a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchMascotSection, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_952E03771D024CEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_623EAEB8D1DF0AA1(::RPG::GameCore::SwitchMascotSection a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchMascotSection))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_623EAEB8D1DF0AA1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_FD4325E690D001B6(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_FD4325E690D001B6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E27A7B84BD57C4A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_1E27A7B84BD57C4A_OFFSET))(this, a1);
	}

	::System::Void Method_2_019FAF8DF887E9D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_019FAF8DF887E9D8_OFFSET))(this);
	}

	::System::Void Method_2_0ED51BEF22C2FF5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_0ED51BEF22C2FF5B_OFFSET))(this);
	}

	::System::Void Method_2_9725A4CA0CFEC673()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_9725A4CA0CFEC673_OFFSET))(this);
	}

	::System::Void Method_2_D4499A0147676A9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_D4499A0147676A9C_OFFSET))(this);
	}

	::System::Void Method_2_04C8F82349DC4E83(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_04C8F82349DC4E83_OFFSET))(this, a1);
	}

	::System::Void Method_2_04C8F82349DC4E83_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_04C8F82349DC4E83_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_DF7CEFC0E6C5FD0D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_DF7CEFC0E6C5FD0D_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_DF7CEFC0E6C5FD0D_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_DF7CEFC0E6C5FD0D_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_DC715239B8B98D9C_OFFSET))(this);
	}

	::System::Void Method_2_A88CDF038776FAA5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_A88CDF038776FAA5_OFFSET))(this, a1);
	}

	::System::Void Method_2_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_1DE6433C25680F9D_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_95A7FF7AF0E79B18(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_95A7FF7AF0E79B18_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BF6F0FF54BBF3C41(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_BF6F0FF54BBF3C41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5035AF85CDD1C32C(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_5035AF85CDD1C32C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D1305BC17A89C222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_D1305BC17A89C222_OFFSET))(this);
	}

	::System::Int32 Method_2_3389C72D04C6EBF5(::Il2CppArray<::Class_1_ADE34076259CCCF7_2*>* a1, ::RPG::GameCore::SwitchMascotSection a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::Class_1_ADE34076259CCCF7_2*>*, ::RPG::GameCore::SwitchMascotSection))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_3389C72D04C6EBF5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_695579C6786804DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_695579C6786804DA_OFFSET))(this);
	}

	::System::Void Method_2_284B3166B7E1035B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_284B3166B7E1035B_OFFSET))(this, a1);
	}

	::Class_2_0DAF7E6A8AC2BD0A_Class_1_B575E19A8DC2E7A9* Method_2_AFFF454231BE9638(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_2_0DAF7E6A8AC2BD0A_Class_1_B575E19A8DC2E7A9*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_AFFF454231BE9638_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C111959D3BB5616(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_3C111959D3BB5616_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_DA1A8A25D0B64A55(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_DA1A8A25D0B64A55_OFFSET))(this, a1);
	}

	::System::Void Method_2_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_30D1209326FA87FC_1_OFFSET))(this);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_ECAA253D18A27C68(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_ECAA253D18A27C68_OFFSET))(this, a1);
	}

	::System::Void Method_2_E05ADF64DE351167(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_E05ADF64DE351167_OFFSET))(this, a1);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_2_8923446497E3D0C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_8923446497E3D0C5_OFFSET))(this);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_2_B9A97467188E4B69_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_B9A97467188E4B69_1_OFFSET))(this);
	}

	::System::Void Method_2_6864BF0C477F1F62(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_6864BF0C477F1F62_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::UnityEngine::Transform*, ::System::String*> Method_2_93A1480D2A66C53A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Transform*, ::System::String*>(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_93A1480D2A66C53A_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5909B5FD6F94F42(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_F5909B5FD6F94F42_OFFSET))(this, a1);
	}

	::System::Void Method_2_93E150ED784F41DF(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_93E150ED784F41DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_30D1209326FA87FC_2_OFFSET))(this);
	}

	::System::Void Method_2_F62A76C6284AD01E(::RPG::Client::AchievementData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_F62A76C6284AD01E_OFFSET))(this, a1);
	}

	::RPG::GameCore::MazePuzzleSwitchMascotRow* Method_2_7FF4BF6FF88B610E()
	{
		return ((::RPG::GameCore::MazePuzzleSwitchMascotRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_7FF4BF6FF88B610E_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0DAF7E6A8AC2BD0A_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
