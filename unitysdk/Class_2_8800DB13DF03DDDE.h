#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GameModeState.h"
#include "unitysdk/Struct_2_2DEC9C8F439E3FDC.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_48FB41EE27FB816A_1;
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

#define CLASS_2_8800DB13DF03DDDE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16ED8A30)
#define CLASS_2_8800DB13DF03DDDE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16ED8D90)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_039E68BE35BA95A0_OFFSET UNITYSDK_OFFSET(0x16ED3FC0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_10828DABB0E782BB_OFFSET UNITYSDK_OFFSET(0x16ED8370)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_1A7F9F3B13A09C96_OFFSET UNITYSDK_OFFSET(0x16ED3E70)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_1CDE2A8C8FE989F7_OFFSET UNITYSDK_OFFSET(0x16ED7760)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_1DB5F6F49056B00D_OFFSET UNITYSDK_OFFSET(0x16ED6390)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_1DF1FA98B6A6B5EE_OFFSET UNITYSDK_OFFSET(0x16ED4780)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x16ED4010)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_229E068D4C618706_OFFSET UNITYSDK_OFFSET(0x16ED7270)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x16ED3C00)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_36B3126FAEF06CA3_OFFSET UNITYSDK_OFFSET(0x16ED6650)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_39845204DD04FC33_OFFSET UNITYSDK_OFFSET(0x16ED44A0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_3CE8A1831DA14AB7_OFFSET UNITYSDK_OFFSET(0x16ED4360)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_402EB65ACFB641A1_OFFSET UNITYSDK_OFFSET(0x16ED5E20)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_48DCE3E9EBCCF56D_OFFSET UNITYSDK_OFFSET(0x16ED7C90)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_4927ACC1FFCD0949_OFFSET UNITYSDK_OFFSET(0x16ED5260)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_5B176AC622BC2444_OFFSET UNITYSDK_OFFSET(0x16ED5190)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_679BB2AF51138481_OFFSET UNITYSDK_OFFSET(0x16ED42F0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x16ED3610)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x16ED36A0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_7F1CBD739B38B9CA_OFFSET UNITYSDK_OFFSET(0x16ED4F90)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_86A377FCCC9B32B3_OFFSET UNITYSDK_OFFSET(0x16ED8070)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_8C40D8A084322E50_OFFSET UNITYSDK_OFFSET(0x16ED4910)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_95D5F1592312589E_1_OFFSET UNITYSDK_OFFSET(0x16ED4EF0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_95D5F1592312589E_OFFSET UNITYSDK_OFFSET(0x16ED4970)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16ED5760)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x16ED8860)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_9805F2901C5A7FC1_OFFSET UNITYSDK_OFFSET(0x16ED7150)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_A326985DCC3000FE_OFFSET UNITYSDK_OFFSET(0x16ED4580)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x16ED8470)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_A80EDC4C30C0B325_OFFSET UNITYSDK_OFFSET(0x16ED4A00)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_A8A5F504A3B05FA7_OFFSET UNITYSDK_OFFSET(0x16ED79F0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_B81305259F90066A_OFFSET UNITYSDK_OFFSET(0x16ED59C0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_C13C45A3024DF1A7_OFFSET UNITYSDK_OFFSET(0x16ED66A0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x16ED86D0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16ED3E30)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x16ED8500)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_CFC0F3075E9B25EB_OFFSET UNITYSDK_OFFSET(0x16ED52D0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_D8E98D94952958C7_OFFSET UNITYSDK_OFFSET(0x16ED81E0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x16ED3A00)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x16ED47E0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_EF791A79C773DCBB_OFFSET UNITYSDK_OFFSET(0x16ED5890)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x16ED87D0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x16ED89A0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16ED85F0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_F6B522B422985D1A_OFFSET UNITYSDK_OFFSET(0x16ED5800)
#define CLASS_2_8800DB13DF03DDDE__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED90B0)
#define CLASS_2_8800DB13DF03DDDE__ONBIND_OFFSET UNITYSDK_OFFSET(0x16ED35B0)
#define CLASS_2_8800DB13DF03DDDE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16ED3F60)
#define CLASS_2_8800DB13DF03DDDE__ONTICK_OFFSET UNITYSDK_OFFSET(0x16ED39A0)

inline static constexpr unsigned int Class_2_8800DB13DF03DDDE_TypeDefinitionIndex = 68768;

