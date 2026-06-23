#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9AD709374DC108D7;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x146B6C20)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__CLEARLASTTABMANUALNEW_B__45_0_OFFSET UNITYSDK_OFFSET(0x146B6DF0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__CLEARMANUALNEWS_B__34_0_OFFSET UNITYSDK_OFFSET(0x146B6D30)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x146B6C60)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__GETLATESTSEASON_B__48_0_OFFSET UNITYSDK_OFFSET(0x146B6EB0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__ONMISSIONITEMCLICKHANDLE_B__29_0_OFFSET UNITYSDK_OFFSET(0x146B6C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotMissionWidgetController___c_TypeDefinitionIndex = 84826;

	class UIInterKnotMissionWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__29_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A3D0);
		}
		static ::System::Action** StaticGet___9__45_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A3D8);
		}
		static ::System::Action** StaticGet___9__34_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A3E0);
		}
		static ::MoleMole::UIInterKnotMissionWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInterKnotMissionWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A3E8);
		}
		static ::System::Comparison_1<::Class_1_9AD709374DC108D7*>** StaticGet___9__48_0()
		{
			return (::System::Comparison_1<::Class_1_9AD709374DC108D7*>**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3A3F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnMissionItemClickHandle_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__ONMISSIONITEMCLICKHANDLE_B__29_0_OFFSET))(this);
		}

		::System::Void _ClearManualNews_b__34_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__CLEARMANUALNEWS_B__34_0_OFFSET))(this);
		}

		::System::Void _ClearLastTabManualNew_b__45_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__CLEARLASTTABMANUALNEW_B__45_0_OFFSET))(this);
		}

		::System::Int32 _GetLatestSeason_b__48_0(::Class_1_9AD709374DC108D7* a, ::Class_1_9AD709374DC108D7* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_9AD709374DC108D7*, ::Class_1_9AD709374DC108D7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__GETLATESTSEASON_B__48_0_OFFSET))(this, a, b);
		}
	};
}
