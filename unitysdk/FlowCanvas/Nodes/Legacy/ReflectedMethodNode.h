#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowNode; }
namespace System { class String; }
namespace System::Reflection { class MethodInfo; }

#define FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE_CREATE_OFFSET UNITYSDK_OFFSET(0x1D7FE250)
#define FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE_GETNAME_OFFSET UNITYSDK_OFFSET(0x1D7FEA70)
#define FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE_TRYCREATEJIT_OFFSET UNITYSDK_OFFSET(0x1D7FE3D0)
#define FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FE240)

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedMethodNode_TypeDefinitionIndex = 30725;

	class ReflectedMethodNode : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE__CTOR_OFFSET))(this);
		}

		static ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode* Create(::System::Reflection::MethodInfo* method)
		{
			return ((::FlowCanvas::Nodes::Legacy::ReflectedMethodNode*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE_CREATE_OFFSET))(method);
		}

		static ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode* TryCreateJit(::System::Reflection::MethodInfo* method)
		{
			return ((::FlowCanvas::Nodes::Legacy::ReflectedMethodNode*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE_TRYCREATEJIT_OFFSET))(method);
		}

		::System::String* GetName(::System::Reflection::MethodInfo* method, ::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE_GETNAME_OFFSET))(this, method, i);
		}
	};
}
