#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_ASSETLOG_LOGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2FFA0)

namespace Foundation
{
	inline static constexpr unsigned int AssetLog_LogItem_TypeDefinitionIndex = 7957;

	class AssetLog_LogItem : public ::System::Object
	{
	public:
		::System::String* TimeInfo; // 0x10
		::System::String* Path; // 0x18
		::System::String* CallStack; // 0x20
		::System::String* RefAsset; // 0x28
		::System::String* TypeInfo; // 0x30
		::System::Int32 RefCount; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_LOGITEM__CTOR_OFFSET))(this);
		}
	};
}
