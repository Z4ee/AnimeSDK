#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_315;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHOLLOWSPECIALAREAWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1961B120)
#define MOLEMOLE_UIHOLLOWSPECIALAREAWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1961B160)
#define MOLEMOLE_UIHOLLOWSPECIALAREAWIDGETCONTROLLER___C__REFRESHCONFIGDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0x1961B170)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowSpecialAreaWidgetController___c_TypeDefinitionIndex = 47912;

	class UIHollowSpecialAreaWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_208CC9941471731A_315*, ::System::Int32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_315*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowSpecialAreaWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36D80);
		}
		static ::MoleMole::UIHollowSpecialAreaWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowSpecialAreaWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowSpecialAreaWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36D88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshConfigData_b__6_0(::Class_2_208CC9941471731A_315* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_315*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAWIDGETCONTROLLER___C__REFRESHCONFIGDATA_B__6_0_OFFSET))(this, x);
		}
	};
}
