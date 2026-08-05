#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace MoleMole::CaseTest { class BlackItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CASETEST_GMITEMBLACKLIST_REFRESHBLACKITEMLIST_OFFSET UNITYSDK_OFFSET(0x12CA8610)
#define MOLEMOLE_CASETEST_GMITEMBLACKLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x12CA8650)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int GmItemBlackList_TypeDefinitionIndex = 81292;

	class GmItemBlackList : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::CaseTest::BlackItem*>* blackItemList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_GMITEMBLACKLIST__CTOR_OFFSET))(this);
		}

		::System::Void RefreshBlackItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_GMITEMBLACKLIST_REFRESHBLACKITEMLIST_OFFSET))(this);
		}
	};
}
