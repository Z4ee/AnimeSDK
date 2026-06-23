#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::ExitPerform { class KillTypeExitPerformEventGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_EXITPERFORM_EXITPERFORMEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x161CB090)

namespace MoleMole::ExitPerform
{
	inline static constexpr unsigned int ExitPerformEventConfig_TypeDefinitionIndex = 53222;

	class ExitPerformEventConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ExitPerform::KillTypeExitPerformEventGroup*>* configGroups; // 0x10
		::System::String* tag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITPERFORM_EXITPERFORMEVENTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
