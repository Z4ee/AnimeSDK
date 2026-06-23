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

#define MOLEMOLE_UIROLEINFODATACONTEXT_CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1668DA60)
#define MOLEMOLE_UIROLEINFODATACONTEXT_GET_ISFRIENDPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1668D9F0)
#define MOLEMOLE_UIROLEINFODATACONTEXT_GET_ISPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0x1668D980)
#define MOLEMOLE_UIROLEINFODATACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1668DC60)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoDataContext_TypeDefinitionIndex = 85327;

	class UIRoleInfoDataContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_1824EF69C8E376A3* CurAvatarData; // 0x28
		::MoleMole::UIRoleEquipReplaceWidgetController* equipReplaceWidget; // 0x30
		::Class_1_0D6706375CDAAE8C* CurItemData; // 0x38
		::System::Int32 curSelectedSkillIndex; // 0x40
		::Enum_3_CDAC16D6E8EB95EB _usage; // 0x44
		::System::Single BackgroundPicPos; // 0x48
		::System::Int32 SlotIndex; // 0x4C
		::System::Int32 CloseIndex; // 0x50
		::System::Boolean IsNeedFadeInDetail; // 0x54
		::System::Boolean TriggerBySwitchAvatar; // 0x55
		::Share::EItemType CurItemType; // 0x56
		::System::Boolean forceFriendPreviewMode; // 0x58
		::System::Boolean forcePreviewMode; // 0x59

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
