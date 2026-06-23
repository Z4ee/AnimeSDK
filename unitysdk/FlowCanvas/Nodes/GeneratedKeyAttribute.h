#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define FLOWCANVAS_NODES_GENERATEDKEYATTRIBUTE_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1D531EB0)
#define FLOWCANVAS_NODES_GENERATEDKEYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D531EA0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int GeneratedKeyAttribute_TypeDefinitionIndex = 30650;

	class GeneratedKeyAttribute : public ::System::Attribute
	{
	public:
		::System::String* memberString; // 0x10

		::System::Void _ctor(::System::String* memberName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GENERATEDKEYATTRIBUTE__CTOR_OFFSET))(this, memberName);
		}

		::System::String* get_MemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GENERATEDKEYATTRIBUTE_GET_MEMBERNAME_OFFSET))(this);
		}
	};
}
