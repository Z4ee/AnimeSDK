#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_CREATE_OFFSET UNITYSDK_OFFSET(0xB7BDAC0)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xB7E2E10)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB7E1CE0)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xB7E1F10)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_SETFOCUSSTATE_OFFSET UNITYSDK_OFFSET(0xB7E13C0)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB7E1F90)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER__ASYNCLOADSPRITETO_OFFSET UNITYSDK_OFFSET(0xB7E2CD0)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER__BIND_OFFSET UNITYSDK_OFFSET(0xB7E2AC0)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7E2E80)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xB7E2AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatDiceRarityIconDisplayer_TypeDefinitionIndex = 59480;

	class DiceCombatDiceRarityIconDisplayer : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__FOCUS_MAT_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatDiceRarityIconDisplayer_TypeDefinitionIndex)->GetStaticField(0x6A60);
		}
		::UnityEngine::UI::SmoothMask* _Mask; // 0x10
		::RPG::Client::LocalizedText* _TxtNum; // 0x18
		::UnityEngine::Transform* _Root; // 0x20
		::UnityEngine::UI::Image* _ImgBg; // 0x28
		::UnityEngine::Material* _FocusMat; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* _LoadedResources; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER__CCTOR_OFFSET))();
		}

		static ::RPG::Client::DiceCombatDiceRarityIconDisplayer* Create(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::DiceCombatDiceRarityIconDisplayer*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_CREATE_OFFSET))(a1);
		}

		::System::Void _Bind(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER__BIND_OFFSET))(this, a1);
		}

		::System::Void SetupView(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_SETUPVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void SetFocusState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_SETFOCUSSTATE_OFFSET))(this, a1);
		}

		::System::Void SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_SETACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_ISACTIVE_OFFSET))(this);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_ONDISPOSE_OFFSET))(this);
		}

		::System::Void _AsyncLoadSpriteTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER__ASYNCLOADSPRITETO_OFFSET))(this, a1, a2);
		}
	};
}
