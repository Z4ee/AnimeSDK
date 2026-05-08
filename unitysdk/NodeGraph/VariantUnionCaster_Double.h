#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/System/Object.h"

#define NODEGRAPH_VARIANTUNIONCASTER_DOUBLE_CASTFROM_1_OFFSET UNITYSDK_OFFSET(0xF862830)
#define NODEGRAPH_VARIANTUNIONCASTER_DOUBLE_CASTFROM_OFFSET UNITYSDK_OFFSET(0xF862720)
#define NODEGRAPH_VARIANTUNIONCASTER_DOUBLE_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_DOUBLE__TRYCASTTO_OFFSET UNITYSDK_OFFSET(0xF862A90)
#define NODEGRAPH_VARIANTUNIONCASTER_DOUBLE_TRYCASTTO_OFFSET UNITYSDK_OFFSET(0xF862A10)
#define NODEGRAPH_VARIANTUNIONCASTER_DOUBLE__CTOR_OFFSET UNITYSDK_OFFSET(0xF862A80)

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnionCaster_Double_TypeDefinitionIndex = 58456;

	class VariantUnionCaster_Double : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_DOUBLE__CTOR_OFFSET))(this);
		}

		::NodeGraph::VariantUnion CastFrom(::System::Double value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_DOUBLE_CASTFROM_OFFSET))(this, value);
		}

		::NodeGraph::VariantUnion CastFrom_1(::System::Object* value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_DOUBLE_CASTFROM_1_OFFSET))(this, value);
		}

		::System::Boolean TryCastTo(::NodeGraph::VariantUnion& value, ::System::Double& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::Double&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_DOUBLE_TRYCASTTO_OFFSET))(this, value, v);
		}

		::System::Boolean NodeGraph_IVariantUnionCaster_System_Double__TryCastTo(::NodeGraph::VariantUnion& value, ::System::Double& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::Double&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_DOUBLE_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_DOUBLE__TRYCASTTO_OFFSET))(this, value, v);
		}
	};
}
