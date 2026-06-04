#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_3E28D6CB7A8C3FEF_AddScoreStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/RPG/GameCore/BattleTargetIconType.h"
#include "unitysdk/RPG/GameCore/ScoringShowType.h"

class Class_0_16E4307DCC419505_1013;
class Class_2_DEB067F815EC1625;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleScoringChangeParams; }
namespace RPG::GameCore { class BattleTargetChangeParams; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_3E28D6CB7A8C3FEF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB9F0A50)
#define CLASS_2_3E28D6CB7A8C3FEF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB9F0D70)
#define CLASS_2_3E28D6CB7A8C3FEF_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB9ED960)
#define CLASS_2_3E28D6CB7A8C3FEF_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB9ED980)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xB9EEFA0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_16ABB763B7D3AEA1_OFFSET UNITYSDK_OFFSET(0xB9EFD70)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xB9EFB50)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_1C1BE26908999AAB_OFFSET UNITYSDK_OFFSET(0xB9EF560)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB9EFC30)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_3C531F6343D5FF7D_OFFSET UNITYSDK_OFFSET(0xB9F00D0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xB9ED990)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xB9EDEC0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xB9F11A0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB9F1140)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_760FD1B4F7D8B904_OFFSET UNITYSDK_OFFSET(0xB9EF5D0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0xB9EEEF0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_889E15060A54A5A2_OFFSET UNITYSDK_OFFSET(0xB9EF8F0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_8B2D6636BADD098E_OFFSET UNITYSDK_OFFSET(0xB9EF940)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_9350225D1084C076_OFFSET UNITYSDK_OFFSET(0xB9F0120)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0xB9ED6D0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xB9F0760)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xB9F09A0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xB9F06A0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0xB9EF070)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_B9826750958CBF99_OFFSET UNITYSDK_OFFSET(0xB9EF630)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0xB9F08A0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C832A689ED924B93_OFFSET UNITYSDK_OFFSET(0xB9EF450)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C88366FE4C360154_OFFSET UNITYSDK_OFFSET(0xB9F0800)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0xB9F1200)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9EFD10)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CB7604B59F367726_OFFSET UNITYSDK_OFFSET(0xB9EDE50)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xB9EDD00)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_D2BEB454D782094A_OFFSET UNITYSDK_OFFSET(0xB9EFF90)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F4F5C92AD8354C0C_OFFSET UNITYSDK_OFFSET(0xB9EFBC0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F5710FBB9C77699E_OFFSET UNITYSDK_OFFSET(0xB9EF2C0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F80D9C315EB56AA0_OFFSET UNITYSDK_OFFSET(0xB9EDB30)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xB9EF220)
#define CLASS_2_3E28D6CB7A8C3FEF_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB9ED970)
#define CLASS_2_3E28D6CB7A8C3FEF__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9F10A0)
#define CLASS_2_3E28D6CB7A8C3FEF__CTOR_OFFSET UNITYSDK_OFFSET(0xB9F1050)
#define CLASS_2_3E28D6CB7A8C3FEF__ONBIND_OFFSET UNITYSDK_OFFSET(0xB9ED390)
#define CLASS_2_3E28D6CB7A8C3FEF__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB9EF1E0)
#define CLASS_2_3E28D6CB7A8C3FEF__ONTICK_OFFSET UNITYSDK_OFFSET(0xB9EF010)
#define CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB9F1320)
#define CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB9F1380)
#define CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xB9F10E0)
#define CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB9F12C0)
#define CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xB9F1260)

inline static constexpr unsigned int Class_2_3E28D6CB7A8C3FEF_TypeDefinitionIndex = 67141;

