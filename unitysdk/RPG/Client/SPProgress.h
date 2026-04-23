#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/Graphic.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_SPPROGRESS_GET_COLOR2_OFFSET UNITYSDK_OFFSET(0xB14DEC0)
#define RPG_CLIENT_SPPROGRESS_GET_FILLAMOUNT2_OFFSET UNITYSDK_OFFSET(0xB14E000)
#define RPG_CLIENT_SPPROGRESS_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0xB14DF60)
#define RPG_CLIENT_SPPROGRESS_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0xB14E130)
#define RPG_CLIENT_SPPROGRESS_GET_USESECONDFILL_OFFSET UNITYSDK_OFFSET(0xB14E0A0)
#define RPG_CLIENT_SPPROGRESS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB14E580)
#define RPG_CLIENT_SPPROGRESS_SET_COLOR2_OFFSET UNITYSDK_OFFSET(0xB14DED0)
#define RPG_CLIENT_SPPROGRESS_SET_FILLAMOUNT2_OFFSET UNITYSDK_OFFSET(0xB14E010)
#define RPG_CLIENT_SPPROGRESS_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0xB14DF70)
#define RPG_CLIENT_SPPROGRESS_SET_USESECONDFILL_OFFSET UNITYSDK_OFFSET(0xB14E0B0)
#define RPG_CLIENT_SPPROGRESS_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xB14E1D0)
#define RPG_CLIENT_SPPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0xB14E610)
#define RPG_CLIENT_SPPROGRESS__REFRESH_OFFSET UNITYSDK_OFFSET(0xB14E3C0)
#define RPG_CLIENT_SPPROGRESS___IFIXBASEPROXY_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0xB14E6B0)
#define RPG_CLIENT_SPPROGRESS___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB14E6D0)
#define RPG_CLIENT_SPPROGRESS___IFIXBASEPROXY_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xB14E6C0)

namespace RPG::Client
{
	inline static constexpr unsigned int SPProgress_TypeDefinitionIndex = 66932;

	class SPProgress : public ::UnityEngine::UI::Graphic
	{
	public:
		::System::Single m_FillAmount; // 0xA0
		::System::Single m_FillAmount2; // 0xA4
		::System::Boolean m_UseSecondFill; // 0xA8
		::UnityEngine::Color m_Color2; // 0xAC
		::UnityEngine::Material* m_MaterialInstance; // 0xC0
		::System::Int32 m_Color2ID; // 0xC8
		::System::Int32 m_FillAmountID; // 0xCC
		::System::Int32 m_FillAmount2ID; // 0xD0
		::System::Int32 m_Fill2ID; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color get_color2()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_GET_COLOR2_OFFSET))(this);
		}

		::System::Void set_color2(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_SET_COLOR2_OFFSET))(this, value);
		}

		::System::Single get_fillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_fillAmount(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_SET_FILLAMOUNT_OFFSET))(this, value);
		}

		::System::Single get_fillAmount2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_GET_FILLAMOUNT2_OFFSET))(this);
		}

		::System::Void set_fillAmount2(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_SET_FILLAMOUNT2_OFFSET))(this, value);
		}

		::System::Boolean get_useSecondFill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_GET_USESECONDFILL_OFFSET))(this);
		}

		::System::Void set_useSecondFill(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_SET_USESECONDFILL_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void _Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS__REFRESH_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Material* __iFixBaseProxy_get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS___IFIXBASEPROXY_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS___IFIXBASEPROXY_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}
	};
}
