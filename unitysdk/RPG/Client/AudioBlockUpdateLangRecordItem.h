#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_AUDIOBLOCKUPDATELANGRECORDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB3423A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioBlockUpdateLangRecordItem_TypeDefinitionIndex = 57218;

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
