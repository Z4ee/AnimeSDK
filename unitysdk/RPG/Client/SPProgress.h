#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_SPPROGRESS_GET_COLOR2_OFFSET UNITYSDK_OFFSET(0x19F2B0F0)
#define RPG_CLIENT_SPPROGRESS_GET_FILLAMOUNT2_OFFSET UNITYSDK_OFFSET(0x19F2B420)
#define RPG_CLIENT_SPPROGRESS_GET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x19F2B340)
#define RPG_CLIENT_SPPROGRESS_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x19F2B1E0)
#define RPG_CLIENT_SPPROGRESS_GET_MATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0x19F2B5D0)
#define RPG_CLIENT_SPPROGRESS_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x19F2B660)
#define RPG_CLIENT_SPPROGRESS_GET_USESECONDFILL_OFFSET UNITYSDK_OFFSET(0x19F2B500)
#define RPG_CLIENT_SPPROGRESS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19F2BBA0)
#define RPG_CLIENT_SPPROGRESS_SET_COLOR2_OFFSET UNITYSDK_OFFSET(0x19F2B150)
#define RPG_CLIENT_SPPROGRESS_SET_FILLAMOUNT2_OFFSET UNITYSDK_OFFSET(0x19F2B470)
#define RPG_CLIENT_SPPROGRESS_SET_FILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x19F2B390)
#define RPG_CLIENT_SPPROGRESS_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x19F2B840)
#define RPG_CLIENT_SPPROGRESS_SET_USESECONDFILL_OFFSET UNITYSDK_OFFSET(0x19F2B550)
#define RPG_CLIENT_SPPROGRESS_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x19F2B890)
#define RPG_CLIENT_SPPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x19F2BC30)
#define RPG_CLIENT_SPPROGRESS__REFRESH_OFFSET UNITYSDK_OFFSET(0x19F2B8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int SPProgress_TypeDefinitionIndex = 69358;

	class SPProgress : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::System::Single m_FillAmount; // 0xF0
		::System::Single m_FillAmount2; // 0xF4
		::System::Boolean m_UseSecondFill; // 0xF8
		::UnityEngine::Color m_Color2; // 0xFC
		::UnityEngine::Material* m_MaterialInstance; // 0x110
		::System::Int32 m_Color2ID; // 0x118
		::System::Int32 m_FillAmountID; // 0x11C
		::System::Int32 m_FillAmount2ID; // 0x120
		::System::Int32 m_Fill2ID; // 0x124

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color get_color2()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_GET_COLOR2_OFFSET))(this);
		}

		::System::Void set_color2(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_SET_COLOR2_OFFSET))(this, a1);
		}

		::System::Single get_fillAmount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_GET_FILLAMOUNT_OFFSET))(this);
		}

		::System::Void set_fillAmount(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_SET_FILLAMOUNT_OFFSET))(this, a1);
		}

		::System::Single get_fillAmount2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_GET_FILLAMOUNT2_OFFSET))(this);
		}

		::System::Void set_fillAmount2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_SET_FILLAMOUNT2_OFFSET))(this, a1);
		}

		::System::Boolean get_useSecondFill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_GET_USESECONDFILL_OFFSET))(this);
		}

		::System::Void set_useSecondFill(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_SET_USESECONDFILL_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_SET_MATERIAL_OFFSET))(this, a1);
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

		::UnityEngine::Material* get_MaterialInstance()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPPROGRESS_GET_MATERIALINSTANCE_OFFSET))(this);
		}
	};
}
