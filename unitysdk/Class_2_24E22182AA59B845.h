#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterStanceBarStyle.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_6811E3F95BA9EFBA_1;
class Class_1_87CC187FAC1625A9;
class Class_1_D2577E840516DFAB;
class Class_2_0F19373B970769FA;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class AbilityCurrentStanceChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_24E22182AA59B845_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16EA0FB0)
#define CLASS_2_24E22182AA59B845_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16EA12D0)
#define CLASS_2_24E22182AA59B845_METHOD_2_00E48A1A092361CE_OFFSET UNITYSDK_OFFSET(0x16E9D5E0)
#define CLASS_2_24E22182AA59B845_METHOD_2_033205976FAA1232_OFFSET UNITYSDK_OFFSET(0x16E9E630)
#define CLASS_2_24E22182AA59B845_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x16E9F5D0)
#define CLASS_2_24E22182AA59B845_METHOD_2_100C37D9D1141569_OFFSET UNITYSDK_OFFSET(0x16E9E170)
#define CLASS_2_24E22182AA59B845_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x16E9EB70)
#define CLASS_2_24E22182AA59B845_METHOD_2_14F727ECFE3F5C24_OFFSET UNITYSDK_OFFSET(0x16E9DE40)
#define CLASS_2_24E22182AA59B845_METHOD_2_209E4250CA87B30E_OFFSET UNITYSDK_OFFSET(0x16E9D2F0)
#define CLASS_2_24E22182AA59B845_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0x16E9D230)
#define CLASS_2_24E22182AA59B845_METHOD_2_22D1FE63968DB770_OFFSET UNITYSDK_OFFSET(0x16E9DD40)
#define CLASS_2_24E22182AA59B845_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x16E9FE70)
#define CLASS_2_24E22182AA59B845_METHOD_2_32C75C8D022DC9D2_OFFSET UNITYSDK_OFFSET(0x16E9EF70)
#define CLASS_2_24E22182AA59B845_METHOD_2_34DA542281C267E6_OFFSET UNITYSDK_OFFSET(0x16E9F370)
#define CLASS_2_24E22182AA59B845_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16E9C960)
#define CLASS_2_24E22182AA59B845_METHOD_2_44AC3F3C85C7CAA3_OFFSET UNITYSDK_OFFSET(0x16E9E780)
#define CLASS_2_24E22182AA59B845_METHOD_2_460F6ECCAA67A759_OFFSET UNITYSDK_OFFSET(0x16E9F310)
#define CLASS_2_24E22182AA59B845_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x16E9D0B0)
#define CLASS_2_24E22182AA59B845_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x16E9C760)
#define CLASS_2_24E22182AA59B845_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x16E9D010)
#define CLASS_2_24E22182AA59B845_METHOD_2_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0x16E9F630)
#define CLASS_2_24E22182AA59B845_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x16E9D490)
#define CLASS_2_24E22182AA59B845_METHOD_2_664C062015F0C2D3_1_OFFSET UNITYSDK_OFFSET(0x16E9FDA0)
#define CLASS_2_24E22182AA59B845_METHOD_2_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x16E9FCD0)
#define CLASS_2_24E22182AA59B845_METHOD_2_6F2375DB88761C4E_OFFSET UNITYSDK_OFFSET(0x16E9ED10)
#define CLASS_2_24E22182AA59B845_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x16EA0430)
#define CLASS_2_24E22182AA59B845_METHOD_2_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x16EA0710)
#define CLASS_2_24E22182AA59B845_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x16E9F440)
#define CLASS_2_24E22182AA59B845_METHOD_2_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x16E9FC70)
#define CLASS_2_24E22182AA59B845_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16E9F3D0)
#define CLASS_2_24E22182AA59B845_METHOD_2_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x16E9E830)
#define CLASS_2_24E22182AA59B845_METHOD_2_9D7B81571ADA6EDE_OFFSET UNITYSDK_OFFSET(0x16E9CAC0)
#define CLASS_2_24E22182AA59B845_METHOD_2_9E84A0FC05733938_OFFSET UNITYSDK_OFFSET(0x16E9F8E0)
#define CLASS_2_24E22182AA59B845_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x16E9CF60)
#define CLASS_2_24E22182AA59B845_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x16E9CA50)
#define CLASS_2_24E22182AA59B845_METHOD_2_ADA85C40A3382050_OFFSET UNITYSDK_OFFSET(0x16E9F7A0)
#define CLASS_2_24E22182AA59B845_METHOD_2_ADBA748B4DE11939_OFFSET UNITYSDK_OFFSET(0x16E9E3C0)
#define CLASS_2_24E22182AA59B845_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x16E9EBC0)
#define CLASS_2_24E22182AA59B845_METHOD_2_C3848B3A27E2289E_OFFSET UNITYSDK_OFFSET(0x16E9E890)
#define CLASS_2_24E22182AA59B845_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x16EA0DA0)
#define CLASS_2_24E22182AA59B845_METHOD_2_C450A961450309C9_2_OFFSET UNITYSDK_OFFSET(0x16EA0E90)
#define CLASS_2_24E22182AA59B845_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x16EA0920)
#define CLASS_2_24E22182AA59B845_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x16E9FBF0)
#define CLASS_2_24E22182AA59B845_METHOD_2_C7CA1E68BA3907F2_OFFSET UNITYSDK_OFFSET(0x16E9E520)
#define CLASS_2_24E22182AA59B845_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16E9CBA0)
#define CLASS_2_24E22182AA59B845_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x16E9CCC0)
#define CLASS_2_24E22182AA59B845_METHOD_2_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x16E9E9A0)
#define CLASS_2_24E22182AA59B845_METHOD_2_E1CE0A1C7957700D_OFFSET UNITYSDK_OFFSET(0x16E9F4B0)
#define CLASS_2_24E22182AA59B845_METHOD_2_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x16E9DC70)
#define CLASS_2_24E22182AA59B845_METHOD_2_F26CE4FC4BEDB222_OFFSET UNITYSDK_OFFSET(0x16E9CBF0)
#define CLASS_2_24E22182AA59B845_METHOD_2_F33207610AA59985_OFFSET UNITYSDK_OFFSET(0x16E9EA60)
#define CLASS_2_24E22182AA59B845_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x16EA0860)
#define CLASS_2_24E22182AA59B845_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x16EA0A10)
#define CLASS_2_24E22182AA59B845_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x16EA0AA0)
#define CLASS_2_24E22182AA59B845_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0x16EA0B60)
#define CLASS_2_24E22182AA59B845_METHOD_2_F37CDBD6D46274D2_5_OFFSET UNITYSDK_OFFSET(0x16EA0C20)
#define CLASS_2_24E22182AA59B845_METHOD_2_F37CDBD6D46274D2_6_OFFSET UNITYSDK_OFFSET(0x16EA0CE0)
#define CLASS_2_24E22182AA59B845_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16EA07A0)
#define CLASS_2_24E22182AA59B845_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x16E9C9B0)
#define CLASS_2_24E22182AA59B845_ONRETURN_OFFSET UNITYSDK_OFFSET(0x16E9CB50)
#define CLASS_2_24E22182AA59B845__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA15D0)
#define CLASS_2_24E22182AA59B845__ONBIND_OFFSET UNITYSDK_OFFSET(0x16E9C410)
#define CLASS_2_24E22182AA59B845__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16E9DDE0)
#define CLASS_2_24E22182AA59B845___ONSETSTANCEHINTEFFECT_B__40_0_OFFSET UNITYSDK_OFFSET(0x16EA1630)

