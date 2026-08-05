#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ParameterInfo; }

#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E723430)
#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E723470)
#define FLOWCANVAS_NODES_REFLECTEDUNITYEVENT___C__INITFOREVENTTYPE_B__15_0_OFFSET UNITYSDK_OFFSET(0x1E723480)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReflectedUnityEvent___c_TypeDefinitionIndex = 31297;

	class ReflectedUnityEvent___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::Nodes::ReflectedUnityEvent___c** StaticGet___9()
		{
			return (::FlowCanvas::Nodes::ReflectedUnityEvent___c**)Il2CppClass::FromTypeDefinitionIndex(ReflectedUnityEvent___c_TypeDefinitionIndex)->GetStaticField(0x25F20);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectedUnityEvent___c_TypeDefinitionIndex)->GetStaticField(0x25F28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT___C__CTOR_OFFSET))(this);
		}

		::System::Type* _InitForEventType_b__15_0(::System::Reflection::ParameterInfo* p)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDUNITYEVENT___C__INITFOREVENTTYPE_B__15_0_OFFSET))(this, p);
		}
	};
}