class Class_2_8800DB13DF03DDDE : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::BattleInstance* Field_2_0; // 0x60
	::Class_1_48FB41EE27FB816A_1* Field_2_1; // 0x68
	::RPG::GameCore::EntityManager* Field_2_2; // 0x70
	::RPG::GameCore::LevelUIComponent* Field_2_3; // 0x78
	::System::String* Field_2_4; // 0x80
	::RPG::GameCore::TeamDataComponent* Field_2_5; // 0x88
	::RPG::Client::ScreenEventHandler* Field_2_6; // 0x90
	::UnityEngine::Vector2 Field_2_7; // 0x98
	::System::Single Field_2_8; // 0xA0
	::System::Boolean Field_2_9; // 0xA4
	::System::Boolean Field_2_10; // 0xA5
	::System::Single Field_2_11; // 0xA8
	::RPG::Client::TextID Field_2_12; // 0xB0
	::System::Single Field_2_13; // 0xC0
	::System::UInt32 Field_2_14; // 0xC4
	::System::Single Field_2_15; // 0xC8
	::System::Single Field_2_16; // 0xCC
	::System::Single Field_2_17; // 0xD0
	::System::Single Field_2_18; // 0xD4
	::RPG::GameCore::GameModeState Field_2_19; // 0xD8
	::System::Boolean Field_2_20; // 0xDC
	::System::Boolean Field_2_21; // 0xDD
	::System::Boolean Field_2_22; // 0xDE
	::System::Boolean Field_2_23; // 0xDF

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_7A73F165001BC325()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_7A73F165001BC325_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1A7F9F3B13A09C96(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_1A7F9F3B13A09C96_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_039E68BE35BA95A0(::RPG::GameCore::BattleInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_039E68BE35BA95A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_679BB2AF51138481(::RPG::Client::BattleShowMessageManager_Message* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleShowMessageManager_Message*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_679BB2AF51138481_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CE8A1831DA14AB7(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_3CE8A1831DA14AB7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_39845204DD04FC33(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_39845204DD04FC33_OFFSET))(this, a1);
	}

	::System::Void Method_2_1DF1FA98B6A6B5EE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_1DF1FA98B6A6B5EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_8C40D8A084322E50(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_8C40D8A084322E50_OFFSET))(this, a1);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_2_95D5F1592312589E(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_95D5F1592312589E_OFFSET))(this, a1);
	}

	::System::Void Method_2_95D5F1592312589E_1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_95D5F1592312589E_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B176AC622BC2444(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_5B176AC622BC2444_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFC0F3075E9B25EB(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_CFC0F3075E9B25EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_402EB65ACFB641A1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_402EB65ACFB641A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1DB5F6F49056B00D(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_1DB5F6F49056B00D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A326985DCC3000FE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_A326985DCC3000FE_OFFSET))(this);
	}

	::System::Boolean Method_2_4927ACC1FFCD0949(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_4927ACC1FFCD0949_OFFSET))(this, a1);
	}

	::System::Void Method_2_A80EDC4C30C0B325(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_A80EDC4C30C0B325_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F1CBD739B38B9CA(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_7F1CBD739B38B9CA_OFFSET))(this, a1);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_2_C13C45A3024DF1A7(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_C13C45A3024DF1A7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_48DCE3E9EBCCF56D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::EventSystems::PointerEventData* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_48DCE3E9EBCCF56D_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_86A377FCCC9B32B3(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_86A377FCCC9B32B3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_229E068D4C618706(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Ray a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Ray, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_229E068D4C618706_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntity* Method_2_A8A5F504A3B05FA7(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Ray a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_A8A5F504A3B05FA7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1CDE2A8C8FE989F7(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::Struct_2_2DEC9C8F439E3FDC>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Struct_2_2DEC9C8F439E3FDC>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_1CDE2A8C8FE989F7_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_2DEC9C8F439E3FDC Method_2_10828DABB0E782BB(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::Struct_2_2DEC9C8F439E3FDC>* a2)
	{
		return ((::Struct_2_2DEC9C8F439E3FDC(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Struct_2_2DEC9C8F439E3FDC>*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_10828DABB0E782BB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D8E98D94952958C7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_D8E98D94952958C7_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_2_EF791A79C773DCBB(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_EF791A79C773DCBB_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F6B522B422985D1A(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_F6B522B422985D1A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_2_B81305259F90066A()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_B81305259F90066A_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9805F2901C5A7FC1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_9805F2901C5A7FC1_OFFSET))(this, a1);
	}

	::System::Void Method_2_36B3126FAEF06CA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_36B3126FAEF06CA3_OFFSET))(this);
	}

	::System::Void Method_2_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8800DB13DF03DDDE_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
