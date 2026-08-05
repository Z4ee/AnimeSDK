#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_714;
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1690B6B0)
#define MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1690B6F0)
#define MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__GET_REMAINCOST_B__16_0_OFFSET UNITYSDK_OFFSET(0x1690B720)
#define MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__ONCLOSECLEARNEW_B__18_0_OFFSET UNITYSDK_OFFSET(0x1690B740)
#define MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__REFRESHCOST_B__9_0_OFFSET UNITYSDK_OFFSET(0x1690B700)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPassiveSkillSelectPopWindowController___c_TypeDefinitionIndex = 43302;

	class UIRidusGotBooPassiveSkillSelectPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::Class_2_208CC9941471731A_714*, ::System::Int32>** StaticGet___9__18_0()
		{
			return (::System::Converter_2<::Class_2_208CC9941471731A_714*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooPassiveSkillSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x49280);
		}
		static ::MoleMole::UIRidusGotBooPassiveSkillSelectPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIRidusGotBooPassiveSkillSelectPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooPassiveSkillSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x49288);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_714*, ::System::Int32>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_714*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooPassiveSkillSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x49290);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_714*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_714*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIRidusGotBooPassiveSkillSelectPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x49298);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshCost_b__9_0(::Class_2_208CC9941471731A_714* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_714*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__REFRESHCOST_B__9_0_OFFSET))(this, x);
		}

		::System::Int32 _get_RemainCost_b__16_0(::Class_2_208CC9941471731A_714* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_714*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__GET_REMAINCOST_B__16_0_OFFSET))(this, x);
		}

		::System::Int32 _OnCloseClearNew_b__18_0(::Class_2_208CC9941471731A_714* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_714*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPASSIVESKILLSELECTPOPWINDOWCONTROLLER___C__ONCLOSECLEARNEW_B__18_0_OFFSET))(this, x);
		}
	};
}
