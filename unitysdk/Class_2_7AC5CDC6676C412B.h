#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_0_16E4307DCC419505_1095;
class Class_1_23F67DD15593C8D6;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace RPG::GameCore { class LevelBattleEventDie; }
namespace RPG::GameCore { class LevelCharacterDie; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }

#define CLASS_2_7AC5CDC6676C412B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16B738F0)
#define CLASS_2_7AC5CDC6676C412B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16B73E60)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x16B73300)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_21EA93B9163957EE_OFFSET UNITYSDK_OFFSET(0x16B71300)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x16B70550)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_609FA3D38FA252B6_OFFSET UNITYSDK_OFFSET(0x16B70E10)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_87A84693C939DE46_OFFSET UNITYSDK_OFFSET(0x16B72710)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x16B73760)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x16B71440)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_A4F8E611A5D950A3_OFFSET UNITYSDK_OFFSET(0x16B71B10)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_AB5700066D170323_OFFSET UNITYSDK_OFFSET(0x16B71370)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x16B726A0)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_DC7F1ABAE2B942B0_OFFSET UNITYSDK_OFFSET(0x16B71670)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_DD152A1A30757DCD_OFFSET UNITYSDK_OFFSET(0x16B70790)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x16B71B90)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_E0E8085812DD34DC_OFFSET UNITYSDK_OFFSET(0x16B715D0)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_EBAA2610320ABA27_OFFSET UNITYSDK_OFFSET(0x16B714D0)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x16B70800)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x16B73460)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0x16B73520)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_F37CDBD6D46274D2_3_OFFSET UNITYSDK_OFFSET(0x16B735E0)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_F37CDBD6D46274D2_4_OFFSET UNITYSDK_OFFSET(0x16B736A0)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_F37CDBD6D46274D2_5_OFFSET UNITYSDK_OFFSET(0x16B73860)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16B73360)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_F3896F8909B8FA57_OFFSET UNITYSDK_OFFSET(0x16B72200)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_F49AADE07313BF76_OFFSET UNITYSDK_OFFSET(0x16B73230)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_F5D0DE62B372C4C0_OFFSET UNITYSDK_OFFSET(0x16B72280)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_FA2D80D2EE1C4874_OFFSET UNITYSDK_OFFSET(0x16B72180)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_FD3B916300F77FDA_1_OFFSET UNITYSDK_OFFSET(0x16B70740)
#define CLASS_2_7AC5CDC6676C412B_METHOD_2_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x16B706E0)
#define CLASS_2_7AC5CDC6676C412B__CTOR_OFFSET UNITYSDK_OFFSET(0x16B74390)
#define CLASS_2_7AC5CDC6676C412B__ONBIND_OFFSET UNITYSDK_OFFSET(0x16B704D0)
#define CLASS_2_7AC5CDC6676C412B__ONTICK_OFFSET UNITYSDK_OFFSET(0x16B70670)
#define CLASS_2_7AC5CDC6676C412B__PLAYFADE_B__8_0_OFFSET UNITYSDK_OFFSET(0x16B744A0)

inline static constexpr unsigned int Class_2_7AC5CDC6676C412B_TypeDefinitionIndex = 71576;

class Class_2_7AC5CDC6676C412B : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Int32 EJEONLGGNBB = 0x2; // 0x0
	// static const ::System::String* MLIPPKIFDON; // 0x0
	// static const ::System::String* FFEHFCONLCL; // 0x0
	// static const ::System::String* NCJEBGMPIBJ; // 0x0
	// static const ::System::String* IMEDIJIADDC; // 0x0
	::Class_1_23F67DD15593C8D6* PCOMMLHHNOA; // 0x60
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* DOPHJDGCECJ; // 0x70
	::UnityEngine::Animation* ALOLGOMCCCO; // 0x78
	::RPG::Client::PrefabLoadMeta* KKEMIFHIHEL; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_1095*>* EIKBOFILFGL; // 0x88
	::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x90
	::System::Boolean PENFJGJBOBI; // 0x98
	::System::Boolean LDMLHEKMCEG; // 0x99

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Method_2_DD152A1A30757DCD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_DD152A1A30757DCD_OFFSET))(this, a1);
	}

	::System::Void Method_2_609FA3D38FA252B6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_609FA3D38FA252B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_21EA93B9163957EE(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_21EA93B9163957EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB5700066D170323(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_AB5700066D170323_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBAA2610320ABA27(::RPG::GameCore::LevelBattleEventCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_EBAA2610320ABA27_OFFSET))(this, a1);
	}

	::System::Void Method_2_A4F8E611A5D950A3(::RPG::GameCore::LevelEntityEscape* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_A4F8E611A5D950A3_OFFSET))(this, a1);
	}

	::System::Void Method_2_FA2D80D2EE1C4874(::RPG::GameCore::LevelCharacterDie* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterDie*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_FA2D80D2EE1C4874_OFFSET))(this, a1);
	}

	::System::Void Method_2_F3896F8909B8FA57(::RPG::GameCore::LevelBattleEventDie* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventDie*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_F3896F8909B8FA57_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5D0DE62B372C4C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_F5D0DE62B372C4C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_FD3B916300F77FDA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_FD3B916300F77FDA_1_OFFSET))(this);
	}

	::System::Void Method_2_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::UInt32 Method_2_E0E8085812DD34DC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_E0E8085812DD34DC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DC7F1ABAE2B942B0(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_DC7F1ABAE2B942B0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_ED65AE7582736594_OFFSET))(this);
	}

	::System::Void Method_2_87A84693C939DE46(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_87A84693C939DE46_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_F49AADE07313BF76(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_F49AADE07313BF76_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_F37CDBD6D46274D2_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_F37CDBD6D46274D2_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_METHOD_2_F37CDBD6D46274D2_5_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void _PlayFade_b__8_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B__PLAYFADE_B__8_0_OFFSET))(this);
	}
};
