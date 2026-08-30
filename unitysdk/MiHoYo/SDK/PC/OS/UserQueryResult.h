#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class UserQueryXboxExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_USERQUERYRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA38D40)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int UserQueryResult_TypeDefinitionIndex = 8583;

	class UserQueryResult : public ::System::Object
	{
	public:
		::System::Int32 status; // 0x10
		::System::String* id; // 0x18
		::System::String* name; // 0x20
		::MiHoYo::SDK::PC::OS::UserQueryXboxExtension* xbox; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_USERQUERYRESULT__CTOR_OFFSET))(this);
		}
	};
}
