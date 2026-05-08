#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class ParameterInfo; }

#define FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE___C__DISPLAYCLASS1_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0x1B7E2060)
#define FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E2050)

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedMethodNode___c__DisplayClass1_0_TypeDefinitionIndex = 27025;

	class ReflectedMethodNode___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Reflection::ParameterInfo*>* parameters; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Create_b__0(::System::Reflection::ParameterInfo* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDMETHODNODE___C__DISPLAYCLASS1_0__CREATE_B__0_OFFSET))(this, p);
		}
	};
}
