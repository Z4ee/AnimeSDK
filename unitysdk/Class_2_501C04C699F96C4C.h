#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/RPG/GameCore/SwitchMascotSection.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_375;
class Class_1_23F67DD15593C8D6;
class Class_1_ADE34076259CCCF7_2;
class Class_2_501C04C699F96C4C_Class_1_B575E19A8DC2E7A9;
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

#define CLASS_2_501C04C699F96C4C_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x8D2DCA0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x8D2BB80)
#define CLASS_2_501C04C699F96C4C_METHOD_2_019FAF8DF887E9D8_OFFSET UNITYSDK_OFFSET(0x8D2B300)
#define CLASS_2_501C04C699F96C4C_METHOD_2_04C8F82349DC4E83_1_OFFSET UNITYSDK_OFFSET(0x8D303A0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_04C8F82349DC4E83_OFFSET UNITYSDK_OFFSET(0x8D301C0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x8D2B720)
#define CLASS_2_501C04C699F96C4C_METHOD_2_0ED51BEF22C2FF5B_OFFSET UNITYSDK_OFFSET(0x8D2CBC0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x8D313A0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x8D2DD60)
#define CLASS_2_501C04C699F96C4C_METHOD_2_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x8D2B8E0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_1E27A7B84BD57C4A_OFFSET UNITYSDK_OFFSET(0x8D2FFB0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x8D2E780)
#define CLASS_2_501C04C699F96C4C_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x8D2D790)
#define CLASS_2_501C04C699F96C4C_METHOD_2_284B3166B7E1035B_OFFSET UNITYSDK_OFFSET(0x8D30A60)
#define CLASS_2_501C04C699F96C4C_METHOD_2_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0x8D2E900)
#define CLASS_2_501C04C699F96C4C_METHOD_2_30D1209326FA87FC_2_OFFSET UNITYSDK_OFFSET(0x8D2B600)
#define CLASS_2_501C04C699F96C4C_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8D2D010)
#define CLASS_2_501C04C699F96C4C_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8D2F670)
#define CLASS_2_501C04C699F96C4C_METHOD_2_3C111959D3BB5616_OFFSET UNITYSDK_OFFSET(0x8D31F50)
#define CLASS_2_501C04C699F96C4C_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8D2FF60)
#define CLASS_2_501C04C699F96C4C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8D2D550)
#define CLASS_2_501C04C699F96C4C_METHOD_2_4593246B8A911FE1_OFFSET UNITYSDK_OFFSET(0x8D32150)
#define CLASS_2_501C04C699F96C4C_METHOD_2_463A5CCB24F47BB6_OFFSET UNITYSDK_OFFSET(0x8D2EA50)
#define CLASS_2_501C04C699F96C4C_METHOD_2_5035AF85CDD1C32C_OFFSET UNITYSDK_OFFSET(0x8D31520)
#define CLASS_2_501C04C699F96C4C_METHOD_2_57B2EBADDC82E2F5_OFFSET UNITYSDK_OFFSET(0x8D2E880)
#define CLASS_2_501C04C699F96C4C_METHOD_2_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x8D309A0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x8D312C0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_5EE047E48143A8CA_OFFSET UNITYSDK_OFFSET(0x8D2E9F0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x8D2D340)
#define CLASS_2_501C04C699F96C4C_METHOD_2_623EAEB8D1DF0AA1_OFFSET UNITYSDK_OFFSET(0x8D2F2E0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_6864BF0C477F1F62_OFFSET UNITYSDK_OFFSET(0x8D2E230)
#define CLASS_2_501C04C699F96C4C_METHOD_2_695579C6786804DA_OFFSET UNITYSDK_OFFSET(0x8D2D160)
#define CLASS_2_501C04C699F96C4C_METHOD_2_7163BBB1CD5A2114_1_OFFSET UNITYSDK_OFFSET(0x8D2EC20)
#define CLASS_2_501C04C699F96C4C_METHOD_2_7163BBB1CD5A2114_OFFSET UNITYSDK_OFFSET(0x8D2EB10)
#define CLASS_2_501C04C699F96C4C_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x8D325C0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_7FF4BF6FF88B610E_OFFSET UNITYSDK_OFFSET(0x8D32320)
#define CLASS_2_501C04C699F96C4C_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x8D2C760)
#define CLASS_2_501C04C699F96C4C_METHOD_2_8923446497E3D0C5_OFFSET UNITYSDK_OFFSET(0x8D2D940)
#define CLASS_2_501C04C699F96C4C_METHOD_2_93A1480D2A66C53A_OFFSET UNITYSDK_OFFSET(0x8D2FE10)
#define CLASS_2_501C04C699F96C4C_METHOD_2_952E03771D024CEE_OFFSET UNITYSDK_OFFSET(0x8D2ED30)
#define CLASS_2_501C04C699F96C4C_METHOD_2_95A7FF7AF0E79B18_OFFSET UNITYSDK_OFFSET(0x8D31430)
#define CLASS_2_501C04C699F96C4C_METHOD_2_9725A4CA0CFEC673_OFFSET UNITYSDK_OFFSET(0x8D2B4D0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_A0EFDC02874C650B_OFFSET UNITYSDK_OFFSET(0x8D2E560)
#define CLASS_2_501C04C699F96C4C_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x8D2E830)
#define CLASS_2_501C04C699F96C4C_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x8D2F610)
#define CLASS_2_501C04C699F96C4C_METHOD_2_A88CDF038776FAA5_OFFSET UNITYSDK_OFFSET(0x8D30220)
#define CLASS_2_501C04C699F96C4C_METHOD_2_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x8D2E7E0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x8D2CEC0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_AFFF454231BE9638_OFFSET UNITYSDK_OFFSET(0x8D31CF0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x8D32330)
#define CLASS_2_501C04C699F96C4C_METHOD_2_B9A97467188E4B69_1_OFFSET UNITYSDK_OFFSET(0x8D2D5B0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x8D2C560)
#define CLASS_2_501C04C699F96C4C_METHOD_2_BD8B602BBEDF6A67_OFFSET UNITYSDK_OFFSET(0x8D31840)
#define CLASS_2_501C04C699F96C4C_METHOD_2_BF6F0FF54BBF3C41_OFFSET UNITYSDK_OFFSET(0x8D31770)
#define CLASS_2_501C04C699F96C4C_METHOD_2_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0x8D2C3A0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x8D2B6B0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0x8D2CD90)
#define CLASS_2_501C04C699F96C4C_METHOD_2_DA1A8A25D0B64A55_OFFSET UNITYSDK_OFFSET(0x8D31DF0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_DC3142F930ECD6F8_OFFSET UNITYSDK_OFFSET(0x8D2F6C0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x8D2CA00)
#define CLASS_2_501C04C699F96C4C_METHOD_2_DF7CEFC0E6C5FD0D_1_OFFSET UNITYSDK_OFFSET(0x8D304C0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_DF7CEFC0E6C5FD0D_2_OFFSET UNITYSDK_OFFSET(0x8D30580)
#define CLASS_2_501C04C699F96C4C_METHOD_2_DF7CEFC0E6C5FD0D_3_OFFSET UNITYSDK_OFFSET(0x8D30640)
#define CLASS_2_501C04C699F96C4C_METHOD_2_DF7CEFC0E6C5FD0D_4_OFFSET UNITYSDK_OFFSET(0x8D30820)
#define CLASS_2_501C04C699F96C4C_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x8D30400)
#define CLASS_2_501C04C699F96C4C_METHOD_2_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0x8D320A0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_ECAA253D18A27C68_OFFSET UNITYSDK_OFFSET(0x8D2E1C0)
#define CLASS_2_501C04C699F96C4C_METHOD_2_F62A76C6284AD01E_OFFSET UNITYSDK_OFFSET(0x8D30020)
#define CLASS_2_501C04C699F96C4C_ONINIT_OFFSET UNITYSDK_OFFSET(0x8D2AF60)
#define CLASS_2_501C04C699F96C4C_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x8D2CAB0)
#define CLASS_2_501C04C699F96C4C_TICK_OFFSET UNITYSDK_OFFSET(0x8D2DCB0)
#define CLASS_2_501C04C699F96C4C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D32430)
#define CLASS_2_501C04C699F96C4C__CTOR_OFFSET UNITYSDK_OFFSET(0x8D32340)
#define CLASS_2_501C04C699F96C4C___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x8D32490)
#define CLASS_2_501C04C699F96C4C___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x8D324F0)
#define CLASS_2_501C04C699F96C4C___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8D32550)

