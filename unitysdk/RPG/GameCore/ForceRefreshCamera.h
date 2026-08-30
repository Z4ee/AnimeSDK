#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORCEREFRESHCAMERA_METHOD_3_4BEC53BBE4ACAEDB_OFFSET UNITYSDK_OFFSET(0x1DCB1440)
#define RPG_GAMECORE_FORCEREFRESHCAMERA_METHOD_3_6B3017EF27EE23DE_OFFSET UNITYSDK_OFFSET(0x1DCB1510)
#define RPG_GAMECORE_FORCEREFRESHCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB1500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceRefreshCamera_TypeDefinitionIndex = 20584;

	class ForceRefreshCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEREFRESHCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4BEC53BBE4ACAEDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceRefreshCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceRefreshCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEREFRESHCAMERA_METHOD_3_4BEC53BBE4ACAEDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B3017EF27EE23DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceRefreshCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceRefreshCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEREFRESHCAMERA_METHOD_3_6B3017EF27EE23DE_OFFSET))(a1, a2);
		}
	};
}
