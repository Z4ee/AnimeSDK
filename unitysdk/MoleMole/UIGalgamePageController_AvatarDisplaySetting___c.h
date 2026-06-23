#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x175DC5F0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING___C__CTOR_OFFSET UNITYSDK_OFFSET(0x175DC630)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING___C__INITTEXTURESHEETUSING_B__62_0_OFFSET UNITYSDK_OFFSET(0x175DC640)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController_AvatarDisplaySetting___c_TypeDefinitionIndex = 54901;

	class UIGalgamePageController_AvatarDisplaySetting___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGalgamePageController_AvatarDisplaySetting___c** StaticGet___9()
		{
			return (::MoleMole::UIGalgamePageController_AvatarDisplaySetting___c**)Il2CppClass::FromTypeDefinitionIndex(UIGalgamePageController_AvatarDisplaySetting___c_TypeDefinitionIndex)->GetStaticField(0x4C060);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__62_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIGalgamePageController_AvatarDisplaySetting___c_TypeDefinitionIndex)->GetStaticField(0x4C068);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING___C__CTOR_OFFSET))(this);
		}

		::System::String* _InitTextureSheetUsing_b__62_0(::System::String* s)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER_AVATARDISPLAYSETTING___C__INITTEXTURESHEETUSING_B__62_0_OFFSET))(this, s);
		}
	};
}
