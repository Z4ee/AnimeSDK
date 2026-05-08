#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_140;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHOLLOWSPECIALAREAWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FACA30)
#define MOLEMOLE_UIHOLLOWSPECIALAREAWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FACA70)
#define MOLEMOLE_UIHOLLOWSPECIALAREAWIDGETCONTROLLER___C__REFRESHCONFIGDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0x15FACA80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowSpecialAreaWidgetController___c_TypeDefinitionIndex = 75866;

	class UIHollowSpecialAreaWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHollowSpecialAreaWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowSpecialAreaWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowSpecialAreaWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x328D0);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_140*, ::System::Int32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_140*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowSpecialAreaWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x328D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshConfigData_b__6_0(::Class_2_208CC9941471731A_140* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_140*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSPECIALAREAWIDGETCONTROLLER___C__REFRESHCONFIGDATA_B__6_0_OFFSET))(this, x);
		}
	};
}
