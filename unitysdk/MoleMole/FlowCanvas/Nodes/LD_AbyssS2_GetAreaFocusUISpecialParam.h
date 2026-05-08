#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/FocusUISpecialIconParam.h"

class Class_3_88D140F5E09465E1_2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM_BUILDPARAMFROMAREA_OFFSET UNITYSDK_OFFSET(0x10BB5740)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM_GETAREAAFFIXICONPATHBYAREAID_OFFSET UNITYSDK_OFFSET(0x10BB60E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM_GETAREAICONPATHBYAREAID_OFFSET UNITYSDK_OFFSET(0x10BB5F80)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM_INVOKE_OFFSET UNITYSDK_OFFSET(0x10BB5300)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x10BB6230)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetAreaFocusUISpecialParam_TypeDefinitionIndex = 60955;

	class LD_AbyssS2_GetAreaFocusUISpecialParam : public ::FlowCanvas::Nodes::PureFunctionNode_2<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM__CTOR_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam Invoke(::System::Int32 areaSelectIndex)
		{
			return ((::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM_INVOKE_OFFSET))(this, areaSelectIndex);
		}

		::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam BuildParamFromArea(::System::Collections::Generic::IList_1<::Class_3_88D140F5E09465E1_2*>* areaList, ::System::Collections::Generic::IList_1<::System::Int32>* routeIndexList)
		{
			return ((::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_3_88D140F5E09465E1_2*>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM_BUILDPARAMFROMAREA_OFFSET))(this, areaList, routeIndexList);
		}

		::System::String* GetAreaAffixIconPathByAreaID(::System::Int32 routePointID)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM_GETAREAAFFIXICONPATHBYAREAID_OFFSET))(this, routePointID);
		}

		::System::String* GetAreaIconPathByAreaID(::Class_3_88D140F5E09465E1_2* rfMapArea)
		{
			return ((::System::String*(*)(::PVOID, ::Class_3_88D140F5E09465E1_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAFOCUSUISPECIALPARAM_GETAREAICONPATHBYAREAID_OFFSET))(this, rfMapArea);
		}
	};
}
