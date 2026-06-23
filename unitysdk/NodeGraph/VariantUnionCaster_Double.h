#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/System/Object.h"

#define NODEGRAPH_VARIANTUNIONCASTER_DOUBLE_CASTFROM_1_OFFSET UNITYSDK_OFFSET(0x11F8FE50)
#define NODEGRAPH_VARIANTUNIONCASTER_DOUBLE_CASTFROM_OFFSET UNITYSDK_OFFSET(0x11F8FD40)
#define NODEGRAPH_VARIANTUNIONCASTER_DOUBLE_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_DOUBLE__TRYCASTTO_OFFSET UNITYSDK_OFFSET(0x11F900B0)
#define NODEGRAPH_VARIANTUNIONCASTER_DOUBLE_TRYCASTTO_OFFSET UNITYSDK_OFFSET(0x11F90030)
#define NODEGRAPH_VARIANTUNIONCASTER_DOUBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x11F900A0)

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnionCaster_Double_TypeDefinitionIndex = 68045;

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
