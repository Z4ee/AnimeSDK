#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CDAC16D6E8EB95EB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/EItemType.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_1824EF69C8E376A3;
namespace MoleMole { class UIGeneralTokenContext; }
namespace MoleMole { class UIRoleEquipReplaceWidgetController; }
namespace MoleMole { class UITokenShowConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLEINFODATACONTEXT_CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1457D6C0)
#define MOLEMOLE_UIROLEINFODATACONTEXT_GET_ISFRIENDPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1457D650)
#define MOLEMOLE_UIROLEINFODATACONTEXT_GET_ISPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1457D5E0)
#define MOLEMOLE_UIROLEINFODATACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1457D860)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoDataContext_TypeDefinitionIndex = 73484;

	class UIRoleInfoDataContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIRoleEquipReplaceWidgetController* equipReplaceWidget; // 0x28
		::Class_1_0D6706375CDAAE8C* CurItemData; // 0x30
		::Class_2_1824EF69C8E376A3* CurAvatarData; // 0x38
		::System::Int32 curSelectedSkillIndex; // 0x40
		::System::Single BackgroundPicPos; // 0x44
		::System::Boolean IsNeedFadeInDetail; // 0x48
		::System::Boolean forcePreviewMode; // 0x49
		::Share::EItemType CurItemType; // 0x4A
		::Enum_3_CDAC16D6E8EB95EB _usage; // 0x4C
		::System::Boolean TriggerBySwitchAvatar; // 0x50
		::System::Boolean forceFriendPreviewMode; // 0x51
		::System::Int32 SlotIndex; // 0x54
		::System::Int32 CloseIndex; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPreviewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT_GET_ISPREVIEWMODE_OFFSET))(this);
		}

		::System::Boolean get_IsFriendPreviewMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT_GET_ISFRIENDPREVIEWMODE_OFFSET))(this);
		}

		::MoleMole::UIGeneralTokenContext* Construct(::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>* showList)
		{
			return ((::MoleMole::UIGeneralTokenContext*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFODATACONTEXT_CONSTRUCT_OFFSET))(this, showList);
		}
	};
}
