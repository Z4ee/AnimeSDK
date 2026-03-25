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

#define CLASS_2_C846295C9E4472FE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCB16260)
#define CLASS_2_C846295C9E4472FE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCB16570)
#define CLASS_2_C846295C9E4472FE_METHOD_2_00D9C214C63942A7_OFFSET UNITYSDK_OFFSET(0xCB15A10)
#define CLASS_2_C846295C9E4472FE_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xC50C050)
#define CLASS_2_C846295C9E4472FE_METHOD_2_1A7F9F3B13A09C96_OFFSET UNITYSDK_OFFSET(0xC50BEB0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_1DF1FA98B6A6B5EE_OFFSET UNITYSDK_OFFSET(0xC50C730)
#define CLASS_2_C846295C9E4472FE_METHOD_2_229E068D4C618706_OFFSET UNITYSDK_OFFSET(0xC50F170)
#define CLASS_2_C846295C9E4472FE_METHOD_2_39845204DD04FC33_OFFSET UNITYSDK_OFFSET(0xC50C480)
#define CLASS_2_C846295C9E4472FE_METHOD_2_3CE8A1831DA14AB7_OFFSET UNITYSDK_OFFSET(0xC50C350)
#define CLASS_2_C846295C9E4472FE_METHOD_2_3F620310DEF68809_OFFSET UNITYSDK_OFFSET(0xC50F960)
#define CLASS_2_C846295C9E4472FE_METHOD_2_45E1B5C827BB0063_OFFSET UNITYSDK_OFFSET(0xC50C000)
#define CLASS_2_C846295C9E4472FE_METHOD_2_48DCE3E9EBCCF56D_OFFSET UNITYSDK_OFFSET(0xC50FC00)
#define CLASS_2_C846295C9E4472FE_METHOD_2_4927ACC1FFCD0949_OFFSET UNITYSDK_OFFSET(0xC50D1E0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_494DEE1E2F1B0134_OFFSET UNITYSDK_OFFSET(0xC50CF20)
#define CLASS_2_C846295C9E4472FE_METHOD_2_4EF39E24235C05BA_OFFSET UNITYSDK_OFFSET(0xC50C570)
#define CLASS_2_C846295C9E4472FE_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xCB169A0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xCB168D0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_5B176AC622BC2444_OFFSET UNITYSDK_OFFSET(0xC50D120)
#define CLASS_2_C846295C9E4472FE_METHOD_2_5E6C171886C48967_OFFSET UNITYSDK_OFFSET(0xC510250)
#define CLASS_2_C846295C9E4472FE_METHOD_2_64B7F5DF4C560641_OFFSET UNITYSDK_OFFSET(0xC50D250)
#define CLASS_2_C846295C9E4472FE_METHOD_2_679BB2AF51138481_OFFSET UNITYSDK_OFFSET(0xC50C2E0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_6BEB244CD2E6EADC_OFFSET UNITYSDK_OFFSET(0xC50FFE0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xCB15DF0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_8C40D8A084322E50_OFFSET UNITYSDK_OFFSET(0xC50C8C0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_95D5F1592312589E_1_OFFSET UNITYSDK_OFFSET(0xC50CE70)
#define CLASS_2_C846295C9E4472FE_METHOD_2_95D5F1592312589E_OFFSET UNITYSDK_OFFSET(0xC50C920)
#define CLASS_2_C846295C9E4472FE_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCB15970)
#define CLASS_2_C846295C9E4472FE_METHOD_2_9805F2901C5A7FC1_OFFSET UNITYSDK_OFFSET(0xCB15A60)
#define CLASS_2_C846295C9E4472FE_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xCB16090)
#define CLASS_2_C846295C9E4472FE_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xCB16200)
#define CLASS_2_C846295C9E4472FE_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xCB15ED0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xCB15D70)
#define CLASS_2_C846295C9E4472FE_METHOD_2_A80EDC4C30C0B325_OFFSET UNITYSDK_OFFSET(0xC50C9B0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_A88B36294D55B85C_OFFSET UNITYSDK_OFFSET(0xC50B8F0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_AA957E371B77E633_OFFSET UNITYSDK_OFFSET(0xCB15B60)
#define CLASS_2_C846295C9E4472FE_METHOD_2_B81305259F90066A_OFFSET UNITYSDK_OFFSET(0xC50D920)
#define CLASS_2_C846295C9E4472FE_METHOD_2_BC9D09BED49A4927_OFFSET UNITYSDK_OFFSET(0xC50F670)
#define CLASS_2_C846295C9E4472FE_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0xCB160F0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC50BE70)
#define CLASS_2_C846295C9E4472FE_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0xCB16A00)
#define CLASS_2_C846295C9E4472FE_METHOD_2_E28394F67B2A3D25_OFFSET UNITYSDK_OFFSET(0xC50DE10)
#define CLASS_2_C846295C9E4472FE_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xC50C790)
#define CLASS_2_C846295C9E4472FE_METHOD_2_EEAEEB43B404284D_OFFSET UNITYSDK_OFFSET(0xC5103F0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_EF791A79C773DCBB_OFFSET UNITYSDK_OFFSET(0xC50D7F0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_F343645A04DC6AEF_OFFSET UNITYSDK_OFFSET(0xC50E690)
#define CLASS_2_C846295C9E4472FE_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xCB15FA0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_F6B522B422985D1A_OFFSET UNITYSDK_OFFSET(0xC50D760)
#define CLASS_2_C846295C9E4472FE_METHOD_2_F7460366379D5568_OFFSET UNITYSDK_OFFSET(0xC50E3D0)
#define CLASS_2_C846295C9E4472FE_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0xC50BC50)
#define CLASS_2_C846295C9E4472FE__CTOR_OFFSET UNITYSDK_OFFSET(0xCB16840)
#define CLASS_2_C846295C9E4472FE__ONBIND_OFFSET UNITYSDK_OFFSET(0xC50B840)
#define CLASS_2_C846295C9E4472FE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC50BFA0)
#define CLASS_2_C846295C9E4472FE__ONTICK_OFFSET UNITYSDK_OFFSET(0xC50BBF0)
#define CLASS_2_C846295C9E4472FE___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCB16AD0)
#define CLASS_2_C846295C9E4472FE___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCB16B30)
#define CLASS_2_C846295C9E4472FE___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xCB16870)
#define CLASS_2_C846295C9E4472FE___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xCB16A70)
#define CLASS_2_C846295C9E4472FE___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xCB16930)

