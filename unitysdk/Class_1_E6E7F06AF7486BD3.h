#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TalkConvinceSpliteLineType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_469A5FF005CF3F5C;
class Class_1_CED0702510CFFDAF;
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

#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_05D7AAEC607F2ECB_OFFSET UNITYSDK_OFFSET(0x113A8590)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x113A7680)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_1C6B7541CC63E58D_OFFSET UNITYSDK_OFFSET(0x113A8C20)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_2A2B4A2E0BDAAF15_OFFSET UNITYSDK_OFFSET(0x113A8790)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_37791546E860A1D8_OFFSET UNITYSDK_OFFSET(0x113A6890)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_5B3A5D0D38677751_OFFSET UNITYSDK_OFFSET(0x113A8800)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_5DB75B9D6C5B7EFF_OFFSET UNITYSDK_OFFSET(0x113A8530)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_657B3A247C551E8D_OFFSET UNITYSDK_OFFSET(0x113A6E10)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_73D70CF7573CE802_OFFSET UNITYSDK_OFFSET(0x113A6E70)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_7B9D6F143086B23A_OFFSET UNITYSDK_OFFSET(0x113A7060)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0x113A8860)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x113A83C0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x113A8250)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x113A7380)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x113A8F40)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_AE3AEDEE178726D7_OFFSET UNITYSDK_OFFSET(0x113A8440)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_BBE2D28D8A6AFB06_OFFSET UNITYSDK_OFFSET(0x113A7290)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_BF4B8331A39F972F_OFFSET UNITYSDK_OFFSET(0x113A72F0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_C3D38DC0DCE48AEE_OFFSET UNITYSDK_OFFSET(0x113A88E0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_CE3DDC2968DEDCA9_OFFSET UNITYSDK_OFFSET(0x113A84E0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_D0ABC438252B2BEB_OFFSET UNITYSDK_OFFSET(0x113A7B90)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x113A67B0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_D131FF0867362DC6_1_OFFSET UNITYSDK_OFFSET(0x113A80A0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_D131FF0867362DC6_OFFSET UNITYSDK_OFFSET(0x113A8050)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0x113A8100)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_D97CDF059CC668F7_OFFSET UNITYSDK_OFFSET(0x113A7000)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_DD1DED8E09CAD180_OFFSET UNITYSDK_OFFSET(0x113A7840)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x113A74A0)
#define CLASS_1_E6E7F06AF7486BD3__CCTOR_OFFSET UNITYSDK_OFFSET(0x113A8F90)
#define CLASS_1_E6E7F06AF7486BD3__CTOR_OFFSET UNITYSDK_OFFSET(0x113A66F0)

inline static constexpr unsigned int Class_1_E6E7F06AF7486BD3_TypeDefinitionIndex = 49158;

class Class_1_E6E7F06AF7486BD3 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E6E7F06AF7486BD3_TypeDefinitionIndex)->GetStaticField(0x10140);
	}
	static ::System::Int32* StaticGet_Field_1_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E6E7F06AF7486BD3_TypeDefinitionIndex)->GetStaticField(0x10144);
	}
	// static const ::System::Single Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_38; // 0x0
	// static const ::System::String* Field_1_39; // 0x0
	// static const ::System::String* Field_1_40; // 0x0
	::RPG::GameCore::GameEntity* Field_1_29; // 0x10
	::RPG::Client::MonoConvinceDoubleScreenAnchor* Field_1_17; // 0x18
	::UnityEngine::Texture2D* Field_1_18; // 0x20
	::Class_1_CED0702510CFFDAF* Field_1_0; // 0x28
	::UnityEngine::Transform* Field_1_30; // 0x30
	::System::String* Field_1_11; // 0x38
	::RPG::Client::ConvinceSpliteLineConfig* Field_1_36; // 0x40
	::UnityEngine::GameObject* Field_1_16; // 0x48
	::RPG::GameCore::GameWorld* Field_1_24; // 0x50
	::RPG::Client::ConvinceAnchorConfig_AnchorData* Field_1_27; // 0x58
	::UnityEngine::GameObject* Field_1_15; // 0x60
	::Class_1_E05E7A6D9DE9138B* Field_1_22; // 0x68
	::RPG::GameCore::AnchorInfo* Field_1_25; // 0x70
	::UnityEngine::Transform* Field_1_31; // 0x78
	::RPG::GameCore::GameEntity* Field_1_28; // 0x80
	::RPG::Client::FakeDoubleScreenMonoPlugin* Field_1_20; // 0x88
	::System::Action* Field_1_21; // 0x90
	::RPG::Client::ConvinceAnchorConfig_AnchorData* Field_1_26; // 0x98
	::UnityEngine::Texture2D* Field_1_19; // 0xA0
	::UnityEngine::MaterialPropertyBlock* Field_1_23; // 0xA8
	::UnityEngine::AnimationCurve* Field_1_37; // 0xB0
	::System::String* Field_1_12; // 0xB8
	::System::Single Field_1_33; // 0xC0
	::System::Nullable_1<::System::Single> Field_1_1; // 0xC4
	::System::Single Field_1_34; // 0xCC
	::System::Single Field_1_35; // 0xD0
	::System::Nullable_1<::System::Single> Field_1_2; // 0xD4
	::System::Single Field_1_32; // 0xDC
	::UnityEngine::Vector3 Field_1_5; // 0xE0
	::UnityEngine::Vector3 Field_1_6; // 0xEC
	::UnityEngine::Vector3 Field_1_7; // 0xF8
	::UnityEngine::Vector3 Field_1_4; // 0x104
	::UnityEngine::Vector3 Field_1_3; // 0x110

	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3__CCTOR_OFFSET))();
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_657B3A247C551E8D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_657B3A247C551E8D_OFFSET))(this, a1);
	}

	::System::Void Method_1_D97CDF059CC668F7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_D97CDF059CC668F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_BBE2D28D8A6AFB06(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_BBE2D28D8A6AFB06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BF4B8331A39F972F(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_BF4B8331A39F972F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_DD1DED8E09CAD180(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_DD1DED8E09CAD180_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0ABC438252B2BEB(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_D0ABC438252B2BEB_OFFSET))(this, a1);
	}

	::System::Void Method_1_D131FF0867362DC6(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_D131FF0867362DC6_OFFSET))(this, a1);
	}

	::System::Void Method_1_D131FF0867362DC6_1(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_D131FF0867362DC6_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D87A7D8243E04FD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_D87A7D8243E04FD7_OFFSET))(this);
	}

	::Class_1_469A5FF005CF3F5C* Method_1_AE3AEDEE178726D7(::RPG::GameCore::VCameraShakeV2* a1)
	{
		return ((::Class_1_469A5FF005CF3F5C*(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_AE3AEDEE178726D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B9D6F143086B23A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_7B9D6F143086B23A_OFFSET))(this, a1);
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

	::System::Void Method_1_C3D38DC0DCE48AEE(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_C3D38DC0DCE48AEE_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_73D70CF7573CE802(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_73D70CF7573CE802_OFFSET))(this, a1);
	}

	::System::Void Method_1_1C6B7541CC63E58D(::RPG::Client::TalkConvinceSpliteLineType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkConvinceSpliteLineType))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_1C6B7541CC63E58D_OFFSET))(this, a1);
	}
};
