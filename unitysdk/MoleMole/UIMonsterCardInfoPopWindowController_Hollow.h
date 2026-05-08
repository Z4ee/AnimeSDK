#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonsterCardInfoPopWindowController.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW_ADDMONSTERIDTOLISTBYCFGID_OFFSET UNITYSDK_OFFSET(0x147CBDA0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW_GETBOSSLEVEL_OFFSET UNITYSDK_OFFSET(0x147CC1F0)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW_GETHOLLOWMONSTERIDLIST_OFFSET UNITYSDK_OFFSET(0x147CB420)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW_GETLEVELSTRBYID_OFFSET UNITYSDK_OFFSET(0x147CC150)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW_UPDATEBOSSCFGLIST_OFFSET UNITYSDK_OFFSET(0x147CB270)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x147CC360)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW___BASE_GETBOSSLEVEL_OFFSET UNITYSDK_OFFSET(0x147CC400)
#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW___BASE_UPDATEBOSSCFGLIST_OFFSET UNITYSDK_OFFSET(0x147CC490)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardInfoPopWindowController_Hollow_TypeDefinitionIndex = 41333;

	class UIMonsterCardInfoPopWindowController_Hollow : public ::MoleMole::UIMonsterCardInfoPopWindowController
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* HollowMonsterIDToAppearLevelDict; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW__CTOR_OFFSET))(this);
		}

		::System::Void UpdateBossCfgList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW_UPDATEBOSSCFGLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetHollowMonsterIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW_GETHOLLOWMONSTERIDLIST_OFFSET))(this);
		}

		::System::String* GetLevelStrByID(::System::Int32 id)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW_GETLEVELSTRBYID_OFFSET))(this, id);
		}

		::System::Void AddMonsterIDToListByCfgID(::System::Int32 abyssMonsterConfigID, ::System::Collections::Generic::List_1<::System::Int32>*& idList, ::System::String* format, ::System::Int32 level, ::System::Collections::Generic::List_1<::System::Int32>*& cardIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW_ADDMONSTERIDTOLISTBYCFGID_OFFSET))(this, abyssMonsterConfigID, idList, format, level, cardIDList);
		}

		::System::Int32 GetBossLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW_GETBOSSLEVEL_OFFSET))(this);
		}

		::System::Int32 __base_GetBossLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW___BASE_GETBOSSLEVEL_OFFSET))(this);
		}

		::System::Void __base_UpdateBossCfgList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_HOLLOW___BASE_UPDATEBOSSCFGLIST_OFFSET))(this);
		}
	};
}
