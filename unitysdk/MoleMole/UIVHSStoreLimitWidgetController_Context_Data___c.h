#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DDDE40)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDDE80)
#define MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA___C__GET_CURTAGWITHOUTHIDING_B__13_0_OFFSET UNITYSDK_OFFSET(0x14DDDE90)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreLimitWidgetController_Context_Data___c_TypeDefinitionIndex = 74353;

	class UIVHSStoreLimitWidgetController_Context_Data___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIVHSStoreLimitWidgetController_Context_Data___c** StaticGet___9()
		{
			return (::MoleMole::UIVHSStoreLimitWidgetController_Context_Data___c**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreLimitWidgetController_Context_Data___c_TypeDefinitionIndex)->GetStaticField(0x44A50);
		}
		static ::System::Func_3<::System::UInt32, ::System::Int32, ::System::Boolean>** StaticGet___9__13_0()
		{
			return (::System::Func_3<::System::UInt32, ::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreLimitWidgetController_Context_Data___c_TypeDefinitionIndex)->GetStaticField(0x44A58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_CurTagWithoutHiding_b__13_0(::System::UInt32 value, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELIMITWIDGETCONTROLLER_CONTEXT_DATA___C__GET_CURTAGWITHOUTHIDING_B__13_0_OFFSET))(this, value, index);
		}
	};
}
