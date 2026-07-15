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

#define RPG_CLIENT_UISETTMPATTRIBUTE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1830AED0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_GETCENTERPOS_OFFSET UNITYSDK_OFFSET(0x1830D450)
#define RPG_CLIENT_UISETTMPATTRIBUTE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1830B6D0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x1830C280)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x1830BE50)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_2D1DFA4BDF5C46E6_OFFSET UNITYSDK_OFFSET(0x1830CF60)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0x1830D0C0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x1830B8D0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1830D5B0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1830BB10)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x1830BC30)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1830B400)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_F8E46181794760A4_OFFSET UNITYSDK_OFFSET(0x1830C7F0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_FE72BF2F281C4FA8_OFFSET UNITYSDK_OFFSET(0x1830D2D0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1830B010)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1830B580)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1830B210)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1830BB90)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1830D320)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0x1830D260)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONUITEXTSWITCH_OFFSET UNITYSDK_OFFSET(0x1830D360)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONUIWORLDFONTCHANGE_OFFSET UNITYSDK_OFFSET(0x1830D3B0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_ONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1830BA70)
#define RPG_CLIENT_UISETTMPATTRIBUTE_RESETFONTSIZE_OFFSET UNITYSDK_OFFSET(0x1830C130)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETCONFIGSHOW_OFFSET UNITYSDK_OFFSET(0x1830C480)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETCUSTOMGETSDFASSETPATHDELEGATE_OFFSET UNITYSDK_OFFSET(0x1830D400)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETFACETOCAMERA_OFFSET UNITYSDK_OFFSET(0x1830C430)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETFONTSIZE_OFFSET UNITYSDK_OFFSET(0x1830C0C0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEALIGNTYPE_OFFSET UNITYSDK_OFFSET(0x1830C540)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEFONTASSET_OFFSET UNITYSDK_OFFSET(0x1830C690)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDEISKAOMOJI_OFFSET UNITYSDK_OFFSET(0x1830C770)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETOVERRIDESCALE_OFFSET UNITYSDK_OFFSET(0x1830C1D0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETTEXTID_OFFSET UNITYSDK_OFFSET(0x1830BDF0)
#define RPG_CLIENT_UISETTMPATTRIBUTE_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1830C050)
#define RPG_CLIENT_UISETTMPATTRIBUTE_START_OFFSET UNITYSDK_OFFSET(0x1830B690)
#define RPG_CLIENT_UISETTMPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1830D700)
#define RPG_CLIENT_UISETTMPATTRIBUTE__SHUFFLE_OFFSET UNITYSDK_OFFSET(0x1830D160)

namespace RPG::Client
{
	inline static constexpr unsigned int UISetTMPAttribute_TypeDefinitionIndex = 67553;

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
		::UnityEngine::RectTransform* Field_5_7; // 0x38
		::TMPro::TMP_Text* Field_5_8; // 0x40
		::UnityEngine::Vector3 Field_5_9; // 0x48
		::System::String* Field_5_10; // 0x58
		::RPG::Client::TextID Field_5_11; // 0x60
		::System::String* Field_5_12; // 0x70
		::System::Boolean Field_5_13; // 0x78
		::System::Single Field_5_14; // 0x7C
		::System::Single Field_5_15; // 0x80
		::System::Single Field_5_16; // 0x84
		::System::Boolean Field_5_17; // 0x88
		::System::Boolean Field_5_18; // 0x89
		::System::Boolean Field_5_19; // 0x8A
		::RPG::Client::UITMPAnimateAttribute* Field_5_20; // 0x90
		::TMPro::TMP_FontAsset* Field_5_21; // 0x98
		::RPG::Client::UISetTMPAttribute_Class_3_50D343C44D28BEFB_8* Field_5_22; // 0xA0
		::System::Boolean Field_5_23; // 0xA8
		::System::Single Field_5_24; // 0xAC
		::UnityEngine::RectTransform* Field_5_25; // 0xB0
		::System::Single Field_5_26; // 0xB8
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_27; // 0xC0
		::System::Boolean Field_5_28; // 0xC8
		::UnityEngine::Vector3 Field_5_29; // 0xCC
		::UnityEngine::Vector2 Field_5_30; // 0xD8

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

		::System::Void Method_5_F8E46181794760A4(::UnityEngine::Mesh* a1, ::TMPro::TMP_TextInfo* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::TMPro::TMP_TextInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_F8E46181794760A4_OFFSET))(this, a1, a2, a3);
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

		::System::Void Method_5_E693A0026D178D8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISETTMPATTRIBUTE_METHOD_5_E693A0026D178D8E_OFFSET))(this);
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
