#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PROP_HINTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA0A0090)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int HintInfo_TypeDefinitionIndex = 63971;

	class HintInfo : public ::System::Object
	{
	public:
		::System::UInt32 BasePointPropId; // 0x10
		::System::String* SubobjectName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HINTINFO__CTOR_OFFSET))(this);
		}
	};
}
