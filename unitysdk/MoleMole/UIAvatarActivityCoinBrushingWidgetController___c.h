#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_472679C84451629A_3;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIAVATARACTIVITYCOINBRUSHINGWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EFB990)
#define MOLEMOLE_UIAVATARACTIVITYCOINBRUSHINGWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13EFB9D0)
#define MOLEMOLE_UIAVATARACTIVITYCOINBRUSHINGWIDGETCONTROLLER___C__REFRESHVIEW_B__10_1_OFFSET UNITYSDK_OFFSET(0x13EFB9E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarActivityCoinBrushingWidgetController___c_TypeDefinitionIndex = 52666;

	class UIAvatarActivityCoinBrushingWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_3_472679C84451629A_3*>** StaticGet___9__10_1()
		{
			return (::System::Action_1<::Class_3_472679C84451629A_3*>**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarActivityCoinBrushingWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2EB70);
		}
		static ::MoleMole::UIAvatarActivityCoinBrushingWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAvatarActivityCoinBrushingWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAvatarActivityCoinBrushingWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2EB78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYCOINBRUSHINGWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYCOINBRUSHINGWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__10_1(::Class_3_472679C84451629A_3* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_472679C84451629A_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARACTIVITYCOINBRUSHINGWIDGETCONTROLLER___C__REFRESHVIEW_B__10_1_OFFSET))(this, rsp);
		}
	};
}