inline static constexpr unsigned int Class_2_C846295C9E4472FE_TypeDefinitionIndex = 58991;

class Class_2_C846295C9E4472FE : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::String* Field_2_20; // 0x60
	::RPG::GameCore::BattleInstance* Field_2_1; // 0x68
	::RPG::GameCore::EntityManager* Field_2_4; // 0x70
	::RPG::Client::ScreenEventHandler* Field_2_0; // 0x78
	::RPG::GameCore::TeamDataComponent* Field_2_5; // 0x80
	::RPG::GameCore::LevelUIComponent* Field_2_2; // 0x88
	::Class_1_48FB41EE27FB816A* Field_2_3; // 0x90
	::System::Single Field_2_8; // 0x98
	::System::Single Field_2_7; // 0x9C
	::System::Boolean Field_2_13; // 0xA0
	::System::Boolean Field_2_17; // 0xA1
	::System::Boolean Field_2_12; // 0xA2
	::System::Single Field_2_15; // 0xA4
	::System::Single Field_2_19; // 0xA8
	::System::Single Field_2_21; // 0xAC
	::System::Single Field_2_11; // 0xB0
	::System::UInt32 Field_2_14; // 0xB4
	::UnityEngine::Vector2 Field_2_16; // 0xB8
	::System::Boolean Field_2_18; // 0xC0
	::System::Boolean Field_2_22; // 0xC1
	::RPG::GameCore::GameModeState Field_2_6; // 0xC4
	::System::Single Field_2_9; // 0xC8
	::RPG::Client::TextID Field_2_10; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_A88B36294D55B85C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_A88B36294D55B85C_OFFSET))(this);
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

	::System::Void Method_2_45E1B5C827BB0063(::RPG::GameCore::BattleInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_45E1B5C827BB0063_OFFSET))(this, a1);
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

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_18982EFD3B740683_OFFSET))(this);
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

	::System::Void Method_2_64B7F5DF4C560641(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_64B7F5DF4C560641_OFFSET))(this, a1);
	}

	::System::Void Method_2_E28394F67B2A3D25(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_E28394F67B2A3D25_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7460366379D5568(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_F7460366379D5568_OFFSET))(this, a1);
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

	::System::Void Method_2_F343645A04DC6AEF(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_F343645A04DC6AEF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_48DCE3E9EBCCF56D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::EventSystems::PointerEventData* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_48DCE3E9EBCCF56D_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_6BEB244CD2E6EADC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_6BEB244CD2E6EADC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_229E068D4C618706(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Ray a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Ray, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_229E068D4C618706_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntity* Method_2_3F620310DEF68809(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Ray a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_3F620310DEF68809_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BC9D09BED49A4927(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::Struct_2_2DEC9C8F439E3FDC>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Struct_2_2DEC9C8F439E3FDC>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_BC9D09BED49A4927_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_2DEC9C8F439E3FDC Method_2_EEAEEB43B404284D(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::Struct_2_2DEC9C8F439E3FDC>* a2)
	{
		return ((::Struct_2_2DEC9C8F439E3FDC(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Struct_2_2DEC9C8F439E3FDC>*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_EEAEEB43B404284D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5E6C171886C48967(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_5E6C171886C48967_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
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

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C846295C9E4472FE_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
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
