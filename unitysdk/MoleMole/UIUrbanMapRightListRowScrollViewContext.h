#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_1685EC66FBD28897;
namespace MoleMole { class UIUrbanMapCollectListRowWidgetContext; }
namespace MoleMole { class UIUrbanMapExploreListRowContext; }
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12E48900)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListRowScrollViewContext_TypeDefinitionIndex = 42036;

	class UIUrbanMapRightListRowScrollViewContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TitleRawText; // 0x28
		::System::String* TitleTextKey; // 0x30
		::Class_0_16E4307DCC41950C_12<::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*>* NormalList; // 0x38
		::Foundation::AssetPath DecoImage; // 0x40
		::Class_0_16E4307DCC41950C_12<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* RewardList; // 0x50
		::System::String* FeatureUnlockTextKey; // 0x58
		::Class_0_16E4307DCC41950C_12<::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapCollectListRowWidgetContext*>*>* TodoList; // 0x60
		::Class_0_16E4307DCC41950C_12<::System::Collections::Generic::IList_1<::MoleMole::UIUrbanMapExploreListRowContext*>*>* ExploreTodoList; // 0x68
		::System::String* DescTextKey; // 0x70
		::System::Boolean HideBg; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
