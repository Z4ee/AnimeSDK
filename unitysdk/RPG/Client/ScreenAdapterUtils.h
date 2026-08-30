#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_676;
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_SCREENADAPTERUTILS_GETADJUSTEDSCREENRECT_OFFSET UNITYSDK_OFFSET(0xE06A040)
#define RPG_CLIENT_SCREENADAPTERUTILS_GETCLAMPEDSCREENPOINTPOSITION_OFFSET UNITYSDK_OFFSET(0xE069EA0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GETCLAMPEDSCREENPOINTTORAY_OFFSET UNITYSDK_OFFSET(0xE06A0F0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENASPECT_OFFSET UNITYSDK_OFFSET(0xE06B330)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENHEIGHT_OFFSET UNITYSDK_OFFSET(0xE06B620)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENWIDTH_OFFSET UNITYSDK_OFFSET(0xE06B490)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDVIEWPORTRECT_OFFSET UNITYSDK_OFFSET(0xE06A280)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_CLAMPEDINPUTMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0xE069DE0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_INSCREENASPECTADJUSTED_OFFSET UNITYSDK_OFFSET(0xE06B110)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ISSCREENHEIGHTADJUSTED_OFFSET UNITYSDK_OFFSET(0xE06A800)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ISSCREENWIDTHADJUSTED_OFFSET UNITYSDK_OFFSET(0xE06A6C0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENASPECT_OFFSET UNITYSDK_OFFSET(0xE06A790)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENHEIGHT_OFFSET UNITYSDK_OFFSET(0xE06ACA0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENSAFEAREA_OFFSET UNITYSDK_OFFSET(0xE06AEA0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENWIDTH_OFFSET UNITYSDK_OFFSET(0xE06AB50)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_SCREENADAPTER_OFFSET UNITYSDK_OFFSET(0xE06ADF0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_SCREENCENTERPOS_OFFSET UNITYSDK_OFFSET(0xE06B070)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET_TRUEINPUTMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0xE069D90)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET__MAXASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xE06B7F0)
#define RPG_CLIENT_SCREENADAPTERUTILS_GET__MINASPECTRATIO_OFFSET UNITYSDK_OFFSET(0xE06B7B0)
#define RPG_CLIENT_SCREENADAPTERUTILS_ISSCREENPOINTINADJUSTEDSCREENRECT_OFFSET UNITYSDK_OFFSET(0xE069F90)
#define RPG_CLIENT_SCREENADAPTERUTILS_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xE06AAF0)
#define RPG_CLIENT_SCREENADAPTERUTILS_RESETSCREENADAPTER_OFFSET UNITYSDK_OFFSET(0xE06B010)
#define RPG_CLIENT_SCREENADAPTERUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xE06B830)
#define RPG_CLIENT_SCREENADAPTERUTILS__GETSCREENPOINTBORDERPOSITION_OFFSET UNITYSDK_OFFSET(0xE06A8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ScreenAdapterUtils_TypeDefinitionIndex = 60209;

	class ScreenAdapterUtils : public ::System::Object
	{
	public:
		static ::Class_0_16E4307DCC419505_676** StaticGet__IScreenAdapter()
		{
			return (::Class_0_16E4307DCC419505_676**)Il2CppClass::FromTypeDefinitionIndex(ScreenAdapterUtils_TypeDefinitionIndex)->GetStaticField(0x21740);
		}
		static ::UnityEngine::Rect* StaticGet__DefaultViewPortRect()
		{
			return (::UnityEngine::Rect*)Il2CppClass::FromTypeDefinitionIndex(ScreenAdapterUtils_TypeDefinitionIndex)->GetStaticField(0xABE0);
		}
		static ::System::Boolean* StaticGet__IsCachedScreenPointBorderDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScreenAdapterUtils_TypeDefinitionIndex)->GetStaticField(0xABF0);
		}
		static ::UnityEngine::Vector4* StaticGet__CachedScreenPointBorderPosition()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(ScreenAdapterUtils_TypeDefinitionIndex)->GetStaticField(0xABF4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_TrueInputMousePosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_TRUEINPUTMOUSEPOSITION_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_ClampedInputMousePosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_CLAMPEDINPUTMOUSEPOSITION_OFFSET))();
		}

		static ::System::Boolean IsScreenPointInAdjustedScreenRect(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_ISSCREENPOINTINADJUSTEDSCREENRECT_OFFSET))(a1);
		}

		static ::UnityEngine::Ray GetClampedScreenPointToRay(::UnityEngine::Vector3 a1, ::UnityEngine::Camera* a2)
		{
			return ((::UnityEngine::Ray(*)(::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GETCLAMPEDSCREENPOINTTORAY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Rect get_AdjustedViewPortRect()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDVIEWPORTRECT_OFFSET))();
		}

		static ::UnityEngine::Vector3 GetClampedScreenPointPosition(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GETCLAMPEDSCREENPOINTPOSITION_OFFSET))(a1);
		}

		static ::UnityEngine::Rect GetAdjustedScreenRect()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GETADJUSTEDSCREENRECT_OFFSET))();
		}

		static ::System::Void OnScreenSizeChanged()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_ONSCREENSIZECHANGED_OFFSET))();
		}

		static ::UnityEngine::Vector4 _GetScreenPointBorderPosition()
		{
			return ((::UnityEngine::Vector4(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS__GETSCREENPOINTBORDERPOSITION_OFFSET))();
		}

		static ::System::Int32 get_OriginScreenWidth()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENWIDTH_OFFSET))();
		}

		static ::System::Int32 get_OriginScreenHeight()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENHEIGHT_OFFSET))();
		}

		static ::UnityEngine::Rect get_OriginScreenSafeArea()
		{
			return ((::UnityEngine::Rect(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENSAFEAREA_OFFSET))();
		}

		static ::System::Single get_OriginScreenAspect()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ORIGINSCREENASPECT_OFFSET))();
		}

		static ::System::Void ResetScreenAdapter()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_RESETSCREENADAPTER_OFFSET))();
		}

		static ::Class_0_16E4307DCC419505_676* get_ScreenAdapter()
		{
			return ((::Class_0_16E4307DCC419505_676*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_SCREENADAPTER_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_ScreenCenterPos()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_SCREENCENTERPOS_OFFSET))();
		}

		static ::System::Boolean get_IsScreenWidthAdjusted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ISSCREENWIDTHADJUSTED_OFFSET))();
		}

		static ::System::Boolean get_IsScreenHeightAdjusted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ISSCREENHEIGHTADJUSTED_OFFSET))();
		}

		static ::System::Boolean get_InScreenAspectAdjusted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_INSCREENASPECTADJUSTED_OFFSET))();
		}

		static ::System::Single get_AdjustedScreenAspect()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENASPECT_OFFSET))();
		}

		static ::System::Int32 get_AdjustedScreenWidth()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENWIDTH_OFFSET))();
		}

		static ::System::Int32 get_AdjustedScreenHeight()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET_ADJUSTEDSCREENHEIGHT_OFFSET))();
		}

		static ::System::Single get__MinAspectRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET__MINASPECTRATIO_OFFSET))();
		}

		static ::System::Single get__MaxAspectRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENADAPTERUTILS_GET__MAXASPECTRATIO_OFFSET))();
		}
	};
}
