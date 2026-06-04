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

#define CLASS_2_A526C3164A2601C6_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13C9F1C0)
#define CLASS_2_A526C3164A2601C6_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13C9F480)
#define CLASS_2_A526C3164A2601C6_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x13C9DA20)
#define CLASS_2_A526C3164A2601C6_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x13C9DA40)
#define CLASS_2_A526C3164A2601C6_METHOD_2_00BE5A24F02298DC_OFFSET UNITYSDK_OFFSET(0x13C9E710)
#define CLASS_2_A526C3164A2601C6_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x13C9EBC0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x13C9DDB0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0x13C9DBC0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x13C9E210)
#define CLASS_2_A526C3164A2601C6_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x13C9DA50)
#define CLASS_2_A526C3164A2601C6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13C9DF90)
#define CLASS_2_A526C3164A2601C6_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x13C9D6B0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_4D5351A5CDAC34BC_OFFSET UNITYSDK_OFFSET(0x13C9F120)
#define CLASS_2_A526C3164A2601C6_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13C9F860)
#define CLASS_2_A526C3164A2601C6_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13C9F800)
#define CLASS_2_A526C3164A2601C6_METHOD_2_58BFC52E546ECE1F_OFFSET UNITYSDK_OFFSET(0x13C9E6B0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_5D868F3D6A3DAB13_OFFSET UNITYSDK_OFFSET(0x13C9E420)
#define CLASS_2_A526C3164A2601C6_METHOD_2_8B2D6636BADD098E_OFFSET UNITYSDK_OFFSET(0x13C9E9B0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x13C9F080)
#define CLASS_2_A526C3164A2601C6_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x13C9EFE0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_A5148EA9298F38F2_OFFSET UNITYSDK_OFFSET(0x13C9ED90)
#define CLASS_2_A526C3164A2601C6_METHOD_2_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x13C9E060)
#define CLASS_2_A526C3164A2601C6_METHOD_2_AAE61ABAE8899086_OFFSET UNITYSDK_OFFSET(0x13C9E2D0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13C9ECA0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_BCA794728913022B_OFFSET UNITYSDK_OFFSET(0x13C9E520)
#define CLASS_2_A526C3164A2601C6_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x13C9F8C0)
#define CLASS_2_A526C3164A2601C6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13C9ED30)
#define CLASS_2_A526C3164A2601C6_METHOD_2_CB7604B59F367726_OFFSET UNITYSDK_OFFSET(0x13C9DE70)
#define CLASS_2_A526C3164A2601C6_METHOD_2_F4F5C92AD8354C0C_OFFSET UNITYSDK_OFFSET(0x13C9EC30)
#define CLASS_2_A526C3164A2601C6_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x13C9DEE0)
#define CLASS_2_A526C3164A2601C6_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x13C9DA30)
#define CLASS_2_A526C3164A2601C6__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C9F760)
#define CLASS_2_A526C3164A2601C6__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9F710)
#define CLASS_2_A526C3164A2601C6__ONBIND_OFFSET UNITYSDK_OFFSET(0x13C9D5A0)
#define CLASS_2_A526C3164A2601C6__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x13C9E1D0)
#define CLASS_2_A526C3164A2601C6__ONTICK_OFFSET UNITYSDK_OFFSET(0x13C9E000)
#define CLASS_2_A526C3164A2601C6___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13C9F9E0)
#define CLASS_2_A526C3164A2601C6___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13C9FA40)
#define CLASS_2_A526C3164A2601C6___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13C9F7A0)
#define CLASS_2_A526C3164A2601C6___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x13C9F980)
#define CLASS_2_A526C3164A2601C6___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x13C9F920)

inline static constexpr unsigned int Class_2_A526C3164A2601C6_TypeDefinitionIndex = 66895;

class Class_2_A526C3164A2601C6 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::RPG::Client::TextID* StaticGet_Field_2_0()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A526C3164A2601C6_TypeDefinitionIndex)->GetStaticField(0x13DC0);
	}
	static ::RPG::GameCore::BattleScoringDisplayType* StaticGet_Field_2_1()
	{
		return (::RPG::GameCore::BattleScoringDisplayType*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A526C3164A2601C6_TypeDefinitionIndex)->GetStaticField(0x13DD0);
	}
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::Int32 Field_2_7 = 0x9; // 0x0
	::UnityEngine::Animation* Field_2_8; // 0x60
	::UnityEngine::Animation* Field_2_9; // 0x68
	::UnityEngine::UI::Text* Field_2_10; // 0x70
	::RPG::GameCore::BattleInstance* Field_2_11; // 0x78
	::RPG::GameCore::LevelDataComponent* Field_2_12; // 0x80
	::UnityEngine::ParticleSystem* Field_2_13; // 0x88
	::Il2CppArray<::Class_2_DEB067F815EC1625*>* Field_2_14; // 0x90
	::UnityEngine::AnimationState* Field_2_15; // 0x98
	::System::Int32 Field_2_16; // 0xA0
	::System::Single Field_2_17; // 0xA4
	::Class_2_A526C3164A2601C6_ModifyValueStatus Field_2_18; // 0xA8
	::RPG::GameCore::ScoringShowType Field_2_19; // 0xAC
	::System::Int32 Field_2_20; // 0xB0
	::System::Boolean Field_2_21; // 0xB4
	::System::Boolean Field_2_22; // 0xB5
	::System::Boolean Field_2_23; // 0xB6
	::System::Int32 Field_2_24; // 0xB8
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

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_2ED6C3773AA1E488()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_2ED6C3773AA1E488_OFFSET))(this);
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

	::RPG::Client::TextID Method_2_A5148EA9298F38F2()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_A5148EA9298F38F2_OFFSET))(this);
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

	::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A526C3164A2601C6___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
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
