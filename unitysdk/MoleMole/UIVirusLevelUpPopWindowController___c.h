#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_485;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A85910)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A85950)
#define MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__ONUIOPEN_B__7_0_OFFSET UNITYSDK_OFFSET(0x15A85960)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusLevelUpPopWindowController___c_TypeDefinitionIndex = 47320;

	class UIVirusLevelUpPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIVirusLevelUpPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIVirusLevelUpPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIVirusLevelUpPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x49310);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_485*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_485*>**)Il2CppClass::FromTypeDefinitionIndex(UIVirusLevelUpPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x49318);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIOpen_b__7_0(::Class_2_208CC9941471731A_485* ext, ::Class_2_208CC9941471731A_485* templateExt)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_485*, ::Class_2_208CC9941471731A_485*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSLEVELUPPOPWINDOWCONTROLLER___C__ONUIOPEN_B__7_0_OFFSET))(this, ext, templateExt);
		}
	};
}
