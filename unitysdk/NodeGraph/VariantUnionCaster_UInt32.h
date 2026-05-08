#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/System/Object.h"

#define NODEGRAPH_VARIANTUNIONCASTER_UINT32_CASTFROM_1_OFFSET UNITYSDK_OFFSET(0xCE7F3E0)
#define NODEGRAPH_VARIANTUNIONCASTER_UINT32_CASTFROM_OFFSET UNITYSDK_OFFSET(0xCE7F2F0)
#define NODEGRAPH_VARIANTUNIONCASTER_UINT32_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_UINT32__TRYCASTTO_OFFSET UNITYSDK_OFFSET(0xCE7F600)
#define NODEGRAPH_VARIANTUNIONCASTER_UINT32_TRYCASTTO_OFFSET UNITYSDK_OFFSET(0xCE7F570)
#define NODEGRAPH_VARIANTUNIONCASTER_UINT32__CTOR_OFFSET UNITYSDK_OFFSET(0xCE7F5F0)

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnionCaster_UInt32_TypeDefinitionIndex = 40763;

	class VariantUnionCaster_UInt32 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_UINT32__CTOR_OFFSET))(this);
		}

		::NodeGraph::VariantUnion CastFrom(::System::UInt32 value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_UINT32_CASTFROM_OFFSET))(this, value);
		}

		::NodeGraph::VariantUnion CastFrom_1(::System::Object* value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_UINT32_CASTFROM_1_OFFSET))(this, value);
		}

		::System::Boolean TryCastTo(::NodeGraph::VariantUnion& value, ::System::UInt32& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::UInt32&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_UINT32_TRYCASTTO_OFFSET))(this, value, v);
		}

		::System::Boolean NodeGraph_IVariantUnionCaster_System_UInt32__TryCastTo(::NodeGraph::VariantUnion& value, ::System::UInt32& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::UInt32&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_UINT32_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_UINT32__TRYCASTTO_OFFSET))(this, value, v);
		}
	};
}
