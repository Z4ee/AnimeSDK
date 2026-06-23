#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NODEGRAPH_VARIANTUNIONCASTERHELPER_TRYCAST_1_OFFSET UNITYSDK_OFFSET(0x10724620)
#define NODEGRAPH_VARIANTUNIONCASTERHELPER_TRYCAST_2_OFFSET UNITYSDK_OFFSET(0x10724880)
#define NODEGRAPH_VARIANTUNIONCASTERHELPER_TRYCAST_3_OFFSET UNITYSDK_OFFSET(0x10724AE0)
#define NODEGRAPH_VARIANTUNIONCASTERHELPER_TRYCAST_4_OFFSET UNITYSDK_OFFSET(0x10724CE0)
#define NODEGRAPH_VARIANTUNIONCASTERHELPER_TRYCAST_5_OFFSET UNITYSDK_OFFSET(0x10724F30)
#define NODEGRAPH_VARIANTUNIONCASTERHELPER_TRYCAST_6_OFFSET UNITYSDK_OFFSET(0x107250B0)
#define NODEGRAPH_VARIANTUNIONCASTERHELPER_TRYCAST_OFFSET UNITYSDK_OFFSET(0x10724350)

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnionCasterHelper_TypeDefinitionIndex = 71575;

	class VariantUnionCasterHelper : public ::System::Object
	{
	public:
		static ::System::Boolean TryCast(::NodeGraph::VariantUnion value, ::System::Boolean& v)
		{
			return ((::System::Boolean(*)(::NodeGraph::VariantUnion, ::System::Boolean&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTERHELPER_TRYCAST_OFFSET))(value, v);
		}

		static ::System::Boolean TryCast_1(::NodeGraph::VariantUnion value, ::System::Int32& v)
		{
			return ((::System::Boolean(*)(::NodeGraph::VariantUnion, ::System::Int32&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTERHELPER_TRYCAST_1_OFFSET))(value, v);
		}

		static ::System::Boolean TryCast_2(::NodeGraph::VariantUnion value, ::System::Int64& v)
		{
			return ((::System::Boolean(*)(::NodeGraph::VariantUnion, ::System::Int64&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTERHELPER_TRYCAST_2_OFFSET))(value, v);
		}

		static ::System::Boolean TryCast_3(::NodeGraph::VariantUnion value, ::System::Single& v)
		{
			return ((::System::Boolean(*)(::NodeGraph::VariantUnion, ::System::Single&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTERHELPER_TRYCAST_3_OFFSET))(value, v);
		}

		static ::System::Boolean TryCast_4(::NodeGraph::VariantUnion value, ::System::Double& v)
		{
			return ((::System::Boolean(*)(::NodeGraph::VariantUnion, ::System::Double&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTERHELPER_TRYCAST_4_OFFSET))(value, v);
		}

		static ::System::Boolean TryCast_5(::NodeGraph::VariantUnion value, ::System::String*& v)
		{
			return ((::System::Boolean(*)(::NodeGraph::VariantUnion, ::System::String*&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTERHELPER_TRYCAST_5_OFFSET))(value, v);
		}

		static ::System::Boolean TryCast_6(::NodeGraph::VariantUnion value, ::System::Object*& v)
		{
			return ((::System::Boolean(*)(::NodeGraph::VariantUnion, ::System::Object*&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTERHELPER_TRYCAST_6_OFFSET))(value, v);
		}
	};
}
