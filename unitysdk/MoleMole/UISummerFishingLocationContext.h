#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_33;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUMMERFISHINGLOCATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x122BA5E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishingLocationContext_TypeDefinitionIndex = 80081;

	class UISummerFishingLocationContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_33* config; // 0x28
		::System::Action_1<::System::Int32>* clickAction; // 0x30
		::System::Int32 index; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGLOCATIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
