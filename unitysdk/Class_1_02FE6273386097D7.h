#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingBulletTrajectoryType.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingCameraType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_87D6E24AEDA0242C;
class Class_1_B1C37B065CBC515F;
class Class_2_181A7F9409C60DBC;
class Class_2_E9C9AAD7C711B3E3;
class Class_3_543326C044264182;
namespace RPG::Client { class ChenLingBattleSnapshot; }
namespace RPG::Client { class ChenLingBattleTeamSnapshot; }
namespace RPG::Client { class ChenLingTableBattleScene; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::LittleGame::ChenLing { class ChenLingCameraTargetSmoother; }
namespace RPG::Client::LittleGame::ChenLing { class ChenLingSoldierView; }
namespace RPG::GameCore { class ChenLingBattleEffectTier; }
namespace RPG::GameCore { class ChenLingBattleGameConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_02FE6273386097D7_METHOD_1_036ACD12E2D9DF41_OFFSET UNITYSDK_OFFSET(0x97C45D0)
#define CLASS_1_02FE6273386097D7_METHOD_1_0A04DB7DF8124C22_OFFSET UNITYSDK_OFFSET(0x97C8BD0)
#define CLASS_1_02FE6273386097D7_METHOD_1_118DD96885F127DE_OFFSET UNITYSDK_OFFSET(0x97C4E90)
#define CLASS_1_02FE6273386097D7_METHOD_1_12169F7EB1F5A97B_OFFSET UNITYSDK_OFFSET(0x97CAFE0)
#define CLASS_1_02FE6273386097D7_METHOD_1_1437F81052A9C43F_OFFSET UNITYSDK_OFFSET(0x97C5C30)
#define CLASS_1_02FE6273386097D7_METHOD_1_1B9BAFE25893B138_OFFSET UNITYSDK_OFFSET(0x97C7000)
#define CLASS_1_02FE6273386097D7_METHOD_1_228BE7D6E20E68F7_OFFSET UNITYSDK_OFFSET(0x97C88E0)
#define CLASS_1_02FE6273386097D7_METHOD_1_2776821F7A628F74_OFFSET UNITYSDK_OFFSET(0x97C9970)
#define CLASS_1_02FE6273386097D7_METHOD_1_2B795518286DA610_OFFSET UNITYSDK_OFFSET(0x97C9D50)
#define CLASS_1_02FE6273386097D7_METHOD_1_2C48225A0FB8906C_OFFSET UNITYSDK_OFFSET(0x97C4C20)
#define CLASS_1_02FE6273386097D7_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x97CABF0)
#define CLASS_1_02FE6273386097D7_METHOD_1_41678CCF340C59EA_OFFSET UNITYSDK_OFFSET(0x97C5090)
#define CLASS_1_02FE6273386097D7_METHOD_1_42E6725EFD1B6BA0_OFFSET UNITYSDK_OFFSET(0x97C9040)
#define CLASS_1_02FE6273386097D7_METHOD_1_43623FBBEE7A8415_OFFSET UNITYSDK_OFFSET(0x97C6DF0)
#define CLASS_1_02FE6273386097D7_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x97C71B0)
#define CLASS_1_02FE6273386097D7_METHOD_1_49003EE8E92354E5_OFFSET UNITYSDK_OFFSET(0x97C4FB0)
#define CLASS_1_02FE6273386097D7_METHOD_1_51190272D9924882_OFFSET UNITYSDK_OFFSET(0x97CB350)
#define CLASS_1_02FE6273386097D7_METHOD_1_6AA6A6A001D95081_OFFSET UNITYSDK_OFFSET(0x97C8B10)
#define CLASS_1_02FE6273386097D7_METHOD_1_701244180638F063_OFFSET UNITYSDK_OFFSET(0x97C5D10)
#define CLASS_1_02FE6273386097D7_METHOD_1_767D5B282FF788EB_OFFSET UNITYSDK_OFFSET(0x97C5120)
#define CLASS_1_02FE6273386097D7_METHOD_1_85D8767709306FA2_OFFSET UNITYSDK_OFFSET(0x97C44B0)
#define CLASS_1_02FE6273386097D7_METHOD_1_894A24F1DEB4A399_OFFSET UNITYSDK_OFFSET(0x97C62D0)
#define CLASS_1_02FE6273386097D7_METHOD_1_8AC2B028E1909CCF_1_OFFSET UNITYSDK_OFFSET(0x97C7B50)
#define CLASS_1_02FE6273386097D7_METHOD_1_8AC2B028E1909CCF_2_OFFSET UNITYSDK_OFFSET(0x97C7F00)
#define CLASS_1_02FE6273386097D7_METHOD_1_8AC2B028E1909CCF_OFFSET UNITYSDK_OFFSET(0x97C7530)
#define CLASS_1_02FE6273386097D7_METHOD_1_8B37A17B7A3F06D8_OFFSET UNITYSDK_OFFSET(0x97C70A0)
#define CLASS_1_02FE6273386097D7_METHOD_1_8E5D4C985555EB16_OFFSET UNITYSDK_OFFSET(0x97C73D0)
#define CLASS_1_02FE6273386097D7_METHOD_1_90CC1CA9AA40A36E_OFFSET UNITYSDK_OFFSET(0x97C5AF0)
#define CLASS_1_02FE6273386097D7_METHOD_1_91073F44A9B505E6_OFFSET UNITYSDK_OFFSET(0x97C89F0)
#define CLASS_1_02FE6273386097D7_METHOD_1_9B563BFE008D17FA_OFFSET UNITYSDK_OFFSET(0x97C41B0)
#define CLASS_1_02FE6273386097D7_METHOD_1_9B7EF5B0B7F9D916_OFFSET UNITYSDK_OFFSET(0x97C3850)
#define CLASS_1_02FE6273386097D7_METHOD_1_A76F6484F982EFF5_OFFSET UNITYSDK_OFFSET(0x97CB090)
#define CLASS_1_02FE6273386097D7_METHOD_1_B03B6003F2894141_OFFSET UNITYSDK_OFFSET(0x97C82B0)
#define CLASS_1_02FE6273386097D7_METHOD_1_B1E5CE354EDCEDFA_OFFSET UNITYSDK_OFFSET(0x97C47A0)
#define CLASS_1_02FE6273386097D7_METHOD_1_B2E435C2B57C46AF_OFFSET UNITYSDK_OFFSET(0x97C5340)
#define CLASS_1_02FE6273386097D7_METHOD_1_B3775441716CFB70_OFFSET UNITYSDK_OFFSET(0x97C4F10)
#define CLASS_1_02FE6273386097D7_METHOD_1_B3E5F8F64C9FFB63_OFFSET UNITYSDK_OFFSET(0x97C4530)
#define CLASS_1_02FE6273386097D7_METHOD_1_B47772CAA0074CF7_OFFSET UNITYSDK_OFFSET(0x97C9550)
#define CLASS_1_02FE6273386097D7_METHOD_1_B5E7E0BBC22840E6_OFFSET UNITYSDK_OFFSET(0x97C78C0)
#define CLASS_1_02FE6273386097D7_METHOD_1_B6B60891A776E34D_OFFSET UNITYSDK_OFFSET(0x97CB410)
#define CLASS_1_02FE6273386097D7_METHOD_1_E05C89B228C6A488_OFFSET UNITYSDK_OFFSET(0x97C4B20)
#define CLASS_1_02FE6273386097D7_METHOD_1_E2EBA78492B2DD15_OFFSET UNITYSDK_OFFSET(0x97C6130)
#define CLASS_1_02FE6273386097D7_METHOD_1_E419BD896E68A583_OFFSET UNITYSDK_OFFSET(0x97C67A0)
#define CLASS_1_02FE6273386097D7_METHOD_1_E45B6D984C7C98E3_OFFSET UNITYSDK_OFFSET(0x97C6AE0)
#define CLASS_1_02FE6273386097D7_METHOD_1_E7AAAAB94C71A1F7_OFFSET UNITYSDK_OFFSET(0x97CA160)
#define CLASS_1_02FE6273386097D7_METHOD_1_E89551A1EA3A5A61_OFFSET UNITYSDK_OFFSET(0x97C3B50)
#define CLASS_1_02FE6273386097D7_METHOD_1_EA710B089D492199_OFFSET UNITYSDK_OFFSET(0x97C86E0)
#define CLASS_1_02FE6273386097D7_METHOD_1_F01411FE44197CE1_OFFSET UNITYSDK_OFFSET(0x97C4670)
#define CLASS_1_02FE6273386097D7_METHOD_1_F373CE7B516BAED2_OFFSET UNITYSDK_OFFSET(0x97C6730)
#define CLASS_1_02FE6273386097D7_METHOD_1_F59691C46D515239_OFFSET UNITYSDK_OFFSET(0x97C4DA0)
#define CLASS_1_02FE6273386097D7__CTOR_OFFSET UNITYSDK_OFFSET(0x97C37F0)

inline static constexpr unsigned int Class_1_02FE6273386097D7_TypeDefinitionIndex = 71305;

class Class_1_02FE6273386097D7 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* Field_1_8; // 0x10
	::RPG::GameCore::ChenLingBattleGameConfig* Field_1_0; // 0x18
	::RPG::GameCore::GameEntity* Field_1_7; // 0x20
	::Class_3_543326C044264182* Field_1_5; // 0x28
	::RPG::Client::ChenLingTableBattleScene* Field_1_6; // 0x30
	::RPG::Client::LittleGame::ChenLing::ChenLingCameraTargetSmoother* Field_1_3; // 0x38
	::Class_2_E9C9AAD7C711B3E3* Field_1_4; // 0x40
	::System::UInt32 Field_1_1; // 0x48
	::System::UInt32 Field_1_2; // 0x4C

