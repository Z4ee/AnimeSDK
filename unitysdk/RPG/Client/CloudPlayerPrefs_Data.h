#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CLOUDPLAYERPREFS_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCC40350)

namespace RPG::Client
{
	inline static constexpr unsigned int CloudPlayerPrefs_Data_TypeDefinitionIndex = 59427;

	class CloudPlayerPrefs_Data : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IntDicts; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FloatDicts; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* StringDicts; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOUDPLAYERPREFS_DATA__CTOR_OFFSET))(this);
		}
	};
}
