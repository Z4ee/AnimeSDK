#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x181BC5F0)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x181BC630)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___C__ONUIINIT_B__2_7_OFFSET UNITYSDK_OFFSET(0x181BC640)

namespace MoleMole
{
	inline static constexpr unsigned int UIAddFriendWidgetController___c_TypeDefinitionIndex = 62618;

	class UIAddFriendWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_57F7F2BF8C55D6B6*>** StaticGet___9__2_7()
		{
			return (::System::Action_1<::Class_1_57F7F2BF8C55D6B6*>**)Il2CppClass::FromTypeDefinitionIndex(UIAddFriendWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x412F0);
		}
		static ::MoleMole::UIAddFriendWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAddFriendWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAddFriendWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x412F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_7(::Class_1_57F7F2BF8C55D6B6* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___C__ONUIINIT_B__2_7_OFFSET))(this, info);
		}
	};
}
