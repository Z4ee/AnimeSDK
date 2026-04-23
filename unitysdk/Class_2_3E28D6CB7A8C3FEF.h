#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_3E28D6CB7A8C3FEF_AddScoreStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/RPG/GameCore/ScoringShowType.h"

class Class_2_DEB067F815EC1625;
class Class_2_E5E41715B766E89C;
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

#define CLASS_2_3E28D6CB7A8C3FEF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x10ACE3F0)
#define CLASS_2_3E28D6CB7A8C3FEF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x10ACE6A0)
#define CLASS_2_3E28D6CB7A8C3FEF_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x10ACB9D0)
#define CLASS_2_3E28D6CB7A8C3FEF_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x10ACB9F0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x10ACCB30)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x10ACD6E0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_1C1BE26908999AAB_OFFSET UNITYSDK_OFFSET(0x10ACD0F0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x10ACCDB0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_29FD77BB738B9AAC_OFFSET UNITYSDK_OFFSET(0x10ACD900)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10ACD7C0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_3C98CA656474384D_OFFSET UNITYSDK_OFFSET(0x10ACB770)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_424A8E8E51A30867_OFFSET UNITYSDK_OFFSET(0x10ACBBA0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x10ACBA00)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x10ACBE90)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x10ACEA60)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10ACEA00)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_760FD1B4F7D8B904_OFFSET UNITYSDK_OFFSET(0x10ACD160)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0x10ACCA80)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_7DFC4B17ACBC8649_OFFSET UNITYSDK_OFFSET(0x10ACD480)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_8B2D6636BADD098E_OFFSET UNITYSDK_OFFSET(0x10ACD4D0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_9DEB8DAD24825226_OFFSET UNITYSDK_OFFSET(0x10ACDB20)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x10ACE0E0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x10ACE340)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x10ACE020)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x10ACCC00)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_B9826750958CBF99_OFFSET UNITYSDK_OFFSET(0x10ACD1C0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0x10ACE240)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C832A689ED924B93_OFFSET UNITYSDK_OFFSET(0x10ACCFE0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_C88366FE4C360154_OFFSET UNITYSDK_OFFSET(0x10ACE1A0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10ACD8A0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_CB7604B59F367726_OFFSET UNITYSDK_OFFSET(0x10ACBE20)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x10ACBCD0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x10ACEAC0)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_E1749789441DFDE9_OFFSET UNITYSDK_OFFSET(0x10ACDB70)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F4F5C92AD8354C0C_OFFSET UNITYSDK_OFFSET(0x10ACD750)
#define CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_F5710FBB9C77699E_OFFSET UNITYSDK_OFFSET(0x10ACCE50)
#define CLASS_2_3E28D6CB7A8C3FEF_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x10ACB9E0)
#define CLASS_2_3E28D6CB7A8C3FEF__CCTOR_OFFSET UNITYSDK_OFFSET(0x10ACE960)
#define CLASS_2_3E28D6CB7A8C3FEF__CTOR_OFFSET UNITYSDK_OFFSET(0x10ACE910)
#define CLASS_2_3E28D6CB7A8C3FEF__ONBIND_OFFSET UNITYSDK_OFFSET(0x10ACB440)
#define CLASS_2_3E28D6CB7A8C3FEF__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x10ACCD70)
#define CLASS_2_3E28D6CB7A8C3FEF__ONTICK_OFFSET UNITYSDK_OFFSET(0x10ACCBA0)
#define CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x10ACEC00)
#define CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x10ACEC60)
#define CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10ACE9A0)
#define CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x10ACEBA0)
#define CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x10ACEB30)

inline static constexpr unsigned int Class_2_3E28D6CB7A8C3FEF_TypeDefinitionIndex = 66202;

class Class_2_3E28D6CB7A8C3FEF : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::RPG::Client::TextID* StaticGet_Field_2_33()
	{
		return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E28D6CB7A8C3FEF_TypeDefinitionIndex)->GetStaticField(0x5D10);
	}
	static ::RPG::GameCore::BattleScoringDisplayType* StaticGet_Field_2_34()
	{
		return (::RPG::GameCore::BattleScoringDisplayType*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E28D6CB7A8C3FEF_TypeDefinitionIndex)->GetStaticField(0x5D20);
	}
	// static const ::System::String* Field_2_11; // 0x0
	// static const ::System::String* Field_2_27; // 0x0
	// static const ::System::String* Field_2_28; // 0x0
	// static const ::System::String* Field_2_29; // 0x0
	// static const ::System::String* Field_2_30; // 0x0
	// static const ::System::String* Field_2_31; // 0x0
	// static const ::System::Int32 Field_2_32 = 0x9; // 0x0
	::RPG::GameCore::BattleInstance* Field_2_13; // 0x60
	::UnityEngine::Transform* Field_2_7; // 0x68
	::UnityEngine::UI::Text* Field_2_1; // 0x70
	::UnityEngine::Transform* Field_2_6; // 0x78
	::UnityEngine::UI::Text* Field_2_0; // 0x80
	::UnityEngine::Animation* Field_2_3; // 0x88
	::UnityEngine::ParticleSystem* Field_2_9; // 0x90
	::UnityEngine::AnimationState* Field_2_16; // 0x98
	::UnityEngine::Animation* Field_2_2; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_E5E41715B766E89C*>*>* Field_2_26; // 0xA8
	::RPG::GameCore::LevelDataComponent* Field_2_14; // 0xB0
	::UnityEngine::ParticleSystem* Field_2_10; // 0xB8
	::UnityEngine::Transform* Field_2_8; // 0xC0
	::Il2CppArray<::Class_2_DEB067F815EC1625*>* Field_2_19; // 0xC8
	::UnityEngine::Transform* Field_2_5; // 0xD0
	::UnityEngine::Transform* Field_2_4; // 0xD8
	::RPG::GameCore::LevelUIComponent* Field_2_15; // 0xE0
	::RPG::GameCore::ScoringShowType Field_2_23; // 0xE8
	::System::Int32 Field_2_20; // 0xEC
	::System::Single Field_2_25; // 0xF0
	::Class_2_3E28D6CB7A8C3FEF_AddScoreStatus Field_2_18; // 0xF4
	::System::Boolean Field_2_24; // 0xF8
	::System::Boolean Field_2_17; // 0xF9
	::System::Int32 Field_2_22; // 0xFC
	::System::Int32 _Index_k__BackingField; // 0x100
	::System::Int32 Field_2_21; // 0x104

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

	::System::Void Method_2_3C98CA656474384D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_3C98CA656474384D_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_424A8E8E51A30867()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_424A8E8E51A30867_OFFSET))(this);
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

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
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

	::System::Void Method_2_7DFC4B17ACBC8649(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_7DFC4B17ACBC8649_OFFSET))(this, a1);
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

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_2_9DEB8DAD24825226(::RPG::GameCore::BattleTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_9DEB8DAD24825226_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1749789441DFDE9(::RPG::GameCore::BattleTargetChangeParams* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetChangeParams*))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_E1749789441DFDE9_OFFSET))(this, a1);
	}

	::RPG::Client::TextID Method_2_29FD77BB738B9AAC()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_29FD77BB738B9AAC_OFFSET))(this);
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

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E28D6CB7A8C3FEF___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
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
