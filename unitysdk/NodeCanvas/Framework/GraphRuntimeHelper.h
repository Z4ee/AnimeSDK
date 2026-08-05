#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/GraphRuntimeHelper_GraphBinaryMode.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion::Serialization { class Graph_BinarySerializer_Setting_OptBool; }

#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_CHECKISSLOWDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB854A0)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_GET_GET_DEFAULTMODE_OFFSET UNITYSDK_OFFSET(0x1EB85380)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_HASBINARYMODE_OFFSET UNITYSDK_OFFSET(0x1EB85630)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_MARKOPTIMIZETAG_OFFSET UNITYSDK_OFFSET(0x1EB85440)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_RESETBINARYMODE_OFFSET UNITYSDK_OFFSET(0x1EB855D0)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_SETBINARYMODE_OFFSET UNITYSDK_OFFSET(0x1EB85570)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_UNMARKOPTIMIZETAG_OFFSET UNITYSDK_OFFSET(0x1EB85490)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB85270)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphRuntimeHelper_TypeDefinitionIndex = 30933;

	class GraphRuntimeHelper : public ::System::Object
	{
	public:
		static ::ParadoxNotion::Serialization::Graph_BinarySerializer_Setting_OptBool** StaticGet_Is_Force_Open_Binary_Runtime_Deserialize()
		{
			return (::ParadoxNotion::Serialization::Graph_BinarySerializer_Setting_OptBool**)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x253D0);
		}
		static ::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode* StaticGet_s_DefaultRuntimeMode()
		{
			return (::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x7A60);
		}
		static ::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode* StaticGet__sCurrentGraphBinaryMode()
		{
			return (::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x7A64);
		}
		static ::System::Boolean* StaticGet_OpenOptimizeDeserializeNodes()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x7A68);
		}
		static ::System::Boolean* StaticGet_Runtime_OpenBinaryDeserialize()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x7A69);
		}
		static ::System::Boolean* StaticGet_IsBatchMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x7A6A);
		}
		static ::System::Boolean* StaticGet_OpenBinaryV1Serialize()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x7A6B);
		}
		static ::System::Boolean* StaticGet_s_OpenDebugLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x7A6C);
		}
		static ::System::Boolean* StaticGet_OpenBinaryV2Serialize()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x7A6D);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER__CCTOR_OFFSET))();
		}

		static ::System::Void MarkOptimizeTag()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_MARKOPTIMIZETAG_OFFSET))();
		}

		static ::System::Void UnMarkOptimizeTag()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_UNMARKOPTIMIZETAG_OFFSET))();
		}

		static ::System::Boolean CheckIsSlowDeserialize()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_CHECKISSLOWDESERIALIZE_OFFSET))();
		}

		static ::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode get_Get_DefaultMode()
		{
			return ((::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_GET_GET_DEFAULTMODE_OFFSET))();
		}

		static ::System::Void SetBinaryMode(::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode inMode)
		{
			return ((::System::Void(*)(::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_SETBINARYMODE_OFFSET))(inMode);
		}

		static ::System::Void ResetBinaryMode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_RESETBINARYMODE_OFFSET))();
		}

		static ::System::Boolean HasBinaryMode(::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode qryMode)
		{
			return ((::System::Boolean(*)(::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_HASBINARYMODE_OFFSET))(qryMode);
		}
	};
}
