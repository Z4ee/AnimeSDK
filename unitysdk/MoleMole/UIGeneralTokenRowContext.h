#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UITokenShowConfig; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALTOKENROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x149E56B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTokenRowContext_TypeDefinitionIndex = 39052;

	class UIGeneralTokenRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UITokenShowConfig* TokenShowConfig; // 0x28
		::System::Action* ExternalClickHandle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
