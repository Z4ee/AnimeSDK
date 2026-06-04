#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPENHIPPLENMAINPAGE_METHOD_3_674735837FB98D43_OFFSET UNITYSDK_OFFSET(0x199D7460)
#define RPG_GAMECORE_OPENHIPPLENMAINPAGE_METHOD_3_695C61E62C4C12AF_OFFSET UNITYSDK_OFFSET(0x199D7350)
#define RPG_GAMECORE_OPENHIPPLENMAINPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x199D7430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenHipplenMainPage_TypeDefinitionIndex = 20133;

	class OpenHipplenMainPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENHIPPLENMAINPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_695C61E62C4C12AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenHipplenMainPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenHipplenMainPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENHIPPLENMAINPAGE_METHOD_3_695C61E62C4C12AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_674735837FB98D43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenHipplenMainPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenHipplenMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENHIPPLENMAINPAGE_METHOD_3_674735837FB98D43_OFFSET))(a1, a2);
		}
	};
}
