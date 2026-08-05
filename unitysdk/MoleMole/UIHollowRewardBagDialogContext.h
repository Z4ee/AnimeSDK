#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0D6706375CDAAE8C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x199D8FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRewardBagDialogContext_TypeDefinitionIndex = 77379;

	class UIHollowRewardBagDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* customTitleEn; // 0x28
		::System::String* customTitle; // 0x30
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* customItemList; // 0x38
		::System::Boolean useCustomInfo; // 0x40
		::System::Boolean skipAnim; // 0x41
		::System::Single scrollPos; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
