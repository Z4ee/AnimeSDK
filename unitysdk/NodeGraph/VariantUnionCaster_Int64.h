#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/System/Object.h"

#define NODEGRAPH_VARIANTUNIONCASTER_INT64_CASTFROM_1_OFFSET UNITYSDK_OFFSET(0x17FB03B0)
#define NODEGRAPH_VARIANTUNIONCASTER_INT64_CASTFROM_OFFSET UNITYSDK_OFFSET(0x17FB02B0)
#define NODEGRAPH_VARIANTUNIONCASTER_INT64_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_INT64__TRYCASTTO_OFFSET UNITYSDK_OFFSET(0x17FB05E0)
#define NODEGRAPH_VARIANTUNIONCASTER_INT64_TRYCASTTO_OFFSET UNITYSDK_OFFSET(0x17FB0560)
#define NODEGRAPH_VARIANTUNIONCASTER_INT64__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB05D0)

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnionCaster_Int64_TypeDefinitionIndex = 67876;

	class VariantUnionCaster_Int64 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_INT64__CTOR_OFFSET))(this);
		}

		::NodeGraph::VariantUnion CastFrom(::System::Int64 value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_INT64_CASTFROM_OFFSET))(this, value);
		}

		::NodeGraph::VariantUnion CastFrom_1(::System::Object* value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_INT64_CASTFROM_1_OFFSET))(this, value);
		}

		::System::Boolean TryCastTo(::NodeGraph::VariantUnion& value, ::System::Int64& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::Int64&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_INT64_TRYCASTTO_OFFSET))(this, value, v);
		}

		::System::Boolean NodeGraph_IVariantUnionCaster_System_Int64__TryCastTo(::NodeGraph::VariantUnion& value, ::System::Int64& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::Int64&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_INT64_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_INT64__TRYCASTTO_OFFSET))(this, value, v);
		}
	};
}
