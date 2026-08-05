#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController_MissionTipData; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x183BB5E0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x183BB620)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__REALPLAY_B__133_0_OFFSET UNITYSDK_OFFSET(0x183BB630)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c_TypeDefinitionIndex = 91178;

	class UIMissionTipsContainerWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMissionTipsContainerWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMissionTipsContainerWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMissionTipsContainerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36E50);
		}
		static ::System::Comparison_1<::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData*>** StaticGet___9__133_0()
		{
			return (::System::Comparison_1<::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData*>**)Il2CppClass::FromTypeDefinitionIndex(UIMissionTipsContainerWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36E58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RealPlay_b__133_0(::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* a, ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData*, ::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__REALPLAY_B__133_0_OFFSET))(this, a, b);
		}
	};
}
