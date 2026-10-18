#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
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

#define CLASS_2_8800DB13DF03DDDE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15789040)
#define CLASS_2_8800DB13DF03DDDE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x157893A0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_039E68BE35BA95A0_OFFSET UNITYSDK_OFFSET(0x157845D0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_10828DABB0E782BB_OFFSET UNITYSDK_OFFSET(0x15788990)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_1A7F9F3B13A09C96_OFFSET UNITYSDK_OFFSET(0x15784480)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_1CDE2A8C8FE989F7_OFFSET UNITYSDK_OFFSET(0x15787D60)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_1DB5F6F49056B00D_OFFSET UNITYSDK_OFFSET(0x15786990)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_1DF1FA98B6A6B5EE_OFFSET UNITYSDK_OFFSET(0x15784D80)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x15784620)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_229E068D4C618706_OFFSET UNITYSDK_OFFSET(0x15787870)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x15784210)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_36B3126FAEF06CA3_OFFSET UNITYSDK_OFFSET(0x15786C50)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_39845204DD04FC33_OFFSET UNITYSDK_OFFSET(0x15784A90)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_3CE8A1831DA14AB7_OFFSET UNITYSDK_OFFSET(0x15784960)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_402EB65ACFB641A1_OFFSET UNITYSDK_OFFSET(0x15786420)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_48DCE3E9EBCCF56D_OFFSET UNITYSDK_OFFSET(0x15788290)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_4927ACC1FFCD0949_OFFSET UNITYSDK_OFFSET(0x15785860)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_5B176AC622BC2444_OFFSET UNITYSDK_OFFSET(0x15785790)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_679BB2AF51138481_OFFSET UNITYSDK_OFFSET(0x157848F0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x15783C10)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x15783CA0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_7F1CBD739B38B9CA_OFFSET UNITYSDK_OFFSET(0x15785590)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_86A377FCCC9B32B3_OFFSET UNITYSDK_OFFSET(0x15788670)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_8C40D8A084322E50_OFFSET UNITYSDK_OFFSET(0x15784F10)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_95D5F1592312589E_1_OFFSET UNITYSDK_OFFSET(0x157854F0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_95D5F1592312589E_OFFSET UNITYSDK_OFFSET(0x15784F70)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15785D60)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x15788E70)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_9805F2901C5A7FC1_OFFSET UNITYSDK_OFFSET(0x15787750)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_A326985DCC3000FE_OFFSET UNITYSDK_OFFSET(0x15784B70)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x15788A90)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_A80EDC4C30C0B325_OFFSET UNITYSDK_OFFSET(0x15785000)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_A8A5F504A3B05FA7_OFFSET UNITYSDK_OFFSET(0x15787FF0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_B81305259F90066A_OFFSET UNITYSDK_OFFSET(0x15785FC0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_C13C45A3024DF1A7_OFFSET UNITYSDK_OFFSET(0x15786CA0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x15788CE0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15784440)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x15788B10)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_CFC0F3075E9B25EB_OFFSET UNITYSDK_OFFSET(0x157858D0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_D8E98D94952958C7_OFFSET UNITYSDK_OFFSET(0x157887F0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x15784010)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x15784DE0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_EF791A79C773DCBB_OFFSET UNITYSDK_OFFSET(0x15785E90)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x15788DE0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x15788FB0)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x15788C00)
#define CLASS_2_8800DB13DF03DDDE_METHOD_2_F6B522B422985D1A_OFFSET UNITYSDK_OFFSET(0x15785E00)
#define CLASS_2_8800DB13DF03DDDE__CTOR_OFFSET UNITYSDK_OFFSET(0x157896C0)
#define CLASS_2_8800DB13DF03DDDE__ONBIND_OFFSET UNITYSDK_OFFSET(0x15783BB0)
#define CLASS_2_8800DB13DF03DDDE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15784570)
#define CLASS_2_8800DB13DF03DDDE__ONTICK_OFFSET UNITYSDK_OFFSET(0x15783FB0)

inline static constexpr unsigned int Class_2_8800DB13DF03DDDE_TypeDefinitionIndex = 72032;

class Class_2_8800DB13DF03DDDE : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::ScreenEventHandler* LNGFIMJABDK; // 0x60
	::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0x68
	::System::String* BFKFNGINKKO; // 0x70
	::Class_1_48FB41EE27FB816A_1* CPMKHGNEFEI; // 0x78
	::RPG::GameCore::TeamDataComponent* AIAJJIEBAJD; // 0x80
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x88
	::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x90
	::RPG::GameCore::GameModeState KLDNPBNHABE; // 0x98
	::UnityEngine::Vector2 LKMGNHCEFED; // 0x9C
	::System::Single COHEGIIFNOO; // 0xA4
	::System::Single CCLPJBEGBEJ; // 0xA8
	::System::Single LAFONBAOMMH; // 0xAC
	::System::UInt32 MAAHJDHGELL; // 0xB0
	::RPG::Client::TextID DHOBJJBAJGC; // 0xB8
	::System::Single BFMNOBMBJAC; // 0xC8
	::System::Boolean LANEAJPGLEI; // 0xCC
	::System::Boolean JEBMKKEAIBF; // 0xCD
	::System::Boolean KAIGHPJLDJP; // 0xCE
	::System::Boolean EKODFJMGIKG; // 0xCF
	::System::Single DCCJCIBLMDO; // 0xD0
	::System::Single BEEBFABAGFD; // 0xD4
	::System::Boolean CEFMLNIHEFJ; // 0xD8
	::System::Boolean IIFHEBPNANN; // 0xD9
	::System::Single HFKDAFHFLCC; // 0xDC

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