inline static constexpr unsigned int Class_2_24E22182AA59B845_TypeDefinitionIndex = 68548;

class Class_2_24E22182AA59B845 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_12; // 0x0
	// static const ::System::String* Field_2_13; // 0x0
	// static const ::System::String* Field_2_14; // 0x0
	// static const ::System::Single Field_2_15; // 0x0
	::Class_1_D2577E840516DFAB* Field_2_16; // 0x60
	::RPG::Client::LocalizedText* Field_2_17; // 0x68
	::UnityEngine::Animation* Field_2_18; // 0x70
	::UnityEngine::Animation* Field_2_19; // 0x78
	::UnityEngine::Animation* Field_2_20; // 0x80
	::UnityEngine::Transform* Field_2_21; // 0x88
	::System::String* Field_2_22; // 0x90
	::RPG::GameCore::LevelUIComponent* Field_2_23; // 0x98
	::Class_2_0F19373B970769FA* Field_2_24; // 0xA0
	::Class_2_0F19373B970769FA* Field_2_25; // 0xA8
	::UnityEngine::GameObject* Field_2_26; // 0xB0
	::Class_2_0F19373B970769FA* Field_2_27; // 0xB8
	::UnityEngine::RectTransform* Field_2_28; // 0xC0
	::UnityEngine::Transform* Field_2_29; // 0xC8
	::UnityEngine::GameObject* Field_2_30; // 0xD0
	::UnityEngine::GameObject* Field_2_31; // 0xD8
	::UnityEngine::GameObject* Field_2_32; // 0xE0
	::RPG::Client::LocalizedText* Field_2_33; // 0xE8
	::RPG::GameCore::GameEntity* Field_2_34; // 0xF0
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_35; // 0xF8
	::System::Boolean Field_2_36; // 0x100
	::System::Boolean Field_2_37; // 0x101
	::System::Boolean Field_2_38; // 0x102
	::System::Int32 Field_2_39; // 0x104
	::System::Int32 Field_2_40; // 0x108
	::UnityEngine::Color Field_2_41; // 0x10C
	::RPG::GameCore::MonsterStanceBarStyle Field_2_42; // 0x11C
	::UnityEngine::Color Field_2_43; // 0x120
	::UnityEngine::Color Field_2_44; // 0x130
	::UnityEngine::Color Field_2_45; // 0x140
	::UnityEngine::Color Field_2_46; // 0x150
	::UnityEngine::Color Field_2_47; // 0x160
	::RPG::GameCore::FixPoint Field_2_48; // 0x170

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F26CE4FC4BEDB222(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_F26CE4FC4BEDB222_OFFSET))(this, a1);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_9D7B81571ADA6EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_9D7B81571ADA6EDE_OFFSET))(this);
	}

	::System::Void Method_2_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_14F727ECFE3F5C24(::RPG::GameCore::AbilityCurrentStanceChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentStanceChange*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_14F727ECFE3F5C24_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7CA1E68BA3907F2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_C7CA1E68BA3907F2_OFFSET))(this, a1);
	}

	::System::Void Method_2_033205976FAA1232(::System::Tuple_2<::System::UInt32, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Tuple_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_033205976FAA1232_OFFSET))(this, a1);
	}

	::System::Void Method_2_44AC3F3C85C7CAA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_44AC3F3C85C7CAA3_OFFSET))(this);
	}

	::System::Void Method_2_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_2_C3848B3A27E2289E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_C3848B3A27E2289E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F33207610AA59985(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_F33207610AA59985_OFFSET))(this, a1);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::System::Void Method_2_6F2375DB88761C4E(::Class_1_6811E3F95BA9EFBA_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6811E3F95BA9EFBA_1*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_6F2375DB88761C4E_OFFSET))(this, a1);
	}

	::System::Void Method_2_460F6ECCAA67A759(::Class_1_87CC187FAC1625A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87CC187FAC1625A9*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_460F6ECCAA67A759_OFFSET))(this, a1);
	}

	::System::Void Method_2_32C75C8D022DC9D2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_32C75C8D022DC9D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Boolean Method_2_34DA542281C267E6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_34DA542281C267E6_OFFSET))(this);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_2_100C37D9D1141569(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_100C37D9D1141569_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_ADBA748B4DE11939(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_ADBA748B4DE11939_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1CE0A1C7957700D(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_E1CE0A1C7957700D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Boolean Method_2_209E4250CA87B30E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_209E4250CA87B30E_OFFSET))(this);
	}

	::System::Void Method_2_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_2_9E84A0FC05733938(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_9E84A0FC05733938_OFFSET))(this, a1);
	}

	::System::Void Method_2_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_664C062015F0C2D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_664C062015F0C2D3_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_664C062015F0C2D3_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_22D1FE63968DB770(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_22D1FE63968DB770_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_9681042564541CD6_2_OFFSET))(this);
	}

	::System::Boolean Method_2_ADA85C40A3382050()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_ADA85C40A3382050_OFFSET))(this);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_2_00E48A1A092361CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_00E48A1A092361CE_OFFSET))(this);
	}

	::System::Boolean Method_2_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_77577333B4681208_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_F37CDBD6D46274D2_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_F37CDBD6D46274D2_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_METHOD_2_C450A961450309C9_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Boolean __OnSetStanceHintEffect_b__40_0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_24E22182AA59B845___ONSETSTANCEHINTEFFECT_B__40_0_OFFSET))(this, a1);
	}
};
