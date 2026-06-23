#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_155;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1666F080)
#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666F0C0)
#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__GETSORTEDQUESTLIST_B__47_0_OFFSET UNITYSDK_OFFSET(0x1666F120)
#define MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__INITSTAGEDATA_B__42_0_OFFSET UNITYSDK_OFFSET(0x1666F0D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStageRewardPopWindowController___c_TypeDefinitionIndex = 62177;

	class UIRABStageRewardPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_155*>** StaticGet___9__42_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_155*>**)Il2CppClass::FromTypeDefinitionIndex(UIRABStageRewardPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F420);
		}
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__47_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIRABStageRewardPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F428);
		}
		static ::MoleMole::UIRABStageRewardPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIRABStageRewardPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIRABStageRewardPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitStageData_b__42_0(::Class_2_208CC9941471731A_155* a, ::Class_2_208CC9941471731A_155* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_155*, ::Class_2_208CC9941471731A_155*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__INITSTAGEDATA_B__42_0_OFFSET))(this, a, b);
		}

		::System::Int32 _GetSortedQuestList_b__47_0(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEREWARDPOPWINDOWCONTROLLER___C__GETSORTEDQUESTLIST_B__47_0_OFFSET))(this, a, b);
		}
	};
}
