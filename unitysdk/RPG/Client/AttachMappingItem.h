#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ATTACHMAPPINGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9D46970)

namespace RPG::Client
{
	inline static constexpr unsigned int AttachMappingItem_TypeDefinitionIndex = 63546;

	class AttachMappingItem : public ::System::Object
	{
	public:
		::System::String* ID; // 0x10
		::System::String* AttachPoint; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMAPPINGITEM__CTOR_OFFSET))(this);
		}
	};
}
