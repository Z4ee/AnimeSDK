#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::ExitPerform { class ExitPerformEvent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_EXITPERFORM_EXITPERFORMEVENTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B82B040)

namespace MoleMole::ExitPerform
{
	inline static constexpr unsigned int ExitPerformEventGroup_TypeDefinitionIndex = 61444;

	class ExitPerformEventGroup : public ::System::Object
	{
	public:
		::System::String* groupTag; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::ExitPerform::ExitPerformEvent*>* GroupEvents; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXITPERFORM_EXITPERFORMEVENTGROUP__CTOR_OFFSET))(this);
		}
	};
}