class Class_2_3E28D6CB7A8C3FEF : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::RPG::GameCore::BattleScoringDisplayType* StaticGet_Field_2_0()
	{
		return (::RPG::GameCore::BattleScoringDisplayType*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E28D6CB7A8C3FEF_TypeDefinitionIndex)->GetStaticField(0x11C80);
	}
	static ::RPG::Client::TextID* StaticGet_Field_2_1()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E28D6CB7A8C3FEF_TypeDefinitionIndex)->GetStaticField(0x11C88);
	}
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	// static const ::System::Int32 Field_2_8 = 0x9; // 0x0
	::RPG::GameCore::BattleInstance* Field_2_9; // 0x60
	::UnityEngine::Animation* Field_2_10; // 0x68
	::Il2CppArray<::Class_2_DEB067F815EC1625*>* Field_2_11; // 0x70
	::UnityEngine::Transform* Field_2_12; // 0x78
	::RPG::GameCore::LevelDataComponent* Field_2_13; // 0x80
	::UnityEngine::Transform* Field_2_14; // 0x88
	::RPG::GameCore::LevelUIComponent* Field_2_15; // 0x90
	::UnityEngine::UI::Text* Field_2_16; // 0x98
	::UnityEngine::ParticleSystem* Field_2_17; // 0xA0
	::UnityEngine::Animation* Field_2_18; // 0xA8
	::UnityEngine::Transform* Field_2_19; // 0xB0
	::UnityEngine::ParticleSystem* Field_2_20; // 0xB8
	::UnityEngine::Transform* Field_2_21; // 0xC0
	::UnityEngine::UI::Text* Field_2_22; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_1013*>*>* Field_2_23; // 0xD0
	::UnityEngine::AnimationState* Field_2_24; // 0xD8
	::UnityEngine::Transform* Field_2_25; // 0xE0
	::RPG::GameCore::ScoringShowType Field_2_26; // 0xE8
	::System::Int32 Field_2_27; // 0xEC
	::System::Single Field_2_28; // 0xF0
	::System::Boolean Field_2_29; // 0xF4
	::System::Boolean Field_2_30; // 0xF5
	::Class_2_3E28D6CB7A8C3FEF_AddScoreStatus Field_2_31; // 0xF8
	::System::Int32 _Index_k__BackingField; // 0xFC
	::System::Int32 Field_2_33; // 0x100
	::System::Int32 Field_2_34; // 0x104

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_F80D9C315EB56AA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F80D9C315EB56AA0_OFFSET))(this);
	}

	::System::Void Method_2_78E5D10876D30BCC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_78E5D10876D30BCC_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5710FBB9C77699E(::RPG::GameCore::BattleScoringChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleScoringChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F5710FBB9C77699E_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C1BE26908999AAB(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_1C1BE26908999AAB_OFFSET))(this, a1);
	}

	::System::Void Method_2_760FD1B4F7D8B904()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_760FD1B4F7D8B904_OFFSET))(this);
	}

	::System::Void Method_2_889E15060A54A5A2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_889E15060A54A5A2_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B2D6636BADD098E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_8B2D6636BADD098E_OFFSET))(this, a1);
	}

	::System::Void Method_2_C832A689ED924B93(::RPG::GameCore::BattleScoringChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleScoringChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C832A689ED924B93_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4F5C92AD8354C0C(::RPG::GameCore::ScoringShowType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScoringShowType))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F4F5C92AD8354C0C_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9826750958CBF99(::Class_2_3E28D6CB7A8C3FEF_AddScoreStatus a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3E28D6CB7A8C3FEF_AddScoreStatus, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_B9826750958CBF99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A5ADA4706DA592FA_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_CB7604B59F367726()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CB7604B59F367726_OFFSET))(this);
	}

	::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_51BBA01F511E6107_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1013* Method_2_D2BEB454D782094A(::RPG::GameCore::BattleTargetIconType a1)
	{
		return ((::Class_0_16E4307DCC419505_1013*(*)(::PVOID, ::RPG::GameCore::BattleTargetIconType))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_D2BEB454D782094A_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C531F6343D5FF7D(::RPG::GameCore::BattleTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_3C531F6343D5FF7D_OFFSET))(this, a1);
	}

	::System::Void Method_2_9350225D1084C076(::RPG::GameCore::BattleTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_9350225D1084C076_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_2_16ABB763B7D3AEA1()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_16ABB763B7D3AEA1_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C88366FE4C360154(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C88366FE4C360154_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
