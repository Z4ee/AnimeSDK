#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C6ECC390B9EFAEB9_Struct_2_680BF1744D60EED9_2.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15145760)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoShopTipsPopWindowContext_TypeDefinitionIndex = 69605;

	class UIVideoShopTipsPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* title; // 0x28
		::System::Collections::Generic::List_1<::Class_2_C6ECC390B9EFAEB9_Struct_2_680BF1744D60EED9_2>* conversionMaterialDataList; // 0x30
		::System::String* descKey; // 0x38
		::System::Collections::Generic::List_1<::Class_2_C6ECC390B9EFAEB9_Struct_2_680BF1744D60EED9_2>* conversionResultMaterialDataList; // 0x40
		::System::String* okBtnTextKey; // 0x48
		::System::Action* OnGoToCompose; // 0x50
		::System::Action* OnConversion; // 0x58
		::System::Int32 targetId; // 0x60
		::System::Int32 costNum; // 0x64
		::System::Int32 needTargetCount; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
