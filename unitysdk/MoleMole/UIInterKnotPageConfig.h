#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInterKnotPageConfig_MainCityQuestType.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole { class UIInterKnotPageConfig_MainCityQuestTypeRowConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINTERKNOTPAGECONFIG_GETCOLORCONFIGBYTYPE_OFFSET UNITYSDK_OFFSET(0x14B7BDF0)
#define MOLEMOLE_UIINTERKNOTPAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14B7BF70)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPageConfig_TypeDefinitionIndex = 62788;

	class UIInterKnotPageConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIInterKnotPageConfig_MainCityQuestType, ::MoleMole::UIInterKnotPageConfig_MainCityQuestTypeRowConfig*>* rowColorDic; // 0x58
		::System::Collections::Generic::List_1<::System::Single>* EmptyImageHeight; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* EmptyImageQueue; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPAGECONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::UIInterKnotPageConfig_MainCityQuestTypeRowConfig* GetColorConfigByType(::MoleMole::UIInterKnotPageConfig_MainCityQuestType type)
		{
			return ((::MoleMole::UIInterKnotPageConfig_MainCityQuestTypeRowConfig*(*)(::PVOID, ::MoleMole::UIInterKnotPageConfig_MainCityQuestType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPAGECONFIG_GETCOLORCONFIGBYTYPE_OFFSET))(this, type);
		}
	};
}
