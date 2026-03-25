#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_A526C3164A2601C6_ModifyValueStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/RPG/GameCore/ScoringShowType.h"

class Class_2_DEB067F815EC1625;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleScoringChangeParams; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_A526C3164A2601C6_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11495160)
#define CLASS_2_A526C3164A2601C6_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11495400)
#define CLASS_2_A526C3164A2601C6_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x11493A60)
#define CLASS_2_A526C3164A2601C6_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x11493A80)
#define CLASS_2_A526C3164A2601C6_METHOD_2_00BE5A24F02298DC_OFFSET UNITYSDK_OFFSET(0x11494610)
#define CLASS_2_A526C3164A2601C6_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x11494AC0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_2A49396B5F4E6275_OFFSET UNITYSDK_OFFSET(0x11494C90)
#define CLASS_2_A526C3164A2601C6_METHOD_2_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x11493C00)
#define CLASS_2_A526C3164A2601C6_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x11493D50)
#define CLASS_2_A526C3164A2601C6_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x114941B0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x11493A90)
#define CLASS_2_A526C3164A2601C6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11493F30)
#define CLASS_2_A526C3164A2601C6_METHOD_2_4D5351A5CDAC34BC_OFFSET UNITYSDK_OFFSET(0x114950C0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x114957C0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11495760)
#define CLASS_2_A526C3164A2601C6_METHOD_2_58BFC52E546ECE1F_OFFSET UNITYSDK_OFFSET(0x114945B0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_5D868F3D6A3DAB13_OFFSET UNITYSDK_OFFSET(0x114943D0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_8B2D6636BADD098E_OFFSET UNITYSDK_OFFSET(0x114948B0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x11494FD0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x11494EE0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x11494000)
#define CLASS_2_A526C3164A2601C6_METHOD_2_AAE61ABAE8899086_OFFSET UNITYSDK_OFFSET(0x11494280)
#define CLASS_2_A526C3164A2601C6_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11494BA0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_BCA794728913022B_OFFSET UNITYSDK_OFFSET(0x114944D0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11494C30)
#define CLASS_2_A526C3164A2601C6_METHOD_2_CB7604B59F367726_OFFSET UNITYSDK_OFFSET(0x11493E10)
#define CLASS_2_A526C3164A2601C6_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x11495820)
#define CLASS_2_A526C3164A2601C6_METHOD_2_F04C04E6DB6D6224_OFFSET UNITYSDK_OFFSET(0x11493720)
#define CLASS_2_A526C3164A2601C6_METHOD_2_F4F5C92AD8354C0C_OFFSET UNITYSDK_OFFSET(0x11494B30)
#define CLASS_2_A526C3164A2601C6_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x11493E80)
#define CLASS_2_A526C3164A2601C6_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x11493A70)
#define CLASS_2_A526C3164A2601C6__CCTOR_OFFSET UNITYSDK_OFFSET(0x114956A0)
#define CLASS_2_A526C3164A2601C6__CTOR_OFFSET UNITYSDK_OFFSET(0x11495650)
#define CLASS_2_A526C3164A2601C6__ONBIND_OFFSET UNITYSDK_OFFSET(0x11493490)
#define CLASS_2_A526C3164A2601C6__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x11494170)
#define CLASS_2_A526C3164A2601C6__ONTICK_OFFSET UNITYSDK_OFFSET(0x11493FA0)
#define CLASS_2_A526C3164A2601C6___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11495960)
#define CLASS_2_A526C3164A2601C6___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x114959C0)
#define CLASS_2_A526C3164A2601C6___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11495700)
#define CLASS_2_A526C3164A2601C6___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x11495900)
#define CLASS_2_A526C3164A2601C6___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x11495890)

inline static constexpr unsigned int Class_2_A526C3164A2601C6_TypeDefinitionIndex = 58642;

class Class_2_A526C3164A2601C6 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::RPG::GameCore::BattleScoringDisplayType* StaticGet_Field_2_25()
	{
		return (::RPG::GameCore::BattleScoringDisplayType*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A526C3164A2601C6_TypeDefinitionIndex)->GetStaticField(0x10E80);
	}
	static ::RPG::Client::TextID* StaticGet_Field_2_24()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A526C3164A2601C6_TypeDefinitionIndex)->GetStaticField(0x10E88);
	}
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_19; // 0x0
	// static const ::System::String* Field_2_20; // 0x0
	// static const ::System::String* Field_2_21; // 0x0
	// static const ::System::String* Field_2_22; // 0x0
	// static const ::System::Int32 Field_2_23 = 0x9; // 0x0
	::UnityEngine::UI::Text* Field_2_0; // 0x60
	::RPG::GameCore::LevelDataComponent* Field_2_7; // 0x68
	::UnityEngine::ParticleSystem* Field_2_3; // 0x70
	::Il2CppArray<::Class_2_DEB067F815EC1625*>* Field_2_12; // 0x78
	::UnityEngine::AnimationState* Field_2_8; // 0x80
	::RPG::GameCore::BattleInstance* Field_2_6; // 0x88
	::UnityEngine::Animation* Field_2_1; // 0x90
	::UnityEngine::Animation* Field_2_2; // 0x98
	::System::Int32 Field_2_15; // 0xA0
	::System::Int32 Field_2_14; // 0xA4
	::System::Single Field_2_18; // 0xA8
	::Class_2_A526C3164A2601C6_ModifyValueStatus Field_2_10; // 0xAC
	::System::Int32 Field_2_13; // 0xB0
	::RPG::GameCore::ScoringShowType Field_2_16; // 0xB4
	::System::Boolean Field_2_9; // 0xB8
	::System::Boolean Field_2_17; // 0xB9
	::System::Boolean Field_2_11; // 0xBA
	::System::Int32 _Index_k__BackingField; // 0xBC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_F04C04E6DB6D6224()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_F04C04E6DB6D6224_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_2BC55A66CB2B0118_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::Void Method_2_AAE61ABAE8899086(::RPG::GameCore::BattleScoringChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleScoringChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_AAE61ABAE8899086_OFFSET))(this, a1);
	}

	::System::Void Method_2_BCA794728913022B(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_BCA794728913022B_OFFSET))(this, a1);
	}

	::System::Void Method_2_58BFC52E546ECE1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_58BFC52E546ECE1F_OFFSET))(this);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B2D6636BADD098E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_8B2D6636BADD098E_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D868F3D6A3DAB13(::RPG::GameCore::BattleScoringChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleScoringChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_5D868F3D6A3DAB13_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4F5C92AD8354C0C(::RPG::GameCore::ScoringShowType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScoringShowType))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_F4F5C92AD8354C0C_OFFSET))(this, a1);
	}

	::System::Void Method_2_00BE5A24F02298DC(::Class_2_A526C3164A2601C6_ModifyValueStatus a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A526C3164A2601C6_ModifyValueStatus, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_00BE5A24F02298DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_A5ADA4706DA592FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CB7604B59F367726()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_CB7604B59F367726_OFFSET))(this);
	}

	::RPG::Client::TextID Method_2_2A49396B5F4E6275()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_2A49396B5F4E6275_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D5351A5CDAC34BC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_4D5351A5CDAC34BC_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
