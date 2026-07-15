#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_1053;
class Class_2_0A565C9FCC913419;
class Class_2_0EF6D9EB61B0E98E;
class Class_2_38CD28B3D11A00DD;
class Class_2_6B6ABCFFA3C00A45;
class Class_2_7CCE1EDB2270143F;
class Class_2_D3061860904844A0;
namespace RPG::Client { class ShowBossInfoParam; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class CharacterHudComponent; }
namespace RPG::GameCore { class EntityRevive; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }

#define CLASS_2_E24B019EE8F08EE8_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x14D02E90)
#define CLASS_2_E24B019EE8F08EE8_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x14D03070)
#define CLASS_2_E24B019EE8F08EE8_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x14D011E0)
#define CLASS_2_E24B019EE8F08EE8_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x14D01310)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_04E967564E8CD234_OFFSET UNITYSDK_OFFSET(0x14D02730)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_05891E8E87C14559_OFFSET UNITYSDK_OFFSET(0x14D01F00)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x14D01760)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_203DBA25025B0314_OFFSET UNITYSDK_OFFSET(0x14D021A0)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x14D01570)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_583D59500575D856_OFFSET UNITYSDK_OFFSET(0x14D013B0)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_614288621F812149_OFFSET UNITYSDK_OFFSET(0x14D01370)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_61899E9D4FD07AA1_OFFSET UNITYSDK_OFFSET(0x14D01B10)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x14D019B0)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_7588156DD6071C11_OFFSET UNITYSDK_OFFSET(0x14D016F0)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_7B5B1D4AF6E72306_OFFSET UNITYSDK_OFFSET(0x14D02790)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x14D014E0)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_848FDD59AB054F3D_OFFSET UNITYSDK_OFFSET(0x14D026D0)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_8D7EF891DCBA5F4D_OFFSET UNITYSDK_OFFSET(0x14D022C0)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_936773021FAF4D21_OFFSET UNITYSDK_OFFSET(0x14D018D0)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_974A70E8019154E7_1_OFFSET UNITYSDK_OFFSET(0x14D02C90)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x14D02B60)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x14D02990)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x14D01E50)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x14D01040)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x14D01DF0)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x14D02DD0)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x14D02A80)
#define CLASS_2_E24B019EE8F08EE8_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x14D01400)
#define CLASS_2_E24B019EE8F08EE8_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x14D01440)
#define CLASS_2_E24B019EE8F08EE8_ONRETURN_OFFSET UNITYSDK_OFFSET(0x14D01680)
#define CLASS_2_E24B019EE8F08EE8__CTOR_OFFSET UNITYSDK_OFFSET(0x14D03220)
#define CLASS_2_E24B019EE8F08EE8__ONBIND_OFFSET UNITYSDK_OFFSET(0x14D00820)
#define CLASS_2_E24B019EE8F08EE8__ONTICK_OFFSET UNITYSDK_OFFSET(0x14D02840)
#define CLASS_2_E24B019EE8F08EE8___ONBATTLEMONSTERHUDUIPANELALPHACHANGE_B__39_0_OFFSET UNITYSDK_OFFSET(0x14D03280)

inline static constexpr unsigned int Class_2_E24B019EE8F08EE8_TypeDefinitionIndex = 68537;

class Class_2_E24B019EE8F08EE8 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::GameEntity* Field_2_1; // 0x60
	::RPG::GameCore::CharacterHudComponent* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_3; // 0x70
	::Class_2_6B6ABCFFA3C00A45* Field_2_4; // 0x78
	::Class_2_0EF6D9EB61B0E98E* Field_2_5; // 0x80
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1053*>* Field_2_6; // 0x88
	::UnityEngine::Transform* Field_2_7; // 0x90
	::UnityEngine::Transform* Field_2_8; // 0x98
	::UnityEngine::Transform* Field_2_9; // 0xA0
	::Class_2_38CD28B3D11A00DD* Field_2_10; // 0xA8
	::Class_2_7CCE1EDB2270143F* Field_2_11; // 0xB0
	::Class_2_D3061860904844A0* Field_2_12; // 0xB8
	::UnityEngine::CanvasGroup* Field_2_13; // 0xC0
	::RPG::GameCore::CharacterDataComponent* Field_2_14; // 0xC8
	::RPG::GameCore::LevelUIComponent* Field_2_15; // 0xD0
	::UnityEngine::Transform* Field_2_16; // 0xD8
	::Class_2_0A565C9FCC913419* Field_2_17; // 0xE0
	::UnityEngine::Transform* Field_2_18; // 0xE8
	::System::Boolean Field_2_19; // 0xF0
	::System::Boolean Field_2_20; // 0xF1
	::System::Single Field_2_21; // 0xF4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_GET_INDEX_OFFSET))(this);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_GET_TRANS_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_614288621F812149()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_614288621F812149_OFFSET))(this);
	}

	::RPG::GameCore::TeamType Method_2_583D59500575D856()
	{
		return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_583D59500575D856_OFFSET))(this);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_7588156DD6071C11(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_7588156DD6071C11_OFFSET))(this, a1);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_936773021FAF4D21()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_936773021FAF4D21_OFFSET))(this);
	}

	::System::Void Method_2_05891E8E87C14559(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_05891E8E87C14559_OFFSET))(this, a1);
	}

	::System::Void Method_2_61899E9D4FD07AA1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_61899E9D4FD07AA1_OFFSET))(this);
	}

	::System::Void Method_2_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_203DBA25025B0314(::RPG::GameCore::EntityRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRevive*))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_203DBA25025B0314_OFFSET))(this, a1);
	}

	::System::Void Method_2_8D7EF891DCBA5F4D(::RPG::Client::ShowBossInfoParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowBossInfoParam*))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_8D7EF891DCBA5F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_848FDD59AB054F3D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_848FDD59AB054F3D_OFFSET))(this, a1);
	}

	::System::Void Method_2_04E967564E8CD234(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_04E967564E8CD234_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B5B1D4AF6E72306(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_7B5B1D4AF6E72306_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_974A70E8019154E7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Boolean __OnBattleMonsterHUDUIPanelAlphaChange_b__39_0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E24B019EE8F08EE8___ONBATTLEMONSTERHUDUIPANELALPHACHANGE_B__39_0_OFFSET))(this, a1);
	}
};
