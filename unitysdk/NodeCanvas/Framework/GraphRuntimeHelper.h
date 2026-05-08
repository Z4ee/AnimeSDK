#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/GraphRuntimeHelper_GraphBinaryMode.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion::Serialization { class Graph_BinarySerializer_Setting_OptBool; }

#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_CHECKISSLOWDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B4A2A80)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_GET_GET_DEFAULTMODE_OFFSET UNITYSDK_OFFSET(0x1B4A2960)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_HASBINARYMODE_OFFSET UNITYSDK_OFFSET(0x1B4A2C10)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_MARKOPTIMIZETAG_OFFSET UNITYSDK_OFFSET(0x1B4A2A20)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_RESETBINARYMODE_OFFSET UNITYSDK_OFFSET(0x1B4A2BB0)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_SETBINARYMODE_OFFSET UNITYSDK_OFFSET(0x1B4A2B50)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER_UNMARKOPTIMIZETAG_OFFSET UNITYSDK_OFFSET(0x1B4A2A70)
#define NODECANVAS_FRAMEWORK_GRAPHRUNTIMEHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4A2850)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphRuntimeHelper_TypeDefinitionIndex = 27703;

	class GraphRuntimeHelper : public ::System::Object
	{
	public:
		static ::ParadoxNotion::Serialization::Graph_BinarySerializer_Setting_OptBool** StaticGet_Is_Force_Open_Binary_Runtime_Deserialize()
		{
			return (::ParadoxNotion::Serialization::Graph_BinarySerializer_Setting_OptBool**)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x1FE00);
		}
		static ::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode* StaticGet__sCurrentGraphBinaryMode()
		{
			return (::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x49C0);
		}
		static ::System::Boolean* StaticGet_s_OpenDebugLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x49C4);
		}
		static ::System::Boolean* StaticGet_OpenOptimizeDeserializeNodes()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x49C5);
		}
		static ::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode* StaticGet_s_DefaultRuntimeMode()
		{
			return (::NodeCanvas::Framework::GraphRuntimeHelper_GraphBinaryMode*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x49C8);
		}
		static ::System::Boolean* StaticGet_OpenBinaryV2Serialize()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x49CC);
		}
		static ::System::Boolean* StaticGet_OpenBinaryV1Serialize()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x49CD);
		}
		static ::System::Boolean* StaticGet_IsBatchMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x49CE);
		}
		static ::System::Boolean* StaticGet_Runtime_OpenBinaryDeserialize()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GraphRuntimeHelper_TypeDefinitionIndex)->GetStaticField(0x49CF);
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
