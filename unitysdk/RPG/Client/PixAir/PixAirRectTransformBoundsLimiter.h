#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/PixAirJumpTextSize.h"
#include "unitysdk/RPG/Client/PixAir/PixAirJumpTextType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_PIXAIR_PIXAIRRECTTRANSFORMBOUNDSLIMITER_ACQUIREJUMPTEXT_OFFSET UNITYSDK_OFFSET(0x1A0DE680)
#define RPG_CLIENT_PIXAIR_PIXAIRRECTTRANSFORMBOUNDSLIMITER__ACQUIREJUMPTEXT_OFFSET UNITYSDK_OFFSET(0x1A0DE880)
#define RPG_CLIENT_PIXAIR_PIXAIRRECTTRANSFORMBOUNDSLIMITER__ACQUIRELARGEJUMPTEXT_OFFSET UNITYSDK_OFFSET(0x1A0DECC0)
#define RPG_CLIENT_PIXAIR_PIXAIRRECTTRANSFORMBOUNDSLIMITER__ACQUIRESMALLJUMPTEXT_OFFSET UNITYSDK_OFFSET(0x1A0DEC40)
#define RPG_CLIENT_PIXAIR_PIXAIRRECTTRANSFORMBOUNDSLIMITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0DEE80)
#define RPG_CLIENT_PIXAIR_PIXAIRRECTTRANSFORMBOUNDSLIMITER__GETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1A0DE900)
#define RPG_CLIENT_PIXAIR_PIXAIRRECTTRANSFORMBOUNDSLIMITER__GETRANDOMJUMPTEXTPOSITION_OFFSET UNITYSDK_OFFSET(0x1A0DEAA0)
#define RPG_CLIENT_PIXAIR_PIXAIRRECTTRANSFORMBOUNDSLIMITER__INSTANTIATEJUMPTEXT_OFFSET UNITYSDK_OFFSET(0x1A0DEE20)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirRectTransformBoundsLimiter_TypeDefinitionIndex = 75363;

	class PixAirRectTransformBoundsLimiter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* _SmallJumpTextRef; // 0x18
		::UnityEngine::GameObject* _LargeDamageJumpTextRef; // 0x20
		::UnityEngine::GameObject* _LargeHealJumpTextRef; // 0x28
		::UnityEngine::GameObject* _LargeBurnJumpTextRef; // 0x30
		::UnityEngine::GameObject* _LargeShieldJumpTextRef; // 0x38
		::UnityEngine::RectTransform* _JumpTextExclusionArea; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECTTRANSFORMBOUNDSLIMITER__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* AcquireJumpText(::RPG::Client::PixAir::PixAirJumpTextSize a1, ::RPG::Client::PixAir::PixAirJumpTextType a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::PixAir::PixAirJumpTextSize, ::RPG::Client::PixAir::PixAirJumpTextType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECTTRANSFORMBOUNDSLIMITER_ACQUIREJUMPTEXT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 _GetLocalPosition(::UnityEngine::RectTransform* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECTTRANSFORMBOUNDSLIMITER__GETLOCALPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 _GetRandomJumpTextPosition(::UnityEngine::Rect a1, ::UnityEngine::Rect a2, ::UnityEngine::Rect a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECTTRANSFORMBOUNDSLIMITER__GETRANDOMJUMPTEXTPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* _AcquireJumpText(::RPG::Client::PixAir::PixAirJumpTextSize a1, ::RPG::Client::PixAir::PixAirJumpTextType a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::PixAir::PixAirJumpTextSize, ::RPG::Client::PixAir::PixAirJumpTextType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECTTRANSFORMBOUNDSLIMITER__ACQUIREJUMPTEXT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* _AcquireSmallJumpText()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECTTRANSFORMBOUNDSLIMITER__ACQUIRESMALLJUMPTEXT_OFFSET))(this);
		}

		::UnityEngine::GameObject* _AcquireLargeJumpText(::RPG::Client::PixAir::PixAirJumpTextType a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::PixAir::PixAirJumpTextType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECTTRANSFORMBOUNDSLIMITER__ACQUIRELARGEJUMPTEXT_OFFSET))(this, a1);
		}

		static ::UnityEngine::GameObject* _InstantiateJumpText(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRRECTTRANSFORMBOUNDSLIMITER__INSTANTIATEJUMPTEXT_OFFSET))(a1);
		}
	};
}
