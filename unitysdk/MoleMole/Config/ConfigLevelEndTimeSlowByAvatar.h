#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGLEVELENDTIMESLOWBYAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x177DF110)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelEndTimeSlowByAvatar_TypeDefinitionIndex = 41309;

	class ConfigLevelEndTimeSlowByAvatar : public ::System::Object
	{
	public:
		::System::String* DefaultKey; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* TimeSlowAnimEventIds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELENDTIMESLOWBYAVATAR__CTOR_OFFSET))(this);
		}
	};
}
