#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowHandler; }
namespace FlowCanvas { class ValueHandlerObject; }

#define FLOWCANVAS_BINDERCONNECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFBFA80)
#define FLOWCANVAS_BINDERCONNECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFBFAC0)
#define FLOWCANVAS_BINDERCONNECTION___C__GATHERANDVALIDATESOURCEPORT_B__27_0_OFFSET UNITYSDK_OFFSET(0x1AFBFAD0)
#define FLOWCANVAS_BINDERCONNECTION___C__GATHERANDVALIDATETARGETPORT_B__28_0_OFFSET UNITYSDK_OFFSET(0x1AFBFB20)

namespace FlowCanvas
{
	inline static constexpr unsigned int BinderConnection___c_TypeDefinitionIndex = 27425;

	class BinderConnection___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::BinderConnection___c** StaticGet___9()
		{
			return (::FlowCanvas::BinderConnection___c**)Il2CppClass::FromTypeDefinitionIndex(BinderConnection___c_TypeDefinitionIndex)->GetStaticField(0x20630);
		}
		static ::FlowCanvas::ValueHandlerObject** StaticGet___9__27_0()
		{
			return (::FlowCanvas::ValueHandlerObject**)Il2CppClass::FromTypeDefinitionIndex(BinderConnection___c_TypeDefinitionIndex)->GetStaticField(0x20638);
		}
		static ::FlowCanvas::FlowHandler** StaticGet___9__28_0()
		{
			return (::FlowCanvas::FlowHandler**)Il2CppClass::FromTypeDefinitionIndex(BinderConnection___c_TypeDefinitionIndex)->GetStaticField(0x20640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION___C__CTOR_OFFSET))(this);
		}

		::System::Object* _GatherAndValidateSourcePort_b__27_0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION___C__GATHERANDVALIDATESOURCEPORT_B__27_0_OFFSET))(this);
		}

		::System::Void _GatherAndValidateTargetPort_b__28_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_BINDERCONNECTION___C__GATHERANDVALIDATETARGETPORT_B__28_0_OFFSET))(this, f);
		}
	};
}
