#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class VertexHelper; }

#define MOLEMOLE_GRADIENTCOLOR_GET_COLORBOTTOM_OFFSET UNITYSDK_OFFSET(0x16CAF040)
#define MOLEMOLE_GRADIENTCOLOR_GET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0x16CAF100)
#define MOLEMOLE_GRADIENTCOLOR_GET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0x16CAF1C0)
#define MOLEMOLE_GRADIENTCOLOR_GET_COLORTOP_OFFSET UNITYSDK_OFFSET(0x16CAEDF0)
#define MOLEMOLE_GRADIENTCOLOR_GET_GRADIENTOFFSETHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x16CAF330)
#define MOLEMOLE_GRADIENTCOLOR_GET_GRADIENTOFFSETVERTICAL_OFFSET UNITYSDK_OFFSET(0x16CAF280)
#define MOLEMOLE_GRADIENTCOLOR_GET_IGNOREPRECOLOR_OFFSET UNITYSDK_OFFSET(0x16CAF3E0)
#define MOLEMOLE_GRADIENTCOLOR_METHOD_7_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x16CAFBB0)
#define MOLEMOLE_GRADIENTCOLOR_METHOD_7_8E99D7700BBA0647_OFFSET UNITYSDK_OFFSET(0x16CAF630)
#define MOLEMOLE_GRADIENTCOLOR_METHOD_7_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x16CAEEB0)
#define MOLEMOLE_GRADIENTCOLOR_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x16CAF450)
#define MOLEMOLE_GRADIENTCOLOR_SET_COLORBOTTOM_OFFSET UNITYSDK_OFFSET(0x16CAF050)
#define MOLEMOLE_GRADIENTCOLOR_SET_COLORLEFT_OFFSET UNITYSDK_OFFSET(0x16CAF110)
#define MOLEMOLE_GRADIENTCOLOR_SET_COLORRIGHT_OFFSET UNITYSDK_OFFSET(0x16CAF1D0)
#define MOLEMOLE_GRADIENTCOLOR_SET_COLORTOP_OFFSET UNITYSDK_OFFSET(0x16CAEE00)
#define MOLEMOLE_GRADIENTCOLOR_SET_GRADIENTOFFSETHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x16CAF340)
#define MOLEMOLE_GRADIENTCOLOR_SET_GRADIENTOFFSETVERTICAL_OFFSET UNITYSDK_OFFSET(0x16CAF290)
#define MOLEMOLE_GRADIENTCOLOR_SET_IGNOREPRECOLOR_OFFSET UNITYSDK_OFFSET(0x16CAF3F0)
#define MOLEMOLE_GRADIENTCOLOR_START_OFFSET UNITYSDK_OFFSET(0x16CAFB40)
#define MOLEMOLE_GRADIENTCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAFE30)
#define MOLEMOLE_GRADIENTCOLOR___BASE_START_OFFSET UNITYSDK_OFFSET(0x16CAFEE0)

namespace MoleMole
{
	inline static constexpr unsigned int GradientColor_TypeDefinitionIndex = 87185;

	class GradientColor : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		// static const ::System::Int32 Field_7_0 = 0x6; // 0x0
		::UnityEngine::Color m_colorTop; // 0x20
		::UnityEngine::Color m_colorBottom; // 0x30
		::UnityEngine::Color m_colorLeft; // 0x40
		::UnityEngine::Color m_colorRight; // 0x50
		::System::Single m_gradientOffsetVertical; // 0x60
		::System::Single m_gradientOffsetHorizontal; // 0x64
		::System::Boolean m_splitTextGradient; // 0x68
		::System::Boolean m_ignorePreColor; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color get_ColorTop()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_GET_COLORTOP_OFFSET))(this);
		}

		::System::Void set_ColorTop(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_SET_COLORTOP_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_ColorBottom()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_GET_COLORBOTTOM_OFFSET))(this);
		}

		::System::Void set_ColorBottom(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_SET_COLORBOTTOM_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_ColorLeft()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_GET_COLORLEFT_OFFSET))(this);
		}

		::System::Void set_ColorLeft(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_SET_COLORLEFT_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_ColorRight()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_GET_COLORRIGHT_OFFSET))(this);
		}

		::System::Void set_ColorRight(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_SET_COLORRIGHT_OFFSET))(this, a1);
		}

		::System::Single get_GradientOffsetVertical()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_GET_GRADIENTOFFSETVERTICAL_OFFSET))(this);
		}

		::System::Void set_GradientOffsetVertical(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_SET_GRADIENTOFFSETVERTICAL_OFFSET))(this, a1);
		}

		::System::Single get_GradientOffsetHorizontal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_GET_GRADIENTOFFSETHORIZONTAL_OFFSET))(this);
		}

		::System::Void set_GradientOffsetHorizontal(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_SET_GRADIENTOFFSETHORIZONTAL_OFFSET))(this, a1);
		}

		::System::Boolean get_IgnorePreColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_GET_IGNOREPRECOLOR_OFFSET))(this);
		}

		::System::Void set_IgnorePreColor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_SET_IGNOREPRECOLOR_OFFSET))(this, a1);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_MODIFYMESH_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_START_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR___BASE_START_OFFSET))(this);
		}

		::System::Void Method_7_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_METHOD_7_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_7_8E99D7700BBA0647(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_METHOD_7_8E99D7700BBA0647_OFFSET))(this, a1);
		}

		::System::Void Method_7_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GRADIENTCOLOR_METHOD_7_97D83E4CB3B11935_OFFSET))(this);
		}
	};
}
