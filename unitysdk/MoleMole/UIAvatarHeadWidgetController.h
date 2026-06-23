#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPostGirlItemWidgetController.h"

namespace System { class Object; }

#define MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18A52800)
#define MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER_SHOWAVATARHEAD_OFFSET UNITYSDK_OFFSET(0x18A52900)
#define MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A52EB0)
#define MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A52EA0)
#define MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18A52EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarHeadWidgetController_TypeDefinitionIndex = 71891;

	class UIAvatarHeadWidgetController : public ::MoleMole::UIPostGirlItemWidgetController
	{
	public:
		static ::System::Int32* StaticGet_InUseAvatar()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIAvatarHeadWidgetController_TypeDefinitionIndex)->GetStaticField(0x128C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void ShowAvatarHead(::System::Int32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER_SHOWAVATARHEAD_OFFSET))(this, avatarId);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
