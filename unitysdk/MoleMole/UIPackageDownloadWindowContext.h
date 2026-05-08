#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_UIPACKAGEDOWNLOADWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x147E2750)

namespace MoleMole
{
	inline static constexpr unsigned int UIPackageDownloadWindowContext_TypeDefinitionIndex = 49077;

	class UIPackageDownloadWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::System::Int32>* downloadTitles; // 0x28
		::System::Action* CancelAndDeleteCallback; // 0x30
		::System::Action* SuccessCallback; // 0x38
		::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* downloadPackages; // 0x40
		::System::Action* CancelCallback; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPACKAGEDOWNLOADWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
