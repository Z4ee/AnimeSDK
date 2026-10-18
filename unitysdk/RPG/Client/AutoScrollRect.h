#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/ScrollRect.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AnimatorButton; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_AUTOSCROLLRECT_METHOD_7_5B1233DEA9A20CC7_OFFSET UNITYSDK_OFFSET(0xC6C01B0)
#define RPG_CLIENT_AUTOSCROLLRECT_METHOD_7_93190E731E31C79A_OFFSET UNITYSDK_OFFSET(0xC6BFEA0)
#define RPG_CLIENT_AUTOSCROLLRECT_SETITEMSELECTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC6BFEF0)
#define RPG_CLIENT_AUTOSCROLLRECT_SNAPTO_OFFSET UNITYSDK_OFFSET(0xC6C0220)
#define RPG_CLIENT_AUTOSCROLLRECT__CTOR_OFFSET UNITYSDK_OFFSET(0xC6C07D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AutoScrollRect_TypeDefinitionIndex = 72504;

	class AutoScrollRect : public ::UnityEngine::UI::ScrollRect
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* ANCCPEPECNA; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTOSCROLLRECT__CTOR_OFFSET))(this);
		}

		::System::Void Method_7_93190E731E31C79A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTOSCROLLRECT_METHOD_7_93190E731E31C79A_OFFSET))(this);
		}

		::System::Void SetItemSelectCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTOSCROLLRECT_SETITEMSELECTCALLBACK_OFFSET))(this);
		}

		::System::Void Method_7_5B1233DEA9A20CC7(::RPG::Client::AnimatorButton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTOSCROLLRECT_METHOD_7_5B1233DEA9A20CC7_OFFSET))(this, a1);
		}

		::System::Void SnapTo(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUTOSCROLLRECT_SNAPTO_OFFSET))(this, a1);
		}
	};
}
