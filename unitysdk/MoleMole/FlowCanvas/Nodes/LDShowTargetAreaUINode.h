#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_9.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETAREAUINODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1684C610)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETAREAUINODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1684C7C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETAREAUINODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1684C810)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETAREAUINODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1684C830)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowTargetAreaUINode_TypeDefinitionIndex = 42760;

	class LDShowTargetAreaUINode : public ::FlowCanvas::Nodes::CallableFunctionNode_9<::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean>
	{
	public:
		::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6* runtimeData; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETAREAUINODE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* Invoke(::System::Collections::Generic::List_1<::System::String*>* Anchor, ::System::Collections::Generic::List_1<::System::String*>* Styles, ::System::Single Radius, ::System::Single CreateInterval, ::System::Boolean UseSceneMark, ::System::Boolean isExtractXYZ, ::UnityEngine::Vector3 extractV3XYZ, ::System::Boolean isHideWhenInCamera)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETAREAUINODE_INVOKE_OFFSET))(this, Anchor, Styles, Radius, CreateInterval, UseSceneMark, isExtractXYZ, extractV3XYZ, isHideWhenInCamera);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETAREAUINODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHOWTARGETAREAUINODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
