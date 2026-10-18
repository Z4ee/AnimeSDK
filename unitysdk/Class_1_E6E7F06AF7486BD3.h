#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TalkConvinceSpliteLineType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_469A5FF005CF3F5C;
class Class_1_4A90D78D94DB1347;
class Class_1_9B3591E177CAF203;
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

#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_05D7AAEC607F2ECB_OFFSET UNITYSDK_OFFSET(0xBBBBCF0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_0823717A0785467E_OFFSET UNITYSDK_OFFSET(0xBBBA600)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xBBBB900)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0xBBBAC10)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_0F0EC604BE0CCBE3_1_OFFSET UNITYSDK_OFFSET(0xBBBB8B0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_0F0EC604BE0CCBE3_OFFSET UNITYSDK_OFFSET(0xBBBB850)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_1878B124F047D5F9_OFFSET UNITYSDK_OFFSET(0xBBBB000)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0xBBBA7F0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_1C6B7541CC63E58D_OFFSET UNITYSDK_OFFSET(0xBBBC380)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_23EFCEB999C1D825_OFFSET UNITYSDK_OFFSET(0xBBBA790)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_2A2B4A2E0BDAAF15_OFFSET UNITYSDK_OFFSET(0xBBBBEF0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_37791546E860A1D8_OFFSET UNITYSDK_OFFSET(0xBBBA020)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xBBBAAE0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_5B3A5D0D38677751_OFFSET UNITYSDK_OFFSET(0xBBBBF60)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_5DB75B9D6C5B7EFF_OFFSET UNITYSDK_OFFSET(0xBBBBC90)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_68BC12625460376F_OFFSET UNITYSDK_OFFSET(0xBBBA5A0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_74CA73BFC171FD34_OFFSET UNITYSDK_OFFSET(0xBBBC040)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0xBBBBFC0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xBBBBB10)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xBBBB9B0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xBBBC6A0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_AF412E7D5381F033_OFFSET UNITYSDK_OFFSET(0xBBBB370)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_BBE2D28D8A6AFB06_OFFSET UNITYSDK_OFFSET(0xBBBA9F0)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_C90FD5213008FA99_OFFSET UNITYSDK_OFFSET(0xBBBAA50)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_CE3DDC2968DEDCA9_OFFSET UNITYSDK_OFFSET(0xBBBBC40)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_D460587695D41831_OFFSET UNITYSDK_OFFSET(0xBBBAE30)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_DF9351414000D396_OFFSET UNITYSDK_OFFSET(0xBBBBB90)
#define CLASS_1_E6E7F06AF7486BD3_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xBBB9ED0)
#define CLASS_1_E6E7F06AF7486BD3__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBBC6F0)
#define CLASS_1_E6E7F06AF7486BD3__CTOR_OFFSET UNITYSDK_OFFSET(0xBBB9E10)

inline static constexpr unsigned int Class_1_E6E7F06AF7486BD3_TypeDefinitionIndex = 60679;

class Class_1_E6E7F06AF7486BD3 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_NIAMMLFKION()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E6E7F06AF7486BD3_TypeDefinitionIndex)->GetStaticField(0xBEE0);
	}
	static ::System::Int32* StaticGet_GAGPIMHKDEM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E6E7F06AF7486BD3_TypeDefinitionIndex)->GetStaticField(0xBEE4);
	}
	// static const ::System::Single KMDKMLBKGJE; // 0x0
	// static const ::System::String* PPDMDODKIJF; // 0x0
	// static const ::System::String* FOLFCDLBGKN; // 0x0
	// static const ::System::String* PHMDOPHLBJI; // 0x0
	// static const ::System::String* JCIGELOJFJM; // 0x0
	// static const ::System::String* BBCEJJNIELO; // 0x0
	::UnityEngine::Transform* JPAGKGFPBKE; // 0x10
	::UnityEngine::AnimationCurve* HFJCMBGOLMK; // 0x18
	::RPG::Client::ConvinceAnchorConfig_AnchorData* DKEGELJMHNI; // 0x20
	::System::String* FOLMMJOKHKJ; // 0x28
	::RPG::GameCore::GameEntity* PKHFKIIGKNB; // 0x30
	::Class_1_9B3591E177CAF203* OIGEMMDNEHF; // 0x38
	::UnityEngine::MaterialPropertyBlock* IDGFNFGGDOL; // 0x40
	::RPG::Client::ConvinceSpliteLineConfig* EBPOCAOGMLG; // 0x48
	::System::String* MACIEBIIBAO; // 0x50
	::System::Action* LEGGMPIFJIL; // 0x58
	::UnityEngine::Texture2D* AFKNNCICIBI; // 0x60
	::RPG::Client::FakeDoubleScreenMonoPlugin* CEODOONOFBM; // 0x68
	::UnityEngine::GameObject* AJLACLLGMLF; // 0x70
	::RPG::Client::MonoConvinceDoubleScreenAnchor* ONHMBLNOMED; // 0x78
	::UnityEngine::Transform* OIECMOEDKGJ; // 0x80
	::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x88
	::Class_1_4A90D78D94DB1347* MGBABGFLKHN; // 0x90
	::UnityEngine::GameObject* PPJKLLDCCGE; // 0x98
	::UnityEngine::Texture2D* NGKMMGFBBOI; // 0xA0
	::RPG::GameCore::AnchorInfo* LCHCHMHNPFG; // 0xA8
	::RPG::Client::ConvinceAnchorConfig_AnchorData* NLGODOIMMIF; // 0xB0
	::RPG::GameCore::GameEntity* NODHJBFCMBA; // 0xB8
	::UnityEngine::Vector3 KAAFIBDCLKP; // 0xC0
	::System::Nullable_1<::System::Single> OFABLKBBNHC; // 0xCC
	::UnityEngine::Vector3 JHLJODHMEMP; // 0xD4
	::UnityEngine::Vector3 KLNKMOLHCOG; // 0xE0
	::System::Nullable_1<::System::Single> DLFPFLOAGGG; // 0xEC
	::System::Single BCCNAPMANBA; // 0xF4
	::System::Single NKACMJLILMM; // 0xF8
	::System::Single MLFJOADGMOD; // 0xFC
	::UnityEngine::Vector3 IHABKKMAFLF; // 0x100
	::UnityEngine::Vector3 LOMMNBIANJO; // 0x10C
	::System::Single JFICAPCMIHM; // 0x118

	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3__CCTOR_OFFSET))();
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
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

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
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

	::System::Void Method_1_AF412E7D5381F033(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E6E7F06AF7486BD3_METHOD_1_AF412E7D5381F033_OFFSET))(this, a1);
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
