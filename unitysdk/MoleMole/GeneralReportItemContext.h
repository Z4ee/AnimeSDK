#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_GENERALREPORTITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16E59430)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralReportItemContext_TypeDefinitionIndex = 51072;

	class GeneralReportItemContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* onSelect; // 0x28
		::System::String* content; // 0x30
		::System::Int32 index; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALREPORTITEMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
