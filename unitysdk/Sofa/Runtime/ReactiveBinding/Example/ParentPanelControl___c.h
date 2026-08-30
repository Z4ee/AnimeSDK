#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BEC5D8EEC9856D94;
class Class_1_F9FBCC956DFCF137_3;
namespace System { template <typename T1, typename T2> class Func_2; }

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PARENTPANELCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE928E10)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PARENTPANELCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE928E50)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PARENTPANELCONTROL___C___BINDING_B__3_0_OFFSET UNITYSDK_OFFSET(0xE928E60)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int ParentPanelControl___c_TypeDefinitionIndex = 50387;

	class ParentPanelControl___c : public ::System::Object
	{
	public:
		static ::Sofa::Runtime::ReactiveBinding::Example::ParentPanelControl___c** StaticGet___9()
		{
			return (::Sofa::Runtime::ReactiveBinding::Example::ParentPanelControl___c**)Il2CppClass::FromTypeDefinitionIndex(ParentPanelControl___c_TypeDefinitionIndex)->GetStaticField(0x45910);
		}
		static ::System::Func_2<::Class_1_F9FBCC956DFCF137_3*, ::Class_1_BEC5D8EEC9856D94*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::Class_1_F9FBCC956DFCF137_3*, ::Class_1_BEC5D8EEC9856D94*>**)Il2CppClass::FromTypeDefinitionIndex(ParentPanelControl___c_TypeDefinitionIndex)->GetStaticField(0x45918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PARENTPANELCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PARENTPANELCONTROL___C__CTOR_OFFSET))(this);
		}

		::Class_1_BEC5D8EEC9856D94* __Binding_b__3_0(::Class_1_F9FBCC956DFCF137_3* a1)
		{
			return ((::Class_1_BEC5D8EEC9856D94*(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_3*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_PARENTPANELCONTROL___C___BINDING_B__3_0_OFFSET))(this, a1);
		}
	};
}
