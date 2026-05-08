#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Graphic; }

#define COFFEE_UISOFTMASK_GRAPHICCONNECTOR_ADDCONNECTOR_OFFSET UNITYSDK_OFFSET(0x1C17E5B0)
#define COFFEE_UISOFTMASK_GRAPHICCONNECTOR_FINDCONNECTOR_OFFSET UNITYSDK_OFFSET(0x1C17E760)
#define COFFEE_UISOFTMASK_GRAPHICCONNECTOR_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1C17EB40)
#define COFFEE_UISOFTMASK_GRAPHICCONNECTOR_INIT_OFFSET UNITYSDK_OFFSET(0x1C17E540)
#define COFFEE_UISOFTMASK_GRAPHICCONNECTOR_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C17EB50)
#define COFFEE_UISOFTMASK_GRAPHICCONNECTOR_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x1C17ECA0)
#define COFFEE_UISOFTMASK_GRAPHICCONNECTOR_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x1C17EB60)
#define COFFEE_UISOFTMASK_GRAPHICCONNECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C17EDE0)
#define COFFEE_UISOFTMASK_GRAPHICCONNECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C17E5A0)

namespace Coffee::UISoftMask
{
	inline static constexpr unsigned int GraphicConnector_TypeDefinitionIndex = 84923;

	class GraphicConnector : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Coffee::UISoftMask::GraphicConnector*>** StaticGet_s_ConnectorMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Coffee::UISoftMask::GraphicConnector*>**)Il2CppClass::FromTypeDefinitionIndex(GraphicConnector_TypeDefinitionIndex)->GetStaticField(0x49C00);
		}
		static ::Coffee::UISoftMask::GraphicConnector** StaticGet_s_EmptyConnector()
		{
			return (::Coffee::UISoftMask::GraphicConnector**)Il2CppClass::FromTypeDefinitionIndex(GraphicConnector_TypeDefinitionIndex)->GetStaticField(0x49C08);
		}
		static ::System::Collections::Generic::List_1<::Coffee::UISoftMask::GraphicConnector*>** StaticGet_s_Connectors()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UISoftMask::GraphicConnector*>**)Il2CppClass::FromTypeDefinitionIndex(GraphicConnector_TypeDefinitionIndex)->GetStaticField(0x49C10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOR__CCTOR_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOR_INIT_OFFSET))();
		}

		static ::System::Void AddConnector(::Coffee::UISoftMask::GraphicConnector* connector)
		{
			return ((::System::Void(*)(::Coffee::UISoftMask::GraphicConnector*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOR_ADDCONNECTOR_OFFSET))(connector);
		}

		static ::Coffee::UISoftMask::GraphicConnector* FindConnector(::UnityEngine::UI::Graphic* graphic)
		{
			return ((::Coffee::UISoftMask::GraphicConnector*(*)(::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOR_FINDCONNECTOR_OFFSET))(graphic);
		}

		::System::Int32 get_priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOR_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean IsValid(::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOR_ISVALID_OFFSET))(this, graphic);
		}

		::System::Void SetVerticesDirty(::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOR_SETVERTICESDIRTY_OFFSET))(this, graphic);
		}

		::System::Void SetMaterialDirty(::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + COFFEE_UISOFTMASK_GRAPHICCONNECTOR_SETMATERIALDIRTY_OFFSET))(this, graphic);
		}
	};
}
