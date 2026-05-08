#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CustomPropertyUIAutoGenParams_CustomPropertyUIType.h"
#include "unitysdk/MoleMole/UIControlReference_UICtrlType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS_GETALLAVATARIDS_OFFSET UNITYSDK_OFFSET(0x17D39150)
#define MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS_ONAVATARIDCHANGED_OFFSET UNITYSDK_OFFSET(0x17D391B0)
#define MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x17D391F0)

namespace MoleMole
{
	inline static constexpr unsigned int CustomPropertyUIAutoGenParams_TypeDefinitionIndex = 61152;

	class CustomPropertyUIAutoGenParams : public ::System::Object
	{
	public:
		::System::String* Fill; // 0x10
		::System::String* EffAnim; // 0x18
		::System::String* ExportDir; // 0x20
		::System::String* BulletFadeOut; // 0x28
		::System::String* BulletFadeIn; // 0x30
		::System::String* PlaceHolderKey_Threshold; // 0x38
		::System::String* PlaceHolderKey_MaxChargePoint; // 0x40
		::System::String* LineEF; // 0x48
		::System::String* RoleHPUILogic_CustomPropertyUI_Path; // 0x50
		::System::String* BulletLoop; // 0x58
		::System::String* Progress; // 0x60
		::System::String* InLevelMainPage_CustomPropertyUI_Path; // 0x68
		::System::String* LineEFParent; // 0x70
		::System::String* CtrlName; // 0x78
		::System::String* PlaceHolderKey_CurChargePoint; // 0x80
		::System::String* PlaceHolderKey_IsEnhance; // 0x88
		::System::String* ProgressFullAnimClip; // 0x90
		::MoleMole::CustomPropertyUIAutoGenParams_CustomPropertyUIType UIType; // 0x98
		::MoleMole::UIControlReference_UICtrlType CtrlType; // 0x9C
		::System::Int32 AvatarID; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Collections::IEnumerable* GetAllAvatarIDs()
		{
			return ((::System::Collections::IEnumerable*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS_GETALLAVATARIDS_OFFSET))();
		}

		::System::Void OnAvatarIdChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS_ONAVATARIDCHANGED_OFFSET))(this);
		}
	};
}
