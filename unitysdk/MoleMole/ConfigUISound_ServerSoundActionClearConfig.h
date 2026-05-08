#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUISOUND_SERVERSOUNDACTIONCLEARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17D39120)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUISound_ServerSoundActionClearConfig_TypeDefinitionIndex = 75887;

	class ConfigUISound_ServerSoundActionClearConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* soundActionKeys; // 0x10
		::System::String* clearSoundActionKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND_SERVERSOUNDACTIONCLEARCONFIG__CTOR_OFFSET))(this);
		}
	};
}
