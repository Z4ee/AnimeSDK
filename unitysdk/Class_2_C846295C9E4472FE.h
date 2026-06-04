#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GameModeState.h"
#include "unitysdk/Struct_2_2DEC9C8F439E3FDC.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_48FB41EE27FB816A;
namespace RPG::Client { class BattleShowMessageManager_Message; }
namespace RPG::Client { class ScreenEventHandler; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TeamDataComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_2_C846295C9E4472FE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x137005F0)
#define CLASS_2_C846295C9E4472FE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13700950)
#define CLASS_2_C846295C9E4472FE_METHOD_2_00D9C214C63942A7_OFFSET UNITYSDK_OFFSET(0x136FE250)
#define CLASS_2_C846295C9E4472FE_METHOD_2_039E68BE35BA95A0_OFFSET UNITYSDK_OFFSET(0x136FBC00)
#define CLASS_2_C846295C9E4472FE_METHOD_2_10828DABB0E782BB_OFFSET UNITYSDK_OFFSET(0x13700060)
#define CLASS_2_C846295C9E4472FE_METHOD_2_1A7F9F3B13A09C96_OFFSET UNITYSDK_OFFSET(0x136FBAB0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_1DB5F6F49056B00D_OFFSET UNITYSDK_OFFSET(0x136FDF90)
#define CLASS_2_C846295C9E4472FE_METHOD_2_1DF1FA98B6A6B5EE_OFFSET UNITYSDK_OFFSET(0x136FC370)
#define CLASS_2_C846295C9E4472FE_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x136FBC50)
#define CLASS_2_C846295C9E4472FE_METHOD_2_229E068D4C618706_OFFSET UNITYSDK_OFFSET(0x136FEE80)
#define CLASS_2_C846295C9E4472FE_METHOD_2_39845204DD04FC33_OFFSET UNITYSDK_OFFSET(0x136FC0D0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_3CE8A1831DA14AB7_OFFSET UNITYSDK_OFFSET(0x136FBF90)
#define CLASS_2_C846295C9E4472FE_METHOD_2_402EB65ACFB641A1_OFFSET UNITYSDK_OFFSET(0x136FDA20)
#define CLASS_2_C846295C9E4472FE_METHOD_2_48DCE3E9EBCCF56D_OFFSET UNITYSDK_OFFSET(0x136FF970)
#define CLASS_2_C846295C9E4472FE_METHOD_2_4927ACC1FFCD0949_OFFSET UNITYSDK_OFFSET(0x136FCE50)
#define CLASS_2_C846295C9E4472FE_METHOD_2_494DEE1E2F1B0134_OFFSET UNITYSDK_OFFSET(0x136FCB80)
#define CLASS_2_C846295C9E4472FE_METHOD_2_4EF39E24235C05BA_OFFSET UNITYSDK_OFFSET(0x136FC1B0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13700DC0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13700D00)
#define CLASS_2_C846295C9E4472FE_METHOD_2_5B176AC622BC2444_OFFSET UNITYSDK_OFFSET(0x136FCD80)
#define CLASS_2_C846295C9E4472FE_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0x137001E0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_679BB2AF51138481_OFFSET UNITYSDK_OFFSET(0x136FBF20)
#define CLASS_2_C846295C9E4472FE_METHOD_2_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x136FB2E0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_86A377FCCC9B32B3_OFFSET UNITYSDK_OFFSET(0x136FFD50)
#define CLASS_2_C846295C9E4472FE_METHOD_2_8C40D8A084322E50_OFFSET UNITYSDK_OFFSET(0x136FC500)
#define CLASS_2_C846295C9E4472FE_METHOD_2_95D5F1592312589E_1_OFFSET UNITYSDK_OFFSET(0x136FCAE0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_95D5F1592312589E_OFFSET UNITYSDK_OFFSET(0x136FC560)
#define CLASS_2_C846295C9E4472FE_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x136FD350)
#define CLASS_2_C846295C9E4472FE_METHOD_2_9805F2901C5A7FC1_OFFSET UNITYSDK_OFFSET(0x136FED80)
#define CLASS_2_C846295C9E4472FE_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x13700420)
#define CLASS_2_C846295C9E4472FE_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x13700590)
#define CLASS_2_C846295C9E4472FE_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x137002A0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x13700160)
#define CLASS_2_C846295C9E4472FE_METHOD_2_A80EDC4C30C0B325_OFFSET UNITYSDK_OFFSET(0x136FC5F0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_A8A5F504A3B05FA7_OFFSET UNITYSDK_OFFSET(0x136FF6E0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_AA957E371B77E633_OFFSET UNITYSDK_OFFSET(0x136FB640)
#define CLASS_2_C846295C9E4472FE_METHOD_2_B81305259F90066A_OFFSET UNITYSDK_OFFSET(0x136FD5B0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_C13C45A3024DF1A7_OFFSET UNITYSDK_OFFSET(0x136FE2A0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0x13700480)
#define CLASS_2_C846295C9E4472FE_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x13700E20)
#define CLASS_2_C846295C9E4472FE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x136FBA70)
#define CLASS_2_C846295C9E4472FE_METHOD_2_CFC0F3075E9B25EB_OFFSET UNITYSDK_OFFSET(0x136FCEC0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_D8E98D94952958C7_OFFSET UNITYSDK_OFFSET(0x136FFEC0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x136FC3D0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_EF791A79C773DCBB_OFFSET UNITYSDK_OFFSET(0x136FD480)
#define CLASS_2_C846295C9E4472FE_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x13700350)
#define CLASS_2_C846295C9E4472FE_METHOD_2_F6B522B422985D1A_OFFSET UNITYSDK_OFFSET(0x136FD3F0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x136FB850)
#define CLASS_2_C846295C9E4472FE_METHOD_2_FA80DEE7A8A6761B_OFFSET UNITYSDK_OFFSET(0x136FF370)
#define CLASS_2_C846295C9E4472FE__CTOR_OFFSET UNITYSDK_OFFSET(0x13700C70)
#define CLASS_2_C846295C9E4472FE__ONBIND_OFFSET UNITYSDK_OFFSET(0x136FB280)
#define CLASS_2_C846295C9E4472FE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x136FBBA0)
#define CLASS_2_C846295C9E4472FE__ONTICK_OFFSET UNITYSDK_OFFSET(0x136FB5E0)
#define CLASS_2_C846295C9E4472FE___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13700EE0)
#define CLASS_2_C846295C9E4472FE___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13700F40)
#define CLASS_2_C846295C9E4472FE___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13700CA0)
#define CLASS_2_C846295C9E4472FE___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x13700E80)
#define CLASS_2_C846295C9E4472FE___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x13700D60)

