#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LUABUNDLEUPDATEDPATHINFOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1748C7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int LuaBundleUpdatedPathInfoItem_TypeDefinitionIndex = 61328;

	class LuaBundleUpdatedPathInfoItem : public ::System::Object
	{
	public:
		::System::String* Path; // 0x10
		::System::String* Md5; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LUABUNDLEUPDATEDPATHINFOITEM__CTOR_OFFSET))(this);
		}
	};
}
