#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ParameterInfo; }

#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1DBBC0)
#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DBC00)
#define FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT___C__GETMETHODFORDELEGATETYPE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1D1DBC10)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReflectedDelegateEvent___c_TypeDefinitionIndex = 29912;

	class ReflectedDelegateEvent___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectedDelegateEvent___c_TypeDefinitionIndex)->GetStaticField(0x24910);
		}
		static ::FlowCanvas::Nodes::ReflectedDelegateEvent___c** StaticGet___9()
		{
			return (::FlowCanvas::Nodes::ReflectedDelegateEvent___c**)Il2CppClass::FromTypeDefinitionIndex(ReflectedDelegateEvent___c_TypeDefinitionIndex)->GetStaticField(0x24918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT___C__CTOR_OFFSET))(this);
		}

		::System::Type* _GetMethodForDelegateType_b__10_0(::System::Reflection::ParameterInfo* p)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_REFLECTEDDELEGATEEVENT___C__GETMETHODFORDELEGATETYPE_B__10_0_OFFSET))(this, p);
		}
	};
}
