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

#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_CREATE_OFFSET UNITYSDK_OFFSET(0xA1638C0)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA1646B0)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA163440)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xA163680)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_SETFOCUSSTATE_OFFSET UNITYSDK_OFFSET(0xA162B80)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA163700)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER__ASYNCLOADSPRITETO_OFFSET UNITYSDK_OFFSET(0xA164570)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER__BIND_OFFSET UNITYSDK_OFFSET(0xA164350)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA164720)
#define RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0xA164340)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatDiceRarityIconDisplayer_TypeDefinitionIndex = 58550;

	class DiceCombatDiceRarityIconDisplayer : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__FOCUS_MAT_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatDiceRarityIconDisplayer_TypeDefinitionIndex)->GetStaticField(0x65B00);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* _LoadedResources; // 0x10
		::RPG::Client::LocalizedText* _TxtNum; // 0x18
		::UnityEngine::Transform* _Root; // 0x20
		::UnityEngine::Material* _FocusMat; // 0x28
		::UnityEngine::UI::Image* _ImgBg; // 0x30
		::UnityEngine::UI::SmoothMask* _Mask; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER__CCTOR_OFFSET))();
		}

		static ::RPG::Client::DiceCombatDiceRarityIconDisplayer* Create(::UnityEngine::Transform* root)
		{
			return ((::RPG::Client::DiceCombatDiceRarityIconDisplayer*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_CREATE_OFFSET))(root);
		}

		::System::Void _Bind(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER__BIND_OFFSET))(this, root);
		}

		::System::Void SetupView(::System::UInt32 num, ::System::UInt32 diceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_SETUPVIEW_OFFSET))(this, num, diceID);
		}

		::System::Void SetFocusState(::System::Boolean isFocused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_SETFOCUSSTATE_OFFSET))(this, isFocused);
		}

		::System::Void SetActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_SETACTIVE_OFFSET))(this, active);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_ISACTIVE_OFFSET))(this);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER_ONDISPOSE_OFFSET))(this);
		}

		::System::Void _AsyncLoadSpriteTo(::UnityEngine::UI::Image* image, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICERARITYICONDISPLAYER__ASYNCLOADSPRITETO_OFFSET))(this, image, path);
		}
	};
}
