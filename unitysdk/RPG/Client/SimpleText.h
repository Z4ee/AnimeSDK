#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/TextGenerationSettings.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class LocalizationManager; }
namespace RPG::Client { class SimpleTextManagerMono; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define RPG_CLIENT_SIMPLETEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0xB1783E0)
#define RPG_CLIENT_SIMPLETEXT_FONTTEXTURECHANGED_OFFSET UNITYSDK_OFFSET(0xB178C10)
#define RPG_CLIENT_SIMPLETEXT_GET_DATACOUNT_OFFSET UNITYSDK_OFFSET(0xB1780D0)
#define RPG_CLIENT_SIMPLETEXT_GET_ENABLEGLOW_OFFSET UNITYSDK_OFFSET(0xB178180)
#define RPG_CLIENT_SIMPLETEXT_GET_ENABLEOUTLINE1_OFFSET UNITYSDK_OFFSET(0xB177ED0)
#define RPG_CLIENT_SIMPLETEXT_GET_ENABLEOUTLINE_OFFSET UNITYSDK_OFFSET(0xB177E20)
#define RPG_CLIENT_SIMPLETEXT_GET_ENABLESHADOW_OFFSET UNITYSDK_OFFSET(0xB177EE0)
#define RPG_CLIENT_SIMPLETEXT_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0xB177D10)
#define RPG_CLIENT_SIMPLETEXT_GET_FONT_OFFSET UNITYSDK_OFFSET(0xB1777F0)
#define RPG_CLIENT_SIMPLETEXT_GET_GLOWINTENSITY_OFFSET UNITYSDK_OFFSET(0xB1780E0)
#define RPG_CLIENT_SIMPLETEXT_GET_GLOWWIDTH_OFFSET UNITYSDK_OFFSET(0xB1781A0)
#define RPG_CLIENT_SIMPLETEXT_GET_KEYFONT_OFFSET UNITYSDK_OFFSET(0xB177770)
#define RPG_CLIENT_SIMPLETEXT_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0xB177C70)
#define RPG_CLIENT_SIMPLETEXT_GET_OUTLINE1WIDTH_OFFSET UNITYSDK_OFFSET(0xB177E30)
#define RPG_CLIENT_SIMPLETEXT_GET_OUTLINEWIDTH_OFFSET UNITYSDK_OFFSET(0xB177D80)
#define RPG_CLIENT_SIMPLETEXT_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB1782A0)
#define RPG_CLIENT_SIMPLETEXT_GET_RAWKEYFONT_OFFSET UNITYSDK_OFFSET(0xB1777D0)
#define RPG_CLIENT_SIMPLETEXT_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB1781F0)
#define RPG_CLIENT_SIMPLETEXT_GET_SHADOWOFFSET_OFFSET UNITYSDK_OFFSET(0xB177F40)
#define RPG_CLIENT_SIMPLETEXT_GET_TEXTMAPID_OFFSET UNITYSDK_OFFSET(0xB1776B0)
#define RPG_CLIENT_SIMPLETEXT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0xB1776C0)
#define RPG_CLIENT_SIMPLETEXT_GET_USESECONDFONT_OFFSET UNITYSDK_OFFSET(0xB179E80)
#define RPG_CLIENT_SIMPLETEXT_GET_UV0_OFFSET UNITYSDK_OFFSET(0xB1780A0)
#define RPG_CLIENT_SIMPLETEXT_GET_UV1_OFFSET UNITYSDK_OFFSET(0xB1780B0)
#define RPG_CLIENT_SIMPLETEXT_GET_UVEXTENDS_OFFSET UNITYSDK_OFFSET(0xB1780C0)
#define RPG_CLIENT_SIMPLETEXT_GET_VERTCOLORS_OFFSET UNITYSDK_OFFSET(0xB178090)
#define RPG_CLIENT_SIMPLETEXT_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0xB178080)
#define RPG_CLIENT_SIMPLETEXT_METHOD_5_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0xB178DC0)
#define RPG_CLIENT_SIMPLETEXT_METHOD_5_9EB0BC18871AB79D_OFFSET UNITYSDK_OFFSET(0xB17B410)
#define RPG_CLIENT_SIMPLETEXT_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB178B80)
#define RPG_CLIENT_SIMPLETEXT_METHOD_5_ABE8B3657B1F8305_OFFSET UNITYSDK_OFFSET(0xB17A040)
#define RPG_CLIENT_SIMPLETEXT_METHOD_5_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xB1785E0)
#define RPG_CLIENT_SIMPLETEXT_METHOD_5_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0xB17B300)
#define RPG_CLIENT_SIMPLETEXT_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB178800)
#define RPG_CLIENT_SIMPLETEXT_METHOD_5_D9AAE950C6F28BA6_OFFSET UNITYSDK_OFFSET(0xB179F50)
#define RPG_CLIENT_SIMPLETEXT_METHOD_5_FE9CC166D09C957F_OFFSET UNITYSDK_OFFSET(0xB1799E0)
#define RPG_CLIENT_SIMPLETEXT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB178930)
#define RPG_CLIENT_SIMPLETEXT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB178790)
#define RPG_CLIENT_SIMPLETEXT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB178740)
#define RPG_CLIENT_SIMPLETEXT_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0xB178850)
#define RPG_CLIENT_SIMPLETEXT_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xB1788B0)
#define RPG_CLIENT_SIMPLETEXT_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET UNITYSDK_OFFSET(0xB178AA0)
#define RPG_CLIENT_SIMPLETEXT_ONUITEXTLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0xB178A40)
#define RPG_CLIENT_SIMPLETEXT_ONUITEXTSWITCH_OFFSET UNITYSDK_OFFSET(0xB178AE0)
#define RPG_CLIENT_SIMPLETEXT_ONUIWORLDFONTCHANGE_OFFSET UNITYSDK_OFFSET(0xB178B30)
#define RPG_CLIENT_SIMPLETEXT_SETTEXTID_1_OFFSET UNITYSDK_OFFSET(0xB17B390)
#define RPG_CLIENT_SIMPLETEXT_SETTEXTID_OFFSET UNITYSDK_OFFSET(0xB17B280)
#define RPG_CLIENT_SIMPLETEXT_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0xB177D20)
#define RPG_CLIENT_SIMPLETEXT_SET_FONT_OFFSET UNITYSDK_OFFSET(0xB177800)
#define RPG_CLIENT_SIMPLETEXT_SET_GLOWINTENSITY_OFFSET UNITYSDK_OFFSET(0xB1780F0)
#define RPG_CLIENT_SIMPLETEXT_SET_MANAGER_OFFSET UNITYSDK_OFFSET(0xB1783D0)
#define RPG_CLIENT_SIMPLETEXT_SET_OUTLINE1WIDTH_OFFSET UNITYSDK_OFFSET(0xB177E40)
#define RPG_CLIENT_SIMPLETEXT_SET_OUTLINEWIDTH_OFFSET UNITYSDK_OFFSET(0xB177D90)
#define RPG_CLIENT_SIMPLETEXT_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB1782B0)
#define RPG_CLIENT_SIMPLETEXT_SET_RAWKEYFONT_OFFSET UNITYSDK_OFFSET(0xB1777E0)
#define RPG_CLIENT_SIMPLETEXT_SET_SHADOWOFFSET_OFFSET UNITYSDK_OFFSET(0xB177F50)
#define RPG_CLIENT_SIMPLETEXT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xB1776D0)
#define RPG_CLIENT_SIMPLETEXT_START_OFFSET UNITYSDK_OFFSET(0xB178550)
#define RPG_CLIENT_SIMPLETEXT_UPDATEMESHDATA_OFFSET UNITYSDK_OFFSET(0xB179930)
#define RPG_CLIENT_SIMPLETEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xB17B440)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleText_TypeDefinitionIndex = 66934;

	class SimpleText : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* TextmapID; // 0x18
		::System::String* m_Text; // 0x20
		::UnityEngine::Font* m_KeyFont; // 0x28
		::UnityEngine::Font* m_Font; // 0x30
		::System::Int32 m_FontSize; // 0x38
		::System::Int32 Field_5_5; // 0x3C
		::System::Boolean richText; // 0x40
		::System::Single textureScale; // 0x44
		::UnityEngine::Color color; // 0x48
		::System::Single m_OutlineWidth; // 0x58
		::UnityEngine::Color outlineColor; // 0x5C
		::System::Single m_Outline1Width; // 0x6C
		::UnityEngine::Color outline1Color; // 0x70
		::UnityEngine::Vector2 m_ShadowOffset; // 0x80
		::UnityEngine::Color shadowColor; // 0x88
		::System::Boolean enableFade; // 0x98
		::UnityEngine::Color btmColor; // 0x9C
		::System::Single m_GlowIntensity; // 0xAC
		::UnityEngine::Color glowColor; // 0xB0
		::System::Single textureLerp; // 0xC0
		::System::Boolean useSDF; // 0xC4
		::UnityEngine::RectTransform* Field_5_21; // 0xC8
		::System::Int32 Field_5_22; // 0xD0
		::System::Int32 orderInHierarchy; // 0xD4
		::System::Int32 sortingOrder; // 0xD8
		::RPG::Client::SimpleTextManagerMono* Field_5_25; // 0xE0
		::RPG::Client::TextID Field_5_26; // 0xE8
		::Il2CppArray<::System::Object*>* Field_5_27; // 0xF8
		::UnityEngine::TextGenerationSettings Field_5_28; // 0x100
		::System::Single alpha; // 0x168
		::System::Boolean Field_5_30; // 0x16C
		::System::Boolean Field_5_31; // 0x16D
		::UnityEngine::Canvas* Field_5_32; // 0x170
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_33; // 0x178
		::Il2CppArray<::UnityEngine::Color32>* Field_5_34; // 0x180
		::Il2CppArray<::UnityEngine::Vector4>* Field_5_35; // 0x188
		::Il2CppArray<::UnityEngine::Vector4>* Field_5_36; // 0x190
		::Il2CppArray<::UnityEngine::Vector4>* Field_5_37; // 0x198
		::System::Int32 Field_5_38; // 0x1A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT__CTOR_OFFSET))(this);
		}

		::System::String* get_TextMapId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_TEXTMAPID_OFFSET))(this);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_SET_TEXT_OFFSET))(this, a1);
		}

		::UnityEngine::Font* get_keyFont()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_KEYFONT_OFFSET))(this);
		}

		::UnityEngine::Font* get_rawKeyFont()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_RAWKEYFONT_OFFSET))(this);
		}

		::System::Void set_rawKeyFont(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_SET_RAWKEYFONT_OFFSET))(this, a1);
		}

		::UnityEngine::Font* get_font()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_FONT_OFFSET))(this);
		}

		::System::Void set_font(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_SET_FONT_OFFSET))(this, a1);
		}

		::System::Int32 get_fontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_FONTSIZE_OFFSET))(this);
		}

		::System::Void set_fontSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_SET_FONTSIZE_OFFSET))(this, a1);
		}

		::System::Single get_outlineWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_OUTLINEWIDTH_OFFSET))(this);
		}

		::System::Void set_outlineWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_SET_OUTLINEWIDTH_OFFSET))(this, a1);
		}

		::System::Single get_outline1Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_OUTLINE1WIDTH_OFFSET))(this);
		}

		::System::Void set_outline1Width(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_SET_OUTLINE1WIDTH_OFFSET))(this, a1);
		}

		::System::Boolean get_enableShadow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_ENABLESHADOW_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_shadowOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_SHADOWOFFSET_OFFSET))(this);
		}

		::System::Void set_shadowOffset(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_SET_SHADOWOFFSET_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_vertices()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_VERTICES_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Color32>* get_vertColors()
		{
			return ((::Il2CppArray<::UnityEngine::Color32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_VERTCOLORS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector4>* get_uv0()
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_UV0_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector4>* get_uv1()
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_UV1_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector4>* get_uvExtends()
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_UVEXTENDS_OFFSET))(this);
		}

		::System::Int32 get_dataCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_DATACOUNT_OFFSET))(this);
		}

		::System::Boolean get_enableOutline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_ENABLEOUTLINE_OFFSET))(this);
		}

		::System::Boolean get_enableOutline1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_ENABLEOUTLINE1_OFFSET))(this);
		}

		::System::Single get_glowIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_GLOWINTENSITY_OFFSET))(this);
		}

		::System::Void set_glowIntensity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_SET_GLOWINTENSITY_OFFSET))(this, a1);
		}

		::System::Single get_glowWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_GLOWWIDTH_OFFSET))(this);
		}

		::System::Boolean get_enableGlow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_ENABLEGLOW_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Int32 get_priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_priority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_SET_PRIORITY_OFFSET))(this, a1);
		}

		::RPG::Client::SimpleTextManagerMono* get_manager()
		{
			return ((::RPG::Client::SimpleTextManagerMono*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_MANAGER_OFFSET))(this);
		}

		::System::Void set_manager(::RPG::Client::SimpleTextManagerMono* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleTextManagerMono*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_SET_MANAGER_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUITextLanguageChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_ONUITEXTLANGUAGECHANGE_OFFSET))(this);
		}

		::System::Void OnUITextChangeFontFromCondenseToComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_ONUITEXTCHANGEFONTFROMCONDENSETOCOMPLETE_OFFSET))(this);
		}

		::System::Void OnUITextSwitch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_ONUITEXTSWITCH_OFFSET))(this, a1);
		}

		::System::Void OnUIWorldFontChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_ONUIWORLDFONTCHANGE_OFFSET))(this, a1);
		}

		::System::Void Method_5_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_METHOD_5_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void FontTextureChanged(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_FONTTEXTURECHANGED_OFFSET))(this, a1);
		}

		::System::Void UpdateMeshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_UPDATEMESHDATA_OFFSET))(this);
		}

		::System::Void Method_5_146E6E50FAF07D8F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_METHOD_5_146E6E50FAF07D8F_OFFSET))(this);
		}

		::System::Void Method_5_D9AAE950C6F28BA6(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_METHOD_5_D9AAE950C6F28BA6_OFFSET))(this, a1);
		}

		::System::Void Method_5_ABE8B3657B1F8305(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_METHOD_5_ABE8B3657B1F8305_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::UnityEngine::TextGenerationSettings Method_5_FE9CC166D09C957F()
		{
			return ((::UnityEngine::TextGenerationSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_METHOD_5_FE9CC166D09C957F_OFFSET))(this);
		}

		::System::Void SetTextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_SETTEXTID_OFFSET))(this, a1);
		}

		::System::Void SetTextID_1(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_SETTEXTID_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_METHOD_5_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Void Method_5_BB2928BEC244DEB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_METHOD_5_BB2928BEC244DEB7_OFFSET))(this);
		}

		::RPG::Client::LocalizationManager* Method_5_9EB0BC18871AB79D()
		{
			return ((::RPG::Client::LocalizationManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_METHOD_5_9EB0BC18871AB79D_OFFSET))(this);
		}

		::System::Boolean get_UseSecondFont()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXT_GET_USESECONDFONT_OFFSET))(this);
		}
	};
}
