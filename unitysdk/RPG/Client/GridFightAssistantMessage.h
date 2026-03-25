#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTASSISTANTMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x97CB9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAssistantMessage_TypeDefinitionIndex = 52270;

	class GridFightAssistantMessage : public ::System::Object
	{
	public:
		::System::String* Msg; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTASSISTANTMESSAGE__CTOR_OFFSET))(this);
		}
	};
}
