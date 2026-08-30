#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_SCREENCLICKEFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0xE06B860)
#define RPG_CLIENT_SCREENCLICKEFFECT_GET_SHOULDHIDE_OFFSET UNITYSDK_OFFSET(0xE06D0D0)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_09ACA71C17EF0726_1_OFFSET UNITYSDK_OFFSET(0xE06CC40)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_09ACA71C17EF0726_OFFSET UNITYSDK_OFFSET(0xE06C820)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_235779E3A1B24A75_OFFSET UNITYSDK_OFFSET(0xE06CC90)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_494458CA7765DC42_OFFSET UNITYSDK_OFFSET(0xE06CFD0)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_4B299A7B44D66F76_OFFSET UNITYSDK_OFFSET(0xE06CE40)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_4EA6B1791DACA9CC_1_OFFSET UNITYSDK_OFFSET(0xE06BA40)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xE06BC50)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_50AE2676D9583449_OFFSET UNITYSDK_OFFSET(0xE06CD20)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_AAD21DE195D05736_1_OFFSET UNITYSDK_OFFSET(0xE06C440)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0xE06BEB0)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_B7BFE5D35A542E8B_OFFSET UNITYSDK_OFFSET(0xE06CF50)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_DF028CAA51A328F2_OFFSET UNITYSDK_OFFSET(0xE06D050)
#define RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_FC4FFB09CD8F8D39_OFFSET UNITYSDK_OFFSET(0xE06C870)
#define RPG_CLIENT_SCREENCLICKEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE06C290)
#define RPG_CLIENT_SCREENCLICKEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE06BE60)
#define RPG_CLIENT_SCREENCLICKEFFECT_SET_SHOULDHIDE_OFFSET UNITYSDK_OFFSET(0xE06D0E0)
#define RPG_CLIENT_SCREENCLICKEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0xE06D100)
#define RPG_CLIENT_SCREENCLICKEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xE06D0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ScreenClickEffect_TypeDefinitionIndex = 68977;

	class ScreenClickEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_HKJBMPODDAJ()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenClickEffect_TypeDefinitionIndex)->GetStaticField(0x21800);
		}
		::System::Boolean _ShouldHide_k__BackingField; // 0x18
		::UnityEngine::GameObject* _EffectMobile; // 0x20
		::UnityEngine::GameObject* _EffectPC; // 0x28
		::UnityEngine::Canvas* KNALLMEKPDH; // 0x30
		::UnityEngine::RectTransform* IGLNACMFMHF; // 0x38
		::UnityEngine::RectTransform* IKJAKAOAFGN; // 0x40
		::UnityEngine::RectTransform* EBFBNIDMFOM; // 0x48
		::UnityEngine::Animation* EEINMICGIND; // 0x50
		::UnityEngine::Animation* MCELCFGDKHI; // 0x58
		::System::Boolean BAPAKLMLDCB; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Void Method_5_4EA6B1791DACA9CC_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_4EA6B1791DACA9CC_1_OFFSET))(this);
		}

		::System::Void Method_5_AAD21DE195D05736()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_AAD21DE195D05736_OFFSET))(this);
		}

		::System::Void Method_5_AAD21DE195D05736_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_AAD21DE195D05736_1_OFFSET))(this);
		}

		::System::Void Method_5_09ACA71C17EF0726(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_09ACA71C17EF0726_OFFSET))(this, a1);
		}

		::System::Void Method_5_09ACA71C17EF0726_1(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_09ACA71C17EF0726_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_235779E3A1B24A75(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_235779E3A1B24A75_OFFSET))(this, a1);
		}

		::System::Void Method_5_50AE2676D9583449(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_50AE2676D9583449_OFFSET))(this, a1);
		}

		::System::Void Method_5_FC4FFB09CD8F8D39(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_FC4FFB09CD8F8D39_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_4B299A7B44D66F76(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_4B299A7B44D66F76_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_GET_SHOULDHIDE_OFFSET))(this);
		}

		::System::Void set_ShouldHide(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_SET_SHOULDHIDE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_5_B7BFE5D35A542E8B()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_B7BFE5D35A542E8B_OFFSET))(this);
		}

		::UnityEngine::RectTransform* Method_5_494458CA7765DC42()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_494458CA7765DC42_OFFSET))(this);
		}

		::UnityEngine::Animation* Method_5_DF028CAA51A328F2()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_METHOD_5_DF028CAA51A328F2_OFFSET))(this);
		}
	};
}
