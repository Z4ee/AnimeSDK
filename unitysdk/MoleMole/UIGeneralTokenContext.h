#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UITokenShowConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALTOKENCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15A25050)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTokenContext_TypeDefinitionIndex = 48030;

	class UIGeneralTokenContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>* TokenShowConfigs; // 0x28
		::System::Action* TokenExternalClickHandle; // 0x30
		::System::Boolean RegisterItemChanged; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