inline static constexpr unsigned int Class_2_501C04C699F96C4C_TypeDefinitionIndex = 48846;

class Class_2_501C04C699F96C4C : public ::Class_1_47C4886CB6C61234
{
public:
	static ::System::String** StaticGet_Field_2_26()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_501C04C699F96C4C_TypeDefinitionIndex)->GetStaticField(0x12AB0);
	}
	static ::System::String** StaticGet_Field_2_27()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_501C04C699F96C4C_TypeDefinitionIndex)->GetStaticField(0x12AB8);
	}
	static ::System::String** StaticGet_Field_2_25()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_501C04C699F96C4C_TypeDefinitionIndex)->GetStaticField(0x12AC0);
	}
	static ::System::UInt32* StaticGet_Field_2_28()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_501C04C699F96C4C_TypeDefinitionIndex)->GetStaticField(0x57F0);
	}
	::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Field_2_18; // 0x20
	::RPG::Client::MonoDroneAirwallControl* Field_2_6; // 0x28
	::RPG::GameCore::GameEntity* Field_2_19; // 0x30
	::RPG::GameCore::SwitchMascotConfig* Field_2_4; // 0x38
	::RPG::Client::AchievementData* Field_2_24; // 0x40
	::RPG::GameCore::AdventureCharacterController* Field_2_2; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_501C04C699F96C4C_Class_1_B575E19A8DC2E7A9*>* Field_2_16; // 0x50
	::RPG::GameCore::MazePuzzleSwitchMascotRow* Field_2_3; // 0x58
	::RPG::GameCore::GameEntity* Field_2_1; // 0x60
	::RPG::Client::SwitchMascotPuzzleBoard* Field_2_0; // 0x68
	::UnityEngine::GameObject* Field_2_5; // 0x70
	::Class_1_23F67DD15593C8D6* Field_2_15; // 0x78
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_13; // 0x80
	::System::Int32 Field_2_12; // 0x88
	::System::Single Field_2_21; // 0x8C
	::System::Single Field_2_17; // 0x90
	::System::Boolean Field_2_9; // 0x94
	::System::Boolean Field_2_22; // 0x95
	::System::Int32 Field_2_14; // 0x98
	::System::UInt64 Field_2_7; // 0xA0
	::System::Boolean Field_2_20; // 0xA8
	::System::Boolean Field_2_10; // 0xA9
	::System::Boolean Field_2_8; // 0xAA
	::System::Boolean Field_2_23; // 0xAB
	::System::Single Field_2_11; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C__CCTOR_OFFSET))();
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_ONUNINIT_OFFSET))(this);
	}

	::System::Boolean get_NeedTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_GET_NEEDTICK_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_2_57B2EBADDC82E2F5(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_57B2EBADDC82E2F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5EE047E48143A8CA(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_5EE047E48143A8CA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_463A5CCB24F47BB6(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_463A5CCB24F47BB6_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_7163BBB1CD5A2114(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_7163BBB1CD5A2114_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_7163BBB1CD5A2114_1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_7163BBB1CD5A2114_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_952E03771D024CEE(::RPG::GameCore::SwitchMascotSection a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchMascotSection, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_952E03771D024CEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_623EAEB8D1DF0AA1(::RPG::GameCore::SwitchMascotSection a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchMascotSection))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_623EAEB8D1DF0AA1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_DC3142F930ECD6F8(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_DC3142F930ECD6F8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E27A7B84BD57C4A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_1E27A7B84BD57C4A_OFFSET))(this, a1);
	}

	::System::Void Method_2_019FAF8DF887E9D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_019FAF8DF887E9D8_OFFSET))(this);
	}

	::System::Void Method_2_0ED51BEF22C2FF5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_0ED51BEF22C2FF5B_OFFSET))(this);
	}

	::System::Void Method_2_9725A4CA0CFEC673()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_9725A4CA0CFEC673_OFFSET))(this);
	}

	::System::Void Method_2_D4499A0147676A9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_D4499A0147676A9C_OFFSET))(this);
	}

	::System::Void Method_2_04C8F82349DC4E83(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_04C8F82349DC4E83_OFFSET))(this, a1);
	}

	::System::Void Method_2_04C8F82349DC4E83_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_04C8F82349DC4E83_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_DF7CEFC0E6C5FD0D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_DF7CEFC0E6C5FD0D_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_DF7CEFC0E6C5FD0D_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_DF7CEFC0E6C5FD0D_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_DC715239B8B98D9C_OFFSET))(this);
	}

	::System::Void Method_2_A88CDF038776FAA5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_A88CDF038776FAA5_OFFSET))(this, a1);
	}

	::System::Void Method_2_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_1DE6433C25680F9D_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_95A7FF7AF0E79B18(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_95A7FF7AF0E79B18_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BF6F0FF54BBF3C41(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_BF6F0FF54BBF3C41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5035AF85CDD1C32C(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_5035AF85CDD1C32C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D1305BC17A89C222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_D1305BC17A89C222_OFFSET))(this);
	}

	::System::Int32 Method_2_BD8B602BBEDF6A67(::Il2CppArray<::Class_1_ADE34076259CCCF7_2*>* a1, ::RPG::GameCore::SwitchMascotSection a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::Class_1_ADE34076259CCCF7_2*>*, ::RPG::GameCore::SwitchMascotSection))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_BD8B602BBEDF6A67_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_695579C6786804DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_695579C6786804DA_OFFSET))(this);
	}

	::System::Void Method_2_284B3166B7E1035B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_284B3166B7E1035B_OFFSET))(this, a1);
	}

	::Class_2_501C04C699F96C4C_Class_1_B575E19A8DC2E7A9* Method_2_AFFF454231BE9638(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_2_501C04C699F96C4C_Class_1_B575E19A8DC2E7A9*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_AFFF454231BE9638_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C111959D3BB5616(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_3C111959D3BB5616_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_DA1A8A25D0B64A55(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_DA1A8A25D0B64A55_OFFSET))(this, a1);
	}

	::System::Void Method_2_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_30D1209326FA87FC_1_OFFSET))(this);
	}

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_ECAA253D18A27C68(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_ECAA253D18A27C68_OFFSET))(this, a1);
	}

	::System::Void Method_2_E05ADF64DE351167(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_E05ADF64DE351167_OFFSET))(this, a1);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_2_8923446497E3D0C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_8923446497E3D0C5_OFFSET))(this);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_2_B9A97467188E4B69_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_B9A97467188E4B69_1_OFFSET))(this);
	}

	::System::Void Method_2_6864BF0C477F1F62(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_6864BF0C477F1F62_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::UnityEngine::Transform*, ::System::String*> Method_2_93A1480D2A66C53A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Transform*, ::System::String*>(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_93A1480D2A66C53A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0EFDC02874C650B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_A0EFDC02874C650B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4593246B8A911FE1(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_4593246B8A911FE1_OFFSET))(this, a1);
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_30D1209326FA87FC_2_OFFSET))(this);
	}

	::System::Void Method_2_F62A76C6284AD01E(::RPG::Client::AchievementData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AchievementData*))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_F62A76C6284AD01E_OFFSET))(this, a1);
	}

	::RPG::GameCore::MazePuzzleSwitchMascotRow* Method_2_7FF4BF6FF88B610E()
	{
		return ((::RPG::GameCore::MazePuzzleSwitchMascotRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_7FF4BF6FF88B610E_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_501C04C699F96C4C_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
