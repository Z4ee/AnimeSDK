#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NODEGRAPH_VARIANTUNIONCASTER_STRING_CASTFROM_1_OFFSET UNITYSDK_OFFSET(0xE962090)
#define NODEGRAPH_VARIANTUNIONCASTER_STRING_CASTFROM_OFFSET UNITYSDK_OFFSET(0xE961F80)
#define NODEGRAPH_VARIANTUNIONCASTER_STRING_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_STRING__TRYCASTTO_OFFSET UNITYSDK_OFFSET(0xE9622C0)
#define NODEGRAPH_VARIANTUNIONCASTER_STRING_TRYCASTTO_OFFSET UNITYSDK_OFFSET(0xE962240)
#define NODEGRAPH_VARIANTUNIONCASTER_STRING__CTOR_OFFSET UNITYSDK_OFFSET(0xE9622B0)

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnionCaster_String_TypeDefinitionIndex = 84535;

	class VariantUnionCaster_String : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_STRING__CTOR_OFFSET))(this);
		}

		::NodeGraph::VariantUnion CastFrom(::System::String* value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_STRING_CASTFROM_OFFSET))(this, value);
		}

		::NodeGraph::VariantUnion CastFrom_1(::System::Object* value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_STRING_CASTFROM_1_OFFSET))(this, value);
		}

		::System::Boolean TryCastTo(::NodeGraph::VariantUnion& value, ::System::String*& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::String*&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_STRING_TRYCASTTO_OFFSET))(this, value, v);
		}

		::System::Boolean NodeGraph_IVariantUnionCaster_System_String__TryCastTo(::NodeGraph::VariantUnion& value, ::System::String*& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::String*&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_STRING_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_STRING__TRYCASTTO_OFFSET))(this, value, v);
		}
	};
}