inline static constexpr unsigned int Class_2_C846295C9E4472FE_TypeDefinitionIndex = 67301;

class Class_2_C846295C9E4472FE : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::LevelUIComponent* Field_2_0; // 0x60
	::RPG::GameCore::EntityManager* Field_2_1; // 0x68
	::Class_1_48FB41EE27FB816A* Field_2_2; // 0x70
	::RPG::Client::ScreenEventHandler* Field_2_3; // 0x78
	::RPG::GameCore::TeamDataComponent* Field_2_4; // 0x80
	::RPG::GameCore::BattleInstance* Field_2_5; // 0x88
	::System::String* Field_2_6; // 0x90
	::RPG::GameCore::GameModeState Field_2_7; // 0x98
	::System::Single Field_2_8; // 0x9C
	::System::UInt32 Field_2_9; // 0xA0
	::System::Single Field_2_10; // 0xA4
	::RPG::Client::TextID Field_2_11; // 0xA8
	::System::Single Field_2_12; // 0xB8
	::System::Single Field_2_13; // 0xBC
	::System::Single Field_2_14; // 0xC0
	::System::Boolean Field_2_15; // 0xC4
	::System::Boolean Field_2_16; // 0xC5
	::System::Boolean Field_2_17; // 0xC6
	::System::Boolean Field_2_18; // 0xC7
	::System::Boolean Field_2_19; // 0xC8
	::System::Single Field_2_20; // 0xCC
	::System::Single Field_2_21; // 0xD0
	::UnityEngine::Vector2 Field_2_22; // 0xD4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_7A73F165001BC325()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_7A73F165001BC325_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1A7F9F3B13A09C96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_1A7F9F3B13A09C96_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_039E68BE35BA95A0(::RPG::GameCore::BattleInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_039E68BE35BA95A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_679BB2AF51138481(::RPG::Client::BattleShowMessageManager_Message* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleShowMessageManager_Message*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_679BB2AF51138481_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CE8A1831DA14AB7(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_3CE8A1831DA14AB7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_39845204DD04FC33(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_39845204DD04FC33_OFFSET))(this, a1);
	}

	::System::Void Method_2_1DF1FA98B6A6B5EE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_1DF1FA98B6A6B5EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_8C40D8A084322E50(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_8C40D8A084322E50_OFFSET))(this, a1);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_2_95D5F1592312589E(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_95D5F1592312589E_OFFSET))(this, a1);
	}

	::System::Void Method_2_95D5F1592312589E_1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_95D5F1592312589E_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B176AC622BC2444(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_5B176AC622BC2444_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFC0F3075E9B25EB(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_CFC0F3075E9B25EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_402EB65ACFB641A1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_402EB65ACFB641A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1DB5F6F49056B00D(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_1DB5F6F49056B00D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4EF39E24235C05BA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_4EF39E24235C05BA_OFFSET))(this);
	}

	::System::Boolean Method_2_4927ACC1FFCD0949(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_4927ACC1FFCD0949_OFFSET))(this, a1);
	}

	::System::Void Method_2_A80EDC4C30C0B325(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_A80EDC4C30C0B325_OFFSET))(this, a1);
	}

	::System::Void Method_2_494DEE1E2F1B0134(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_494DEE1E2F1B0134_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_2_C13C45A3024DF1A7(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_C13C45A3024DF1A7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_48DCE3E9EBCCF56D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::EventSystems::PointerEventData* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_48DCE3E9EBCCF56D_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_86A377FCCC9B32B3(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_86A377FCCC9B32B3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_229E068D4C618706(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Ray a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Ray, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_229E068D4C618706_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntity* Method_2_A8A5F504A3B05FA7(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Ray a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_A8A5F504A3B05FA7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FA80DEE7A8A6761B(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::Struct_2_2DEC9C8F439E3FDC>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Struct_2_2DEC9C8F439E3FDC>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_FA80DEE7A8A6761B_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_2DEC9C8F439E3FDC Method_2_10828DABB0E782BB(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::Struct_2_2DEC9C8F439E3FDC>* a2)
	{
		return ((::Struct_2_2DEC9C8F439E3FDC(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Struct_2_2DEC9C8F439E3FDC>*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_10828DABB0E782BB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D8E98D94952958C7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_D8E98D94952958C7_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_2_EF791A79C773DCBB(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_EF791A79C773DCBB_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F6B522B422985D1A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_F6B522B422985D1A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_2_B81305259F90066A()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_B81305259F90066A_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9805F2901C5A7FC1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_9805F2901C5A7FC1_OFFSET))(this, a1);
	}

	::System::Void Method_2_00D9C214C63942A7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_00D9C214C63942A7_OFFSET))(this);
	}

	::System::Void Method_2_AA957E371B77E633()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_AA957E371B77E633_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
