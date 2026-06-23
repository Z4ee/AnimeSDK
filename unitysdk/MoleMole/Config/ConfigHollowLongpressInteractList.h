#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowInteractBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWLONGPRESSINTERACTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A34B950)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowLongpressInteractList_TypeDefinitionIndex = 44234;

	class ConfigHollowLongpressInteractList : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigHollowInteractBase*>* Interacts; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWLONGPRESSINTERACTLIST__CTOR_OFFSET))(this);
		}
	};
}
