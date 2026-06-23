#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UISnakeEndingAnimScript_BlackBorderMapping.h"
#include "unitysdk/MoleMole/UISnakeEndingAnimScript_Enum_3_6A9673056040BEEB.h"
#include "unitysdk/MoleMole/UISnakeEndingAnimScript_Struct_2_48E0785800803AF7.h"
#include "unitysdk/MoleMole/UISnakeEndingAnimScript_Struct_2_5396005F9A53A130_3.h"
#include "unitysdk/MoleMole/UISnakeEndingAnimScript_Struct_2_AA4EE15A8D4DB005_6.h"
#include "unitysdk/MoleMole/UISnakeEndingAnimScript_TeamModifier.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_C504EE57A5080FE1;
class UISnakeEndingAnimScriptParam;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E3D2980)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_CALFRAMESCORE_OFFSET UNITYSDK_OFFSET(0x1E3D2D40)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_GET_PLAYING_OFFSET UNITYSDK_OFFSET(0x1E3D8280)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_INITLOADER_OFFSET UNITYSDK_OFFSET(0x1E3D2930)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_182EEF545C2FF83D_1_OFFSET UNITYSDK_OFFSET(0x1E3D8620)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_182EEF545C2FF83D_OFFSET UNITYSDK_OFFSET(0x1E3D8800)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_1C4DCEC4A71E9244_OFFSET UNITYSDK_OFFSET(0x1E3D5790)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_209DFC4EDEC189F6_OFFSET UNITYSDK_OFFSET(0x1E3D5E60)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x1E3D47B0)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_5629BB85B25B861B_OFFSET UNITYSDK_OFFSET(0x1E3D8020)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_63287F15E13C182E_OFFSET UNITYSDK_OFFSET(0x1E3D58E0)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_6BAAF7650CBC8983_OFFSET UNITYSDK_OFFSET(0x1E3D5190)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x1E3D35C0)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_919B1950A07CB5AC_1_OFFSET UNITYSDK_OFFSET(0x1E3D86C0)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_919B1950A07CB5AC_OFFSET UNITYSDK_OFFSET(0x1E3D8760)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_9A433A8074D7736F_OFFSET UNITYSDK_OFFSET(0x1E3D4EE0)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_A73E7185E7C1427E_1_OFFSET UNITYSDK_OFFSET(0x1E3D7F90)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_A73E7185E7C1427E_OFFSET UNITYSDK_OFFSET(0x1E3D7F00)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_BAA2689ADA68E0DF_OFFSET UNITYSDK_OFFSET(0x1E3D75C0)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_D04E6CFC2E9B8E1A_OFFSET UNITYSDK_OFFSET(0x1E3D7500)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x1E3D5870)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_D93254806D9899AB_OFFSET UNITYSDK_OFFSET(0x1E3D83D0)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_F867677DC9D486C7_OFFSET UNITYSDK_OFFSET(0x1E3D6040)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E3D2A50)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_PLAY_OFFSET UNITYSDK_OFFSET(0x1E3D6D50)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_STOPANIM_OFFSET UNITYSDK_OFFSET(0x1E3D50E0)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_SWITCHUSERSNAMEUIBYPLATFORM_OFFSET UNITYSDK_OFFSET(0x1E3D80C0)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_UPDATEBLOCKBORDER_OFFSET UNITYSDK_OFFSET(0x1E3D48F0)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_UPDATESCALE_OFFSET UNITYSDK_OFFSET(0x1E3D3620)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1E3D3180)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E3D2E90)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D8290)

namespace MoleMole
{
	inline static constexpr unsigned int UISnakeEndingAnimScript_TypeDefinitionIndex = 90989;

