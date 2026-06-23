#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTGROUP_GET_FIRSTANIMEVENT_OFFSET UNITYSDK_OFFSET(0x12B38250)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x12B382E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAnimEventGroup_TypeDefinitionIndex = 54772;

	class ConfigEntityAnimEventGroup : public ::System::Object
	{
	public:
		::System::String* DescribTag; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* AnimEvents; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTGROUP__CTOR_OFFSET))(this);
		}

		::System::String* get_FirstAnimEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTGROUP_GET_FIRSTANIMEVENT_OFFSET))(this);
		}
	};
}
