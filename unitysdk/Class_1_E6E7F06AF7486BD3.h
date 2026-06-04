#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TalkConvinceSpliteLineType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_469A5FF005CF3F5C;
class Class_1_9B3591E177CAF203;
class Class_1_E05E7A6D9DE9138B;
namespace RPG::Client { class ConvinceAnchorConfig_AnchorData; }
namespace RPG::Client { class ConvinceSpliteLineConfig; }
namespace RPG::Client { class FakeDoubleScreenMonoPlugin; }
namespace RPG::Client { class MonoConvinceDoubleScreenAnchor; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_05D7AAEC607F2ECB_OFFSET UNITYSDK_OFFSET(0xA94FB30)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_0823717A0785467E_OFFSET UNITYSDK_OFFSET(0xA94E400)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xA94F730)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0xA94EA20)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_0F0EC604BE0CCBE3_1_OFFSET UNITYSDK_OFFSET(0xA94F6D0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_0F0EC604BE0CCBE3_OFFSET UNITYSDK_OFFSET(0xA94F680)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA94DD50)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_1878B124F047D5F9_OFFSET UNITYSDK_OFFSET(0xA94EE00)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0xA94E600)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_1C6B7541CC63E58D_OFFSET UNITYSDK_OFFSET(0xA9501B0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_23EFCEB999C1D825_OFFSET UNITYSDK_OFFSET(0xA94E5A0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_2A2B4A2E0BDAAF15_OFFSET UNITYSDK_OFFSET(0xA94FD20)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_37791546E860A1D8_OFFSET UNITYSDK_OFFSET(0xA94DE30)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_5B3A5D0D38677751_OFFSET UNITYSDK_OFFSET(0xA94FD90)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_5DB75B9D6C5B7EFF_OFFSET UNITYSDK_OFFSET(0xA94FAD0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_68BC12625460376F_OFFSET UNITYSDK_OFFSET(0xA94E3A0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_74CA73BFC171FD34_OFFSET UNITYSDK_OFFSET(0xA94FE70)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0xA94FDF0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_889AB33F2CBC232A_OFFSET UNITYSDK_OFFSET(0xA94F180)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA94F950)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xA94F7E0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xA94E8F0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xA9504D0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_BBE2D28D8A6AFB06_OFFSET UNITYSDK_OFFSET(0xA94E800)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_C90FD5213008FA99_OFFSET UNITYSDK_OFFSET(0xA94E860)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_CE3DDC2968DEDCA9_OFFSET UNITYSDK_OFFSET(0xA94FA80)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_D460587695D41831_OFFSET UNITYSDK_OFFSET(0xA94EC40)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_DF9351414000D396_OFFSET UNITYSDK_OFFSET(0xA94F9D0)
#define CLASS_1_E6E7F06AF7486BD3__CCTOR_OFFSET UNITYSDK_OFFSET(0xA950520)
#define CLASS_1_E6E7F06AF7486BD3__CTOR_OFFSET UNITYSDK_OFFSET(0xA94DC90)

inline static constexpr unsigned int Class_1_E6E7F06AF7486BD3_TypeDefinitionIndex = 56711;

class Class_1_E6E7F06AF7486BD3 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E6E7F06AF7486BD3_TypeDefinitionIndex)->GetStaticField(0x14000);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E6E7F06AF7486BD3_TypeDefinitionIndex)->GetStaticField(0x14004);
	}
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	::RPG::Client::MonoConvinceDoubleScreenAnchor* Field_1_8; // 0x10
	::RPG::Client::ConvinceAnchorConfig_AnchorData* Field_1_9; // 0x18
	::UnityEngine::GameObject* Field_1_10; // 0x20
	::RPG::GameCore::GameEntity* Field_1_11; // 0x28
	::UnityEngine::Texture2D* Field_1_12; // 0x30
	::System::String* Field_1_13; // 0x38
	::Class_1_E05E7A6D9DE9138B* Field_1_14; // 0x40
	::RPG::Client::ConvinceSpliteLineConfig* Field_1_15; // 0x48
	::Class_1_9B3591E177CAF203* Field_1_16; // 0x50
	::UnityEngine::Transform* Field_1_17; // 0x58
	::System::Action* Field_1_18; // 0x60
	::RPG::Client::FakeDoubleScreenMonoPlugin* Field_1_19; // 0x68
	::UnityEngine::GameObject* Field_1_20; // 0x70
	::RPG::GameCore::AnchorInfo* Field_1_21; // 0x78
	::RPG::GameCore::GameWorld* Field_1_22; // 0x80
	::UnityEngine::AnimationCurve* Field_1_23; // 0x88
	::UnityEngine::MaterialPropertyBlock* Field_1_24; // 0x90
	::UnityEngine::Transform* Field_1_25; // 0x98
	::RPG::GameCore::GameEntity* Field_1_26; // 0xA0
	::UnityEngine::Texture2D* Field_1_27; // 0xA8
	::System::String* Field_1_28; // 0xB0
	::RPG::Client::ConvinceAnchorConfig_AnchorData* Field_1_29; // 0xB8
	::System::Single Field_1_30; // 0xC0
	::System::Nullable_1<::System::Single> Field_1_31; // 0xC4
	::System::Single Field_1_32; // 0xCC
	::UnityEngine::Vector3 Field_1_33; // 0xD0
	::UnityEngine::Vector3 Field_1_34; // 0xDC
	::System::Nullable_1<::System::Single> Field_1_35; // 0xE8
	::UnityEngine::Vector3 Field_1_36; // 0xF0
	::UnityEngine::Vector3 Field_1_37; // 0xFC
	::System::Single Field_1_38; // 0x108
	::System::Single Field_1_39; // 0x10C
	::UnityEngine::Vector3 Field_1_40; // 0x110

	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3__CCTOR_OFFSET))();
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_68BC12625460376F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_68BC12625460376F_OFFSET))(this, a1);
	}

	::System::Void Method_1_23EFCEB999C1D825(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_23EFCEB999C1D825_OFFSET))(this, a1);
	}

	::System::Void Method_1_BBE2D28D8A6AFB06(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_BBE2D28D8A6AFB06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C90FD5213008FA99(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_C90FD5213008FA99_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_1_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_1_1878B124F047D5F9(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_1878B124F047D5F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_889AB33F2CBC232A(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_889AB33F2CBC232A_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F0EC604BE0CCBE3(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_0F0EC604BE0CCBE3_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F0EC604BE0CCBE3_1(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_0F0EC604BE0CCBE3_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_0868EF727040C390_OFFSET))(this);
	}

	::Class_1_469A5FF005CF3F5C* Method_1_DF9351414000D396(::RPG::GameCore::VCameraShakeV2* a1)
	{
		return ((::Class_1_469A5FF005CF3F5C*(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_DF9351414000D396_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C409C2CC83887DC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_1C409C2CC83887DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_CE3DDC2968DEDCA9(::RPG::GameCore::AnchorInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_CE3DDC2968DEDCA9_OFFSET))(this, a1);
	}

	::System::Void Method_1_5DB75B9D6C5B7EFF(::RPG::Client::ConvinceAnchorConfig_AnchorData* a1, ::RPG::Client::ConvinceAnchorConfig_AnchorData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ConvinceAnchorConfig_AnchorData*, ::RPG::Client::ConvinceAnchorConfig_AnchorData*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_5DB75B9D6C5B7EFF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_05D7AAEC607F2ECB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_05D7AAEC607F2ECB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_37791546E860A1D8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_37791546E860A1D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A2B4A2E0BDAAF15(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_2A2B4A2E0BDAAF15_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5B3A5D0D38677751(::RPG::Client::ConvinceSpliteLineConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ConvinceSpliteLineConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_5B3A5D0D38677751_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8723A000853037DA(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_8723A000853037DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_74CA73BFC171FD34(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_74CA73BFC171FD34_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_0823717A0785467E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_0823717A0785467E_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C6B7541CC63E58D(::RPG::Client::TalkConvinceSpliteLineType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkConvinceSpliteLineType))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_1C6B7541CC63E58D_OFFSET))(this, a1);
	}
};