	class UISnakeEndingAnimScript : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 Field_5_0 = 0x0; // 0x0
		// static const ::System::Int32 Field_5_1 = 0x1; // 0x0
		// static const ::System::Int32 Field_5_2 = 0x0; // 0x0
		// static const ::System::Int32 Field_5_3 = 0x1; // 0x0
		// static const ::System::Int32 Field_5_4 = 0x2; // 0x0
		// static const ::System::Int32 Field_5_5 = 0x3; // 0x0
		::Class_1_C504EE57A5080FE1* Field_5_6; // 0x18
		::MoleMole::UISnakeEndingAnimScript_TeamModifier team1; // 0x20
		::MoleMole::UISnakeEndingAnimScript_TeamModifier team2; // 0xD0
		::UISnakeEndingAnimScriptParam* param; // 0x180
		::System::Action* Field_5_10; // 0x188
		::MoleMole::UISnakeEndingAnimScript_Enum_3_6A9673056040BEEB Field_5_11; // 0x190
		::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* Field_5_12; // 0x198
		::System::Single Field_5_13; // 0x1A0
		::System::Single Field_5_14; // 0x1A4
		::System::Collections::Generic::List_1<::MoleMole::UISnakeEndingAnimScript_Struct_2_AA4EE15A8D4DB005_6>* Field_5_15; // 0x1A8
		::System::Boolean Field_5_16; // 0x1B0
		::System::Single Field_5_17; // 0x1B4
		::System::Single Field_5_18; // 0x1B8
		::System::Single Field_5_19; // 0x1BC
		::System::Int32 Field_5_20; // 0x1C0
		::System::Int32 Field_5_21; // 0x1C4
		::System::Single Field_5_22; // 0x1C8
		::System::Int32 winTeam; // 0x1CC
		::System::Collections::Generic::List_1<::System::Int32>* Field_5_24; // 0x1D0
		::System::Boolean Field_5_25; // 0x1D8
		::System::Collections::Generic::List_1<::MoleMole::UISnakeEndingAnimScript_Struct_2_48E0785800803AF7>* Field_5_26; // 0x1E0
		::Foundation::AssetRequestHandle Field_5_27; // 0x1E8
		::System::Collections::Generic::List_1<::MoleMole::UISnakeEndingAnimScript_BlackBorderMapping>* blackBorderMappingList; // 0x208

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT__CTOR_OFFSET))(this);
		}

		::MoleMole::UISnakeEndingAnimScript* InitLoader(::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* a1)
		{
			return ((::MoleMole::UISnakeEndingAnimScript*(*)(::PVOID, ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_INITLOADER_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_ONDESTROY_OFFSET))(this);
		}

		::System::Int32 CalFrameScore(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_CALFRAMESCORE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_UPDATESCALE_OFFSET))(this, a1);
		}

		::System::Void UpdateValue(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_UPDATEVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Play(::System::Collections::Generic::List_1<::MoleMole::UISnakeEndingAnimScript_Struct_2_5396005F9A53A130_3>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UISnakeEndingAnimScript_Struct_2_5396005F9A53A130_3>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_PLAY_OFFSET))(this, a1, a2);
		}

		::System::Void SwitchUsersNameUIByPlatform(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_SWITCHUSERSNAMEUIBYPLATFORM_OFFSET))(this, a1);
		}

		::System::Void StopAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_STOPANIM_OFFSET))(this);
		}

		::System::Boolean get_Playing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_GET_PLAYING_OFFSET))(this);
		}

		::System::Void UpdateBlockBorder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_UPDATEBLOCKBORDER_OFFSET))(this);
		}

		::UnityEngine::RectTransform* Method_5_A73E7185E7C1427E(::System::Int32 a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_A73E7185E7C1427E_OFFSET))(this, a1);
		}

		::System::Void Method_5_D93254806D9899AB(::MoleMole::UISnakeEndingAnimScript_TeamModifier a1, ::System::Single& a2, ::System::Single& a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISnakeEndingAnimScript_TeamModifier, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_D93254806D9899AB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_5587AE4B03E68C58()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_5587AE4B03E68C58_OFFSET))(this);
		}

		::System::Void Method_5_BAA2689ADA68E0DF(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_BAA2689ADA68E0DF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_F867677DC9D486C7(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_F867677DC9D486C7_OFFSET))(this, a1, a2);
		}

		::System::Single Method_5_1C4DCEC4A71E9244(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_1C4DCEC4A71E9244_OFFSET))(this, a1);
		}

		::System::Void Method_5_63287F15E13C182E(::MoleMole::UISnakeEndingAnimScript_Struct_2_AA4EE15A8D4DB005_6& a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISnakeEndingAnimScript_Struct_2_AA4EE15A8D4DB005_6&, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_63287F15E13C182E_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_8594010D6A57C9BB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_8594010D6A57C9BB_OFFSET))(this);
		}

		::System::Void Method_5_D04E6CFC2E9B8E1A(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_D04E6CFC2E9B8E1A_OFFSET))(this, a1, a2);
		}

		::System::Single Method_5_D64FD9A228A1C4E0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_D64FD9A228A1C4E0_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UILocalizationText* Method_5_919B1950A07CB5AC(::System::Int32 a1)
		{
			return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_919B1950A07CB5AC_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Extension::UILocalizationText* Method_5_919B1950A07CB5AC_1(::System::Int32 a1)
		{
			return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_919B1950A07CB5AC_1_OFFSET))(this, a1);
		}

		::UnityEngine::UI::Image* Method_5_182EEF545C2FF83D(::System::Int32 a1)
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_182EEF545C2FF83D_OFFSET))(this, a1);
		}

		::System::Void Method_5_9A433A8074D7736F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_9A433A8074D7736F_OFFSET))(this);
		}

		::System::Void Method_5_209DFC4EDEC189F6(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::MoleMole::UISnakeEndingAnimScript_Struct_2_AA4EE15A8D4DB005_6& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::MoleMole::UISnakeEndingAnimScript_Struct_2_AA4EE15A8D4DB005_6&))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_209DFC4EDEC189F6_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::UI::Image* Method_5_182EEF545C2FF83D_1(::System::Int32 a1)
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_182EEF545C2FF83D_1_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_5_5629BB85B25B861B(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_5629BB85B25B861B_OFFSET))(this, a1);
		}

		::System::Void Method_5_6BAAF7650CBC8983(::MoleMole::UISnakeEndingAnimScript_TeamModifier a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISnakeEndingAnimScript_TeamModifier, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_6BAAF7650CBC8983_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::RectTransform* Method_5_A73E7185E7C1427E_1(::System::Int32 a1)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_METHOD_5_A73E7185E7C1427E_1_OFFSET))(this, a1);
		}
	};
}
