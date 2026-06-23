#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D83C500)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReflectedFieldNodeWrapper_0_TypeDefinitionIndex = 29246;

	class ReflectedFieldNodeWrapper_0 : public ::System::Object
	{
	public:
		::System::Type* targetType; // 0x10
		::System::String* fieldName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDFIELDNODEWRAPPER_0__CTOR_OFFSET))(this);
		}
	};
}
