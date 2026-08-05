#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CustomPropertyUIAutoGenParams_CustomPropertyUIType.h"
#include "unitysdk/MoleMole/UIControlReference_UICtrlType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerable; }

#define MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS_GETALLAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1A0049A0)
#define MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS_ONAVATARIDCHANGED_OFFSET UNITYSDK_OFFSET(0x1A004A00)
#define MOLEMOLE_CUSTOMPROPERTYUIAUTOGENPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A004A40)

namespace MoleMole
{
	inline static constexpr unsigned int CustomPropertyUIAutoGenParams_TypeDefinitionIndex = 69085;

	class CustomPropertyUIAutoGenParams : public ::System::Object
	{
	public:
		::System::String* LineEFParent; // 0x10
		::System::String* PlaceHolderKey_Threshold; // 0x18
		::System::String* CtrlName; // 0x20
		::System::String* EffAnim; // 0x28
		::System::String* PlaceHolderKey_CurChargePoint; // 0x30
		::System::String* LineEF; // 0x38
		::System::String* BulletFadeIn; // 0x40
		::System::String* PlaceHolderKey_MaxChargePoint; // 0x48
		::System::String* RoleHPUILogic_CustomPropertyUI_Path; // 0x50
		::System::String* BulletFadeOut; // 0x58
		::System::String* PlaceHolderKey_IsEnhance; // 0x60
		::System::String* BulletLoop; // 0x68
		::System::String* ExportDir; // 0x70
		::System::String* ProgressFullAnimClip; // 0x78
		::System::String* Fill; // 0x80
		::System::String* InLevelMainPage_CustomPropertyUI_Path; // 0x88
		::System::String* Progress; // 0x90
		::MoleMole::UIControlReference_UICtrlType CtrlType; // 0x98
		::System::Int32 AvatarID; // 0x9C
		::MoleMole::CustomPropertyUIAutoGenParams_CustomPropertyUIType UIType; // 0xA0

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
