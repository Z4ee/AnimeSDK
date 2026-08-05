#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class TweenCallback; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17323BB0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17323BF0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__INITPLAYERPROPERTY_B__42_1_OFFSET UNITYSDK_OFFSET(0x17323C00)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__UPDATESTANIMAANIMMAXCURSE_B__95_1_OFFSET UNITYSDK_OFFSET(0x17323C10)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__UPDATESTANIMAANIMMAXCURSE_B__95_2_OFFSET UNITYSDK_OFFSET(0x17323C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController___c_TypeDefinitionIndex = 83700;

	class UIHollowMainBottomWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__42_1()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowMainBottomWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36D00);
		}
		static ::DG::Tweening::TweenCallback** StaticGet___9__95_2()
		{
			return (::DG::Tweening::TweenCallback**)Il2CppClass::FromTypeDefinitionIndex(UIHollowMainBottomWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36D08);
		}
		static ::DG::Tweening::TweenCallback** StaticGet___9__95_1()
		{
			return (::DG::Tweening::TweenCallback**)Il2CppClass::FromTypeDefinitionIndex(UIHollowMainBottomWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36D10);
		}
		static ::MoleMole::UIHollowMainBottomWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowMainBottomWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowMainBottomWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36D18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitPlayerProperty_b__42_1(::System::Boolean s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__INITPLAYERPROPERTY_B__42_1_OFFSET))(this, s);
		}

		::System::Void _UpdateStanimaAnimMaxCurse_b__95_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__UPDATESTANIMAANIMMAXCURSE_B__95_1_OFFSET))(this);
		}

		::System::Void _UpdateStanimaAnimMaxCurse_b__95_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER___C__UPDATESTANIMAANIMMAXCURSE_B__95_2_OFFSET))(this);
		}
	};
}
