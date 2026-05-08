#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1D6B384C0B7DC7C3;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EF0CC0)
#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13EF0D00)
#define MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___C__REFRESHTEMPLEINFO_B__6_0_OFFSET UNITYSDK_OFFSET(0x13EF0D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTempleCompWidgetController___c_TypeDefinitionIndex = 58255;

	class UIActivityTempleCompWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_1D6B384C0B7DC7C3*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::Class_1_1D6B384C0B7DC7C3*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityTempleCompWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2EAF0);
		}
		static ::MoleMole::UIActivityTempleCompWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityTempleCompWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityTempleCompWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2EAF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshTempleInfo_b__6_0(::Class_1_1D6B384C0B7DC7C3* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_1D6B384C0B7DC7C3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEMPLECOMPWIDGETCONTROLLER___C__REFRESHTEMPLEINFO_B__6_0_OFFSET))(this, x);
		}
	};
}
