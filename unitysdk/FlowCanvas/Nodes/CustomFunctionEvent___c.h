#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion { class DynamicParameterDefinition; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0EB560)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0EB5A0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__GET_PARAMETERTYPES_B__15_0_OFFSET UNITYSDK_OFFSET(0x1B0EB5B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomFunctionEvent___c_TypeDefinitionIndex = 26675;

	class CustomFunctionEvent___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::Nodes::CustomFunctionEvent___c** StaticGet___9()
		{
			return (::FlowCanvas::Nodes::CustomFunctionEvent___c**)Il2CppClass::FromTypeDefinitionIndex(CustomFunctionEvent___c_TypeDefinitionIndex)->GetStaticField(0x1F9F0);
		}
		static ::System::Func_2<::ParadoxNotion::DynamicParameterDefinition*, ::System::Type*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::ParadoxNotion::DynamicParameterDefinition*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(CustomFunctionEvent___c_TypeDefinitionIndex)->GetStaticField(0x1F9F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__CTOR_OFFSET))(this);
		}

		::System::Type* _get_parameterTypes_b__15_0(::ParadoxNotion::DynamicParameterDefinition* p)
		{
			return ((::System::Type*(*)(::PVOID, ::ParadoxNotion::DynamicParameterDefinition*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT___C__GET_PARAMETERTYPES_B__15_0_OFFSET))(this, p);
		}
	};
}
