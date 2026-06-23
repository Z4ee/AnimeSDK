#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14BD9EE0)
#define MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD9F20)
#define MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__INITSORT_B__4_0_OFFSET UNITYSDK_OFFSET(0x14BD9F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIBackendRelicCollectWidgetController___c_TypeDefinitionIndex = 58285;

	class UIBackendRelicCollectWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIBackendRelicCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EFF0);
		}
		static ::MoleMole::UIBackendRelicCollectWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIBackendRelicCollectWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBackendRelicCollectWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EFF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::String* _InitSort_b__4_0(::System::String* filter)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBACKENDRELICCOLLECTWIDGETCONTROLLER___C__INITSORT_B__4_0_OFFSET))(this, filter);
		}
	};
}
