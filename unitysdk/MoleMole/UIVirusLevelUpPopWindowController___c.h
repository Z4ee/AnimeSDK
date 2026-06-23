#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_845;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14906C50)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14906C90)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__ONUIOPEN_B__7_0_OFFSET UNITYSDK_OFFSET(0x14906CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusLevelUpPopWindowController___c_TypeDefinitionIndex = 47847;

	class UIVirusLevelUpPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIVirusLevelUpPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIVirusLevelUpPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVirusLevelUpPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x453D0);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_845*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_845*>**)Il2CppClass::FromTypeDefinitionIndex(UIVirusLevelUpPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x453D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIOpen_b__7_0(::Class_2_208CC9941471731A_845* ext, ::Class_2_208CC9941471731A_845* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_845*, ::Class_2_208CC9941471731A_845*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__ONUIOPEN_B__7_0_OFFSET))(this, ext, templateExt);
		}
	};
}
