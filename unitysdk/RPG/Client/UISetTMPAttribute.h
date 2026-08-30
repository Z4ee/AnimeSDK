#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SDFTextAlignType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class UISetTMPAttribute_Class_3_50D343C44D28BEFB_8; }
namespace RPG::Client { class UITMPAnimateAttribute; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_Text; }
namespace TMPro { class TMP_TextInfo; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UISETTMPATTRIBUTE_AWAKE_OFFSET UNITYSDK_OFFSET(0xE3B57D0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_GETCENTERPOS_OFFSET UNITYSDK_OFFSET(0xE3B7E60)
#define RPG_CLIENT_UISETTMPATTRIBUTE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE3B6090)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0xE3B6C70)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0xE3B6840)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_2D1DFA4BDF5C46E6_OFFSET UNITYSDK_OFFSET(0xE3B7970)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0xE3B7AD0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xE3B6290)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xE3B7FC0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0xE3B65F0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE3B64D0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_A44394FA2432C12D_OFFSET UNITYSDK_OFFSET(0xE3B71E0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xE3B5D90)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_FE72BF2F281C4FA8_OFFSET UNITYSDK_OFFSET(0xE3B7CE0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE3B5940)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE3B5F10)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE3B5B70)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONINVISIBLE_OFFSET UNITYSDK_OFFSET(0xE3B6550)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET UNITYSDK_OFFSET(0xE3B7D30)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0xE3B7C70)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTSWITCH_OFFSET UNITYSDK_OFFSET(0xE3B7D70)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONUIWORLDFONTCHANGE_OFFSET UNITYSDK_OFFSET(0xE3B7DC0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONVISIBLE_OFFSET UNITYSDK_OFFSET(0xE3B6430)
#define RPG_CLIENT_UISETTMPATTRIBUTE_RESETFONTSIZE_OFFSET UNITYSDK_OFFSET(0xE3B6B20)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETCONFIGSHOW_OFFSET UNITYSDK_OFFSET(0xE3B6E70)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETCUSTOMGETSDFASSETPATHDELEGATE_OFFSET UNITYSDK_OFFSET(0xE3B7E10)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETFACETOCAMERA_OFFSET UNITYSDK_OFFSET(0xE3B6E20)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETFONTSIZE_OFFSET UNITYSDK_OFFSET(0xE3B6AB0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEALIGNTYPE_OFFSET UNITYSDK_OFFSET(0xE3B6F30)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEFONTASSET_OFFSET UNITYSDK_OFFSET(0xE3B7080)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEISKAOMOJI_OFFSET UNITYSDK_OFFSET(0xE3B7160)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDESCALE_OFFSET UNITYSDK_OFFSET(0xE3B6BC0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETTEXTID_OFFSET UNITYSDK_OFFSET(0xE3B67E0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETTEXT_OFFSET UNITYSDK_OFFSET(0xE3B6A40)
#define RPG_CLIENT_UISETTMPATTRIBUTE_START_OFFSET UNITYSDK_OFFSET(0xE3B6050)
#define RPG_CLIENT_UISETTMPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xE3B8110)
#define RPG_CLIENT_UISETTMPATTRIBUTE__SHUFFLE_OFFSET UNITYSDK_OFFSET(0xE3B7B70)

namespace RPG::Client
{
	inline static constexpr unsigned int UISetTMPAttribute_TypeDefinitionIndex = 70676;

	class UISetTMPAttribute : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean LoadSDFFont; // 0x18
		::System::Boolean EditorFrequencyTick; // 0x19
		::UnityEngine::GameObject* backgroundGO; // 0x20
		::System::Single backPaddingLeft; // 0x28
		::System::Single backPaddingRight; // 0x2C
		::System::Single backPaddingUp; // 0x30
		::System::Single backPaddingDown; // 0x34
		::UnityEngine::RectTransform* DPMOOEDBDGO; // 0x38
		::TMPro::TMP_Text* DBKOEGKFKNL; // 0x40
		::UnityEngine::Vector3 FFAKHPCHLDH; // 0x48
		::System::String* JCCPKMOBEBN; // 0x58
		::RPG::Client::TextID DIDPADKMCAL; // 0x60
		::System::String* GEPFFDDHPAI; // 0x70
		::System::Boolean NKAOIIALJMN; // 0x78
		::System::Single OFFNANIBEBE; // 0x7C
		::System::Single BDMPGHLEALD; // 0x80
		::System::Single BDNBCBPDHHM; // 0x84
		::System::Boolean FACPGEAFKKL; // 0x88
		::System::Boolean CHIAKGCJFFG; // 0x89
		::System::Boolean AKBPNMEFGAO; // 0x8A
		::RPG::Client::UITMPAnimateAttribute* CPNDHBLPEAP; // 0x90
		::TMPro::TMP_FontAsset* EBBDNCBLAGE; // 0x98
		::RPG::Client::UISetTMPAttribute_Class_3_50D343C44D28BEFB_8* IOLKPFAPJEJ; // 0xA0
		::System::Boolean DIOBFDJABME; // 0xA8
		::System::Single FHDCNDFDDAC; // 0xAC
		::UnityEngine::RectTransform* IGLNACMFMHF; // 0xB0
		::System::Single KLDJCFCEKHO; // 0xB8
		::System::Collections::Generic::List_1<::System::Int32>* IOFLDNIKCDG; // 0xC0
		::System::Boolean AMAHEHFOKJF; // 0xC8
		::UnityEngine::Vector3 MBLPNDBJACF; // 0xCC
		::UnityEngine::Vector2 FLMICIJOBKG; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_79830F666EE579C0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_79830F666EE579C0_OFFSET))(this);
		}

		::System::Void OnVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONVISIBLE_OFFSET))(this);
		}

		::System::Void OnInVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONINVISIBLE_OFFSET))(this);
		}

		::System::Void Method_5_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Void SetTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETTEXTID_OFFSET))(this, a1);
		}

		::System::Void SetText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETTEXT_OFFSET))(this, a1);
		}

		::System::Void SetFontSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETFONTSIZE_OFFSET))(this, a1);
		}

		::System::Void ResetFontSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_RESETFONTSIZE_OFFSET))(this);
		}

		::System::Void SetOverrideScale(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDESCALE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFaceToCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETFACETOCAMERA_OFFSET))(this, a1);
		}

		::System::Void SetConfigShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETCONFIGSHOW_OFFSET))(this, a1);
		}

		::System::Void SetOverrideAlignType(::RPG::GameCore::SDFTextAlignType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SDFTextAlignType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEALIGNTYPE_OFFSET))(this, a1);
		}

		::System::Void SetOverrideFontAsset(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEFONTASSET_OFFSET))(this, a1);
		}

		::System::Void SetOverrideIsKaomoji(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEISKAOMOJI_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_A44394FA2432C12D(::UnityEngine::Mesh* a1, ::TMPro::TMP_TextInfo* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::TMPro::TMP_TextInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_A44394FA2432C12D_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_2D1DFA4BDF5C46E6(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_2D1DFA4BDF5C46E6_OFFSET))(this, a1);
		}

		::System::Void OnUITextLanguageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTLANGUAGECHANGE_OFFSET))(this);
		}

		::System::Void OnUITextChangeFontFromCondenseToComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET))(this);
		}

		::System::Void OnUITextSwitch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTSWITCH_OFFSET))(this, a1);
		}

		::System::Void OnUIWorldFontChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_ONUIWORLDFONTCHANGE_OFFSET))(this, a1);
		}

		::System::Void SetCustomGetSDFAssetPathDelegate(::RPG::Client::UISetTMPAttribute_Class_3_50D343C44D28BEFB_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UISetTMPAttribute_Class_3_50D343C44D28BEFB_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_SETCUSTOMGETSDFASSETPATHDELEGATE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCenterPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_GETCENTERPOS_OFFSET))(this);
		}

		::System::Void Method_5_2C825E716CE9F2F9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_2C825E716CE9F2F9_OFFSET))(this);
		}

		::System::Void Method_5_FE72BF2F281C4FA8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_FE72BF2F281C4FA8_OFFSET))(this);
		}

		::System::Void Method_5_08DCF72FBE01FF99()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_08DCF72FBE01FF99_OFFSET))(this);
		}

		static ::System::Void _Shuffle(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE__SHUFFLE_OFFSET))(a1);
		}

		::System::Single Method_5_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_43E290A0B26B39F6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_8F7825DAFFB9B517()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_8F7825DAFFB9B517_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_9681042564541CD6_OFFSET))(this);
		}
	};
}
