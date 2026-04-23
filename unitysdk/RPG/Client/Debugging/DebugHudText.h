#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT_GET_OFFSETX_OFFSET UNITYSDK_OFFSET(0xA0F7360)
#define RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT_GET_OFFSETY_OFFSET UNITYSDK_OFFSET(0xA0F7380)
#define RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT_GET_TEXTCOLOR_OFFSET UNITYSDK_OFFSET(0xA0F73A0)
#define RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xA0F73D0)
#define RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT_SET_OFFSETX_OFFSET UNITYSDK_OFFSET(0xA0F7370)
#define RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT_SET_OFFSETY_OFFSET UNITYSDK_OFFSET(0xA0F7390)
#define RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT_SET_TEXTCOLOR_OFFSET UNITYSDK_OFFSET(0xA0F73B0)
#define RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT_SHOWTEXT_OFFSET UNITYSDK_OFFSET(0xA0F73C0)
#define RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F7420)

namespace RPG::Client::Debugging
{
	inline static constexpr unsigned int DebugHudText_TypeDefinitionIndex = 72497;

	class DebugHudText : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 _OffsetX_k__BackingField; // 0x18
		::System::Int32 _OffsetY_k__BackingField; // 0x1C
		::UnityEngine::Color _TextColor_k__BackingField; // 0x20
		::System::String* Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_OffsetX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT_GET_OFFSETX_OFFSET))(this);
		}

		::System::Void set_OffsetX(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT_SET_OFFSETX_OFFSET))(this, value);
		}

		::System::Int32 get_OffsetY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT_GET_OFFSETY_OFFSET))(this);
		}

		::System::Void set_OffsetY(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT_SET_OFFSETY_OFFSET))(this, value);
		}

		::UnityEngine::Color get_TextColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT_GET_TEXTCOLOR_OFFSET))(this);
		}

		::System::Void set_TextColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT_SET_TEXTCOLOR_OFFSET))(this, value);
		}

		::System::Void ShowText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT_SHOWTEXT_OFFSET))(this, a1);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_DEBUGHUDTEXT_ONDRAWGIZMOS_OFFSET))(this);
		}
	};
}
