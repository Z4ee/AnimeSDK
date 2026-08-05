#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXACTIVITYPARAMEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD4B990)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxActivityParamExtension_TypeDefinitionIndex = 20766;

	class XboxActivityParamExtension : public ::System::Object
	{
	public:
		::System::String* connectionString; // 0x10
		::System::Int32 maxPlayers; // 0x18
		::System::Int32 currentPlayers; // 0x1C
		::System::String* groupId; // 0x20
		::System::Int32 joinRestriction; // 0x28
		::System::Boolean allowCrossPlatformJoin; // 0x2C
		::Il2CppArray<::System::String*>* xuids; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXACTIVITYPARAMEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
