#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/System/Object.h"

#define NODEGRAPH_VARIANTUNIONCASTER_BOOL_CASTFROM_1_OFFSET UNITYSDK_OFFSET(0xD95C540)
#define NODEGRAPH_VARIANTUNIONCASTER_BOOL_CASTFROM_OFFSET UNITYSDK_OFFSET(0xD95C410)
#define NODEGRAPH_VARIANTUNIONCASTER_BOOL_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_BOOLEAN__TRYCASTTO_OFFSET UNITYSDK_OFFSET(0xD95C7A0)
#define NODEGRAPH_VARIANTUNIONCASTER_BOOL_TRYCASTTO_OFFSET UNITYSDK_OFFSET(0xD95C720)
#define NODEGRAPH_VARIANTUNIONCASTER_BOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xD95C790)

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnionCaster_Bool_TypeDefinitionIndex = 59349;

	class VariantUnionCaster_Bool : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_BOOL__CTOR_OFFSET))(this);
		}

		::NodeGraph::VariantUnion CastFrom(::System::Boolean value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_BOOL_CASTFROM_OFFSET))(this, value);
		}

		::NodeGraph::VariantUnion CastFrom_1(::System::Object* value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_BOOL_CASTFROM_1_OFFSET))(this, value);
		}

		::System::Boolean TryCastTo(::NodeGraph::VariantUnion& value, ::System::Boolean& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::Boolean&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_BOOL_TRYCASTTO_OFFSET))(this, value, v);
		}

		::System::Boolean NodeGraph_IVariantUnionCaster_System_Boolean__TryCastTo(::NodeGraph::VariantUnion& value, ::System::Boolean& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::Boolean&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_BOOL_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_BOOLEAN__TRYCASTTO_OFFSET))(this, value, v);
		}
	};
}
