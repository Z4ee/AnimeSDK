#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_AUDIOBLOCKUPDATELANGRECORDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19B46BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioBlockUpdateLangRecordItem_TypeDefinitionIndex = 58476;

	class AudioBlockUpdateLangRecordItem : public ::System::Object
	{
	public:
		::System::String* AudioLang; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOBLOCKUPDATELANGRECORDITEM__CTOR_OFFSET))(this);
		}
	};
}