	::System::Void _ctor(::Class_2_E9C9AAD7C711B3E3* a1, ::Class_3_543326C044264182* a2, ::RPG::Client::ChenLingTableBattleScene* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E9C9AAD7C711B3E3*, ::Class_3_543326C044264182*, ::RPG::Client::ChenLingTableBattleScene*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::Class_2_181A7F9409C60DBC*>* Method_1_9B7EF5B0B7F9D916(::Class_1_B1C37B065CBC515F* a1, ::RPG::Client::ChenLingBattleTeamSnapshot* a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_181A7F9409C60DBC*>*(*)(::PVOID, ::Class_1_B1C37B065CBC515F*, ::RPG::Client::ChenLingBattleTeamSnapshot*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_9B7EF5B0B7F9D916_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_181A7F9409C60DBC* Method_1_E89551A1EA3A5A61(::Class_1_B1C37B065CBC515F* a1, ::Class_1_87D6E24AEDA0242C* a2, ::RPG::Client::ChenLingBattleTeamSnapshot* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID, ::Class_1_B1C37B065CBC515F*, ::Class_1_87D6E24AEDA0242C*, ::RPG::Client::ChenLingBattleTeamSnapshot*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_E89551A1EA3A5A61_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::GameObject* Method_1_9B563BFE008D17FA(::Class_2_181A7F9409C60DBC* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_9B563BFE008D17FA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E419BD896E68A583(::UnityEngine::GameObject* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_E419BD896E68A583_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F01411FE44197CE1(::RPG::Client::ChenLingTableBattleScene* a1, ::Class_1_87D6E24AEDA0242C* a2, ::Class_2_181A7F9409C60DBC* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingTableBattleScene*, ::Class_1_87D6E24AEDA0242C*, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_F01411FE44197CE1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B1E5CE354EDCEDFA(::RPG::Client::ChenLingTableBattleScene* a1, ::Class_1_87D6E24AEDA0242C* a2, ::Class_2_181A7F9409C60DBC* a3, ::UnityEngine::GameObject* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingTableBattleScene*, ::Class_1_87D6E24AEDA0242C*, ::Class_2_181A7F9409C60DBC*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_B1E5CE354EDCEDFA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_E05C89B228C6A488(::RPG::Client::ChenLingTableBattleScene* a1, ::Class_2_181A7F9409C60DBC* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingTableBattleScene*, ::Class_2_181A7F9409C60DBC*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_E05C89B228C6A488_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_85D8767709306FA2(::Class_2_181A7F9409C60DBC* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_85D8767709306FA2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B3E5F8F64C9FFB63(::Class_1_B1C37B065CBC515F* a1, ::Class_1_87D6E24AEDA0242C* a2, ::Class_2_181A7F9409C60DBC* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1C37B065CBC515F*, ::Class_1_87D6E24AEDA0242C*, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_B3E5F8F64C9FFB63_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_036ACD12E2D9DF41(::Class_1_B1C37B065CBC515F* a1, ::Class_2_181A7F9409C60DBC* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1C37B065CBC515F*, ::Class_2_181A7F9409C60DBC*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_036ACD12E2D9DF41_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F59691C46D515239(::Class_1_87D6E24AEDA0242C* a1, ::Class_2_181A7F9409C60DBC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87D6E24AEDA0242C*, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_F59691C46D515239_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_118DD96885F127DE(::Class_1_87D6E24AEDA0242C* a1, ::Class_2_181A7F9409C60DBC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87D6E24AEDA0242C*, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_118DD96885F127DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B3775441716CFB70(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_B3775441716CFB70_OFFSET))(this, a1);
	}

	::System::Void Method_1_49003EE8E92354E5(::Class_2_181A7F9409C60DBC* a1, ::Class_2_E9C9AAD7C711B3E3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_E9C9AAD7C711B3E3*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_49003EE8E92354E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_41678CCF340C59EA(::RPG::Client::ChenLingBattleTeamSnapshot* a1, ::Class_2_181A7F9409C60DBC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleTeamSnapshot*, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_41678CCF340C59EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_767D5B282FF788EB(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_767D5B282FF788EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2E435C2B57C46AF(::Class_1_B1C37B065CBC515F* a1, ::Class_2_181A7F9409C60DBC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1C37B065CBC515F*, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_B2E435C2B57C46AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C48225A0FB8906C(::Class_1_87D6E24AEDA0242C* a1, ::Class_2_181A7F9409C60DBC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87D6E24AEDA0242C*, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_2C48225A0FB8906C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_90CC1CA9AA40A36E(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_90CC1CA9AA40A36E_OFFSET))(this, a1);
	}

	::System::Void Method_1_1437F81052A9C43F(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_1437F81052A9C43F_OFFSET))(this, a1);
	}

	::System::Void Method_1_43623FBBEE7A8415(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_43623FBBEE7A8415_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_701244180638F063(::Class_2_181A7F9409C60DBC* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_701244180638F063_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E2EBA78492B2DD15(::UnityEngine::Vector3 a1, ::Class_2_181A7F9409C60DBC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_E2EBA78492B2DD15_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_894A24F1DEB4A399(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_894A24F1DEB4A399_OFFSET))(this, a1);
	}

	::System::Void Method_1_F373CE7B516BAED2(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierView* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierView*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_F373CE7B516BAED2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1B9BAFE25893B138()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_1B9BAFE25893B138_OFFSET))(this);
	}

	::System::Void Method_1_8B37A17B7A3F06D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_8B37A17B7A3F06D8_OFFSET))(this);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::Class_2_181A7F9409C60DBC* Method_1_8E5D4C985555EB16(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2, ::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType a3, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a4, ::System::Single a5, ::System::String* a6)
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*, ::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_8E5D4C985555EB16_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_2_181A7F9409C60DBC* Method_1_8AC2B028E1909CCF(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_8AC2B028E1909CCF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_2_181A7F9409C60DBC* Method_1_B5E7E0BBC22840E6(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_B5E7E0BBC22840E6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_2_181A7F9409C60DBC* Method_1_8AC2B028E1909CCF_1(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_8AC2B028E1909CCF_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_2_181A7F9409C60DBC* Method_1_8AC2B028E1909CCF_2(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a3, ::System::Single a4, ::System::String* a5)
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_8AC2B028E1909CCF_2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_228BE7D6E20E68F7(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_228BE7D6E20E68F7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_91073F44A9B505E6(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_91073F44A9B505E6_OFFSET))(this, a1, a2);
	}

	::Class_2_181A7F9409C60DBC* Method_1_B03B6003F2894141(::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType a1, ::Class_2_181A7F9409C60DBC* a2, ::Class_2_181A7F9409C60DBC* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingBulletTrajectoryType, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_B03B6003F2894141_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_EA710B089D492199(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2, ::System::String* a3, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*, ::System::String*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_EA710B089D492199_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* Method_1_6AA6A6A001D95081(::RPG::GameCore::ChenLingBattleEffectTier* a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleEffectTier*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_6AA6A6A001D95081_OFFSET))(this, a1);
	}

	::Class_2_181A7F9409C60DBC* Method_1_0A04DB7DF8124C22(::Class_2_181A7F9409C60DBC* a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_0A04DB7DF8124C22_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_2_181A7F9409C60DBC* Method_1_42E6725EFD1B6BA0(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2, ::System::Boolean a3, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a4, ::System::String* a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10)
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*, ::System::Boolean, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_42E6725EFD1B6BA0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::Class_2_181A7F9409C60DBC* Method_1_B47772CAA0074CF7(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*, ::System::String*, ::System::String*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_B47772CAA0074CF7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::RPG::Client::MonoEffect* Method_1_2776821F7A628F74(::Class_2_181A7F9409C60DBC* a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6)
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_2776821F7A628F74_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_2_181A7F9409C60DBC* Method_1_2B795518286DA610(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::Single a6, ::System::Single a7, ::RPG::MVector3 a8)
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*, ::System::String*, ::System::String*, ::System::String*, ::System::Single, ::System::Single, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_2B795518286DA610_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_E7AAAAB94C71A1F7(::RPG::Client::ChenLingBattleSnapshot* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleSnapshot*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_E7AAAAB94C71A1F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_E45B6D984C7C98E3(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_E45B6D984C7C98E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_1_12169F7EB1F5A97B(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_12169F7EB1F5A97B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A76F6484F982EFF5(::UnityEngine::Transform* a1, ::System::String* a2, ::RPG::Client::LittleGame::ChenLing::ChenLingCameraType a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::RPG::Client::LittleGame::ChenLing::ChenLingCameraType))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_A76F6484F982EFF5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B6B60891A776E34D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_B6B60891A776E34D_OFFSET))(this, a1);
	}

	::System::Void Method_1_51190272D9924882(::UnityEngine::Transform* a1, ::System::String* a2, ::RPG::Client::LittleGame::ChenLing::ChenLingCameraType a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::RPG::Client::LittleGame::ChenLing::ChenLingCameraType))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7_METHOD_1_51190272D9924882_OFFSET))(this, a1, a2, a3);
	}
};
