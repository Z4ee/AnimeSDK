#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIAdventureWaypointsSafeZone_EBorderShape.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_0BD0714BE5D6FE72_OFFSET UNITYSDK_OFFSET(0xCB2E510)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_16CE38D4976EB720_OFFSET UNITYSDK_OFFSET(0xCB2E700)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_28FA93E83BA2E9D5_OFFSET UNITYSDK_OFFSET(0xCB2E290)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_54078F5E87FE9B49_OFFSET UNITYSDK_OFFSET(0xCB2D170)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_56B2E27E517339A0_OFFSET UNITYSDK_OFFSET(0xCB2E400)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_62DF1EBE90234E13_OFFSET UNITYSDK_OFFSET(0xCB2CCD0)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_A79387F1F80CA62C_OFFSET UNITYSDK_OFFSET(0xCB2E0C0)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_AB145FEC5E4E4D0D_OFFSET UNITYSDK_OFFSET(0xCB2E1A0)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCB2CB10)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE__CTOR_OFFSET UNITYSDK_OFFSET(0xCB2E7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureWaypointsSafeZone_TypeDefinitionIndex = 64602;

	class UIAdventureWaypointsSafeZone : public ::System::Object
	{
	public:
		::System::Single MarginLeft; // 0x10
		::System::Single MarginRight; // 0x14
		::System::Single MarginUp; // 0x18
		::System::Single MarginDown; // 0x1C
		::System::Boolean _IsUsingOverrideMargin; // 0x20
		::System::Single _OriginMarginLeft; // 0x24
		::System::Single _OriginMarginRight; // 0x28
		::System::Single _OriginMarginUp; // 0x2C
		::System::Single _OriginMarginDown; // 0x30
		::RPG::Client::UIAdventureWaypointsSafeZone_EBorderShape BorderShape; // 0x34
		::System::Single CornerRadius; // 0x38
		::UnityEngine::RectTransform* _CanvasRectTrans; // 0x40
		::UnityEngine::Vector4 _MarginLRUD; // 0x48
		::UnityEngine::Vector2 _CanvasSize; // 0x58
		::UnityEngine::Vector2 _CanvasLB; // 0x60
		::UnityEngine::Vector2 _CanvasRT; // 0x68
		::System::Single _CanvasRatioHW; // 0x70
		::System::Single _CornerRadiusInCanvas; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_62DF1EBE90234E13(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_62DF1EBE90234E13_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_54078F5E87FE9B49(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Camera* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector3&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_54078F5E87FE9B49_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_A79387F1F80CA62C(::System::Boolean a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_A79387F1F80CA62C_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector2 Method_1_28FA93E83BA2E9D5(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_28FA93E83BA2E9D5_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_0BD0714BE5D6FE72(::UnityEngine::Vector2& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_0BD0714BE5D6FE72_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_56B2E27E517339A0(::UnityEngine::Vector2& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_56B2E27E517339A0_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_AB145FEC5E4E4D0D(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_AB145FEC5E4E4D0D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_16CE38D4976EB720(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_METHOD_1_16CE38D4976EB720_OFFSET))(this, a1);
		}
	};
}
