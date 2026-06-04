#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::Client { class MeshPartIDMask; }
namespace RPG::Client::TAUtils { class RendererSlots; }
namespace RPG::GameCore { class HighlightOutlineSetting; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_CHARACTEREFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB589A30)
#define RPG_CLIENT_CHARACTEREFFECT_GETHIGHOUTLINERENDERER2MATDIC_OFFSET UNITYSDK_OFFSET(0xB5846B0)
#define RPG_CLIENT_CHARACTEREFFECT_GET_ALLMESHRENDER_OFFSET UNITYSDK_OFFSET(0xB589E30)
#define RPG_CLIENT_CHARACTEREFFECT_GET_ARTMODELLOADED_OFFSET UNITYSDK_OFFSET(0xB589D80)
#define RPG_CLIENT_CHARACTEREFFECT_GET_ENABLEHIGHLIGHTOUTLINE_OFFSET UNITYSDK_OFFSET(0xB589D50)
#define RPG_CLIENT_CHARACTEREFFECT_GET_FETCHOWNERTIMESCALE_OFFSET UNITYSDK_OFFSET(0xB589D70)
#define RPG_CLIENT_CHARACTEREFFECT_INHERITSHOWPARTIDFROMORIGINMATERIAL_OFFSET UNITYSDK_OFFSET(0xB587100)
#define RPG_CLIENT_CHARACTEREFFECT_LATETICK_OFFSET UNITYSDK_OFFSET(0xB5895B0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_0D11EC436EC5ACCE_OFFSET UNITYSDK_OFFSET(0xB5873B0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xB586520)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_0DF118317DE1F7C4_OFFSET UNITYSDK_OFFSET(0xB588B90)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xB589020)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB586020)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0xB5860C0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0xB584BB0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB5863D0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_5223D107AF3EE2AB_1_OFFSET UNITYSDK_OFFSET(0xB585C80)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_5223D107AF3EE2AB_2_OFFSET UNITYSDK_OFFSET(0xB5890F0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_5223D107AF3EE2AB_OFFSET UNITYSDK_OFFSET(0xB585960)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_543063A1C8FC9D3E_OFFSET UNITYSDK_OFFSET(0xB5877B0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0xB586F20)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_66DEAEA761FF7AE6_OFFSET UNITYSDK_OFFSET(0xB5875B0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_7E7E85596230BF07_OFFSET UNITYSDK_OFFSET(0xB585FB0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xB584710)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0xB5885C0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xB586860)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_AF53AC45ED2466EB_OFFSET UNITYSDK_OFFSET(0xB5896B0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0xB586670)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0xB584560)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_C76FBF5BDDCD86A3_1_OFFSET UNITYSDK_OFFSET(0xB588450)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_C76FBF5BDDCD86A3_OFFSET UNITYSDK_OFFSET(0xB586E00)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0xB5858C0)
#define RPG_CLIENT_CHARACTEREFFECT_METHOD_5_D0F687D10F87BA3F_OFFSET UNITYSDK_OFFSET(0xB585290)
#define RPG_CLIENT_CHARACTEREFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB589BC0)
#define RPG_CLIENT_CHARACTEREFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB589B20)
#define RPG_CLIENT_CHARACTEREFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB589A80)
#define RPG_CLIENT_CHARACTEREFFECT_REFRESHHIGHOUTLINE_OFFSET UNITYSDK_OFFSET(0xB584B40)
#define RPG_CLIENT_CHARACTEREFFECT_REFRESHRENDERBATTLESTENCIL_OFFSET UNITYSDK_OFFSET(0xB5844A0)
#define RPG_CLIENT_CHARACTEREFFECT_SETBATTLECHARASTENCIL_OFFSET UNITYSDK_OFFSET(0xB584420)
#define RPG_CLIENT_CHARACTEREFFECT_SETENABLEHIGHLIGHTOUTLINE_OFFSET UNITYSDK_OFFSET(0xB5842F0)
#define RPG_CLIENT_CHARACTEREFFECT_SETEXTRATARGETRENDERS_OFFSET UNITYSDK_OFFSET(0xB585520)
#define RPG_CLIENT_CHARACTEREFFECT_SETSHADERSIMULATIONSPEEDENABLE_OFFSET UNITYSDK_OFFSET(0xB5898F0)
#define RPG_CLIENT_CHARACTEREFFECT_SET_ARTMODELLOADED_OFFSET UNITYSDK_OFFSET(0xB589D90)
#define RPG_CLIENT_CHARACTEREFFECT_SET_ENABLEHIGHLIGHTOUTLINE_OFFSET UNITYSDK_OFFSET(0xB5843B0)
#define RPG_CLIENT_CHARACTEREFFECT_SET_FETCHOWNERTIMESCALE_OFFSET UNITYSDK_OFFSET(0xB589D60)
#define RPG_CLIENT_CHARACTEREFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0xB58A070)
#define RPG_CLIENT_CHARACTEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xB589E40)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterEffect_TypeDefinitionIndex = 65215;

	class CharacterEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x5C560);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x121E0);
		}
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x121E4);
		}
		static ::System::Int32* StaticGet_Field_5_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x121E8);
		}
		static ::System::Int32* StaticGet_Field_5_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x121EC);
		}
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x121F0);
		}
		static ::System::Int32* StaticGet_Field_5_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x121F4);
		}
		static ::System::Int32* StaticGet_Field_5_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x121F8);
		}
		static ::System::Int32* StaticGet_Field_5_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x121FC);
		}
		static ::System::Int32* StaticGet_Field_5_9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12200);
		}
		static ::System::Int32* StaticGet_Field_5_10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12204);
		}
		static ::System::Int32* StaticGet_Field_5_11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12208);
		}
		static ::System::Int32* StaticGet_Field_5_12()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x1220C);
		}
		static ::System::Int32* StaticGet_Field_5_13()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12210);
		}
		static ::System::Int32* StaticGet_Field_5_14()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12214);
		}
		static ::System::Int32* StaticGet_Field_5_15()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12218);
		}
		static ::System::Int32* StaticGet_Field_5_16()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x1221C);
		}
		static ::System::Int32* StaticGet_Field_5_17()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12220);
		}
		static ::System::Int32* StaticGet_Field_5_18()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12224);
		}
		static ::System::Int32* StaticGet_Field_5_19()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12228);
		}
		static ::System::Int32* StaticGet_Field_5_20()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x1222C);
		}
		static ::System::Int32* StaticGet_Field_5_21()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12230);
		}
		static ::System::Int32* StaticGet_Field_5_22()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12234);
		}
		static ::System::Int32* StaticGet_Field_5_23()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12238);
		}
		static ::System::Int32* StaticGet_Field_5_24()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x1223C);
		}
		static ::System::Int32* StaticGet_Field_5_25()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12240);
		}
		static ::System::Int32* StaticGet_Field_5_26()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12244);
		}
		static ::System::Int32* StaticGet_Field_5_27()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12248);
		}
		static ::System::Int32* StaticGet_Field_5_28()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x1224C);
		}
		static ::System::Int32* StaticGet_Field_5_29()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12250);
		}
		static ::System::Int32* StaticGet_Field_5_30()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12254);
		}
		static ::System::Int32* StaticGet_Field_5_31()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterEffect_TypeDefinitionIndex)->GetStaticField(0x12258);
		}
		::System::Boolean Field_5_32; // 0x18
		::System::Boolean KeyOutlineColorIsOn; // 0x19
		::UnityEngine::Color KeyOutlineInnerColor; // 0x1C
		::UnityEngine::Color KeyOutlineOuterColor; // 0x2C
		::System::Single HighlightPow; // 0x3C
		::System::Single OutlineWidth; // 0x40
		::System::Single OutlineWidth2; // 0x44
		::System::Boolean KeyDisableHighlightOutline; // 0x48
		::UnityEngine::Material* HighlightOutlineMaterial; // 0x50
		::System::Boolean _EnableHighlightOutline; // 0x58
		::System::Single OutlineEnhance; // 0x5C
		::System::Int32 StencilRef; // 0x60
		::System::String* CloseFightOverridePoint; // 0x68
		::System::Func_1<::System::Single>* _FetchOwnerTimeScale_k__BackingField; // 0x70
		::System::Boolean Field_5_46; // 0x78
		::Il2CppArray<::UnityEngine::Renderer*>* TargetMeshRender; // 0x80
		::Il2CppArray<::RPG::Client::TAUtils::RendererSlots*>* TargetMaterials; // 0x88
		::Il2CppArray<::RPG::Client::MeshPartIDMask*>* TargetMeshIDPart; // 0x90
		::System::Boolean EnableOverlayPassesHalfRes; // 0x98
		::System::Boolean ShaderSimulationSpeedEnable; // 0x99
		::System::Boolean ExcludeModelEffects; // 0x9A
		::RPG::GameCore::HighlightOutlineSetting* Field_5_53; // 0xA0
		::RPG::GameCore::HighlightOutlineSetting* Field_5_54; // 0xA8
		::RPG::GameCore::HighlightOutlineSetting* Field_5_55; // 0xB0
		::System::Boolean Field_5_56; // 0xB8
		::UnityEngine::Color Field_5_57; // 0xBC
		::UnityEngine::Color Field_5_58; // 0xCC
		::System::Single Field_5_59; // 0xDC
		::System::Boolean Field_5_60; // 0xE0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Material*>* Field_5_61; // 0xE8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Int32>* Field_5_62; // 0xF0
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_5_63; // 0xF8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* Field_5_64; // 0x100
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_5_65; // 0x108
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_5_66; // 0x110
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_5_67; // 0x118
		::RPG::Client::CharacterShaderPropertyTransition* Field_5_68; // 0x120
		::System::Single Field_5_69; // 0x128
		::System::Single Field_5_70; // 0x12C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT__CCTOR_OFFSET))();
		}

		::System::Void SetEnableHighlightOutline(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SETENABLEHIGHLIGHTOUTLINE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBattleCharaStencil(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SETBATTLECHARASTENCIL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Material*>* GetHighOutlineRenderer2MatDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GETHIGHOUTLINERENDERER2MATDIC_OFFSET))(this);
		}

		::System::Void RefreshHighOutline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_REFRESHHIGHOUTLINE_OFFSET))(this, a1);
		}

		::System::Void SetExtraTargetRenders(::System::Boolean a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a2, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SETEXTRATARGETRENDERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RefreshRenderBattleStencil()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_REFRESHRENDERBATTLESTENCIL_OFFSET))(this);
		}

		::System::Boolean Method_5_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_1808E1CF7A125519_OFFSET))(this);
		}

		::System::Void Method_5_1E13A8A5C0FF7D62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_1E13A8A5C0FF7D62_OFFSET))(this);
		}

		::System::Void Method_5_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_5_B799DB9989A18F1D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_B799DB9989A18F1D_OFFSET))(this);
		}

		::System::Void Method_5_D0F687D10F87BA3F(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_D0F687D10F87BA3F_OFFSET))(this, a1);
		}

		::System::Void InheritShowPartIDFromOriginMaterial(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_INHERITSHOWPARTIDFROMORIGINMATERIAL_OFFSET))(this, a1);
		}

		::System::Void Method_5_A27DC2C5A103933A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_A27DC2C5A103933A_OFFSET))(this);
		}

		::System::Void Method_5_C76FBF5BDDCD86A3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_C76FBF5BDDCD86A3_OFFSET))(this);
		}

		::System::Void Method_5_66DEAEA761FF7AE6(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_66DEAEA761FF7AE6_OFFSET))(this, a1);
		}

		::System::Void Method_5_543063A1C8FC9D3E(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_543063A1C8FC9D3E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_0D11EC436EC5ACCE(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_0D11EC436EC5ACCE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_9E38127F40B34F1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_9E38127F40B34F1F_OFFSET))(this);
		}

		::System::Void Method_5_C76FBF5BDDCD86A3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_C76FBF5BDDCD86A3_1_OFFSET))(this);
		}

		::System::Void Method_5_0D7638DBC93E5002()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_0D7638DBC93E5002_OFFSET))(this);
		}

		::System::Void Method_5_A2172401030892FD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_A2172401030892FD_OFFSET))(this);
		}

		::System::Void Method_5_394F35BBA0EE596A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_394F35BBA0EE596A_OFFSET))(this);
		}

		::System::Void Method_5_0DF118317DE1F7C4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_0DF118317DE1F7C4_OFFSET))(this);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_5_CFE6FB160FFF5938()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_CFE6FB160FFF5938_OFFSET))(this);
		}

		::System::Void Method_5_5223D107AF3EE2AB(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_5223D107AF3EE2AB_OFFSET))(this, a1);
		}

		::System::Void Method_5_5223D107AF3EE2AB_1(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_5223D107AF3EE2AB_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_5223D107AF3EE2AB_2(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_5223D107AF3EE2AB_2_OFFSET))(this, a1);
		}

		::System::Void Method_5_B2AF81294D9C69C7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_B2AF81294D9C69C7_OFFSET))(this);
		}

		::System::Void Method_5_6055A93732CC885D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_6055A93732CC885D_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_LATETICK_OFFSET))(this, a1);
		}

		::System::Void SetShaderSimulationSpeedEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SETSHADERSIMULATIONSPEEDENABLE_OFFSET))(this, a1);
		}

		::System::Void Method_5_AF53AC45ED2466EB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_AF53AC45ED2466EB_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean get_EnableHighlightOutline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GET_ENABLEHIGHLIGHTOUTLINE_OFFSET))(this);
		}

		::System::Void set_EnableHighlightOutline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SET_ENABLEHIGHLIGHTOUTLINE_OFFSET))(this, a1);
		}

		::System::Void set_FetchOwnerTimeScale(::System::Func_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SET_FETCHOWNERTIMESCALE_OFFSET))(this, a1);
		}

		::System::Func_1<::System::Single>* get_FetchOwnerTimeScale()
		{
			return ((::System::Func_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GET_FETCHOWNERTIMESCALE_OFFSET))(this);
		}

		::System::Boolean get_ArtModelLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GET_ARTMODELLOADED_OFFSET))(this);
		}

		::System::Void set_ArtModelLoaded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_SET_ARTMODELLOADED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>* get_AllMeshRender()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_GET_ALLMESHRENDER_OFFSET))(this);
		}

		::RPG::Client::CharacterShaderPropertyTransition* Method_5_7E7E85596230BF07()
		{
			return ((::RPG::Client::CharacterShaderPropertyTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTEREFFECT_METHOD_5_7E7E85596230BF07_OFFSET))(this);
		}
	};
}
