#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ST_PARKOUR_SHUTDOWNENGINE_METHOD_4_FB6FA5B354632C38_OFFSET UNITYSDK_OFFSET(0x185EDA80)
#define RPG_CLIENT_ST_PARKOUR_SHUTDOWNENGINE_METHOD_4_FBB2A37C10765CE7_OFFSET UNITYSDK_OFFSET(0x185EDBF0)
#define RPG_CLIENT_ST_PARKOUR_SHUTDOWNENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x185EDBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_ShutdownEngine_TypeDefinitionIndex = 10140;

	class ST_Parkour_ShutdownEngine : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_SHUTDOWNENGINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FB6FA5B354632C38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ShutdownEngine*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ShutdownEngine*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_SHUTDOWNENGINE_METHOD_4_FB6FA5B354632C38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FBB2A37C10765CE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ShutdownEngine* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ShutdownEngine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_SHUTDOWNENGINE_METHOD_4_FBB2A37C10765CE7_OFFSET))(a1, a2);
		}
	};
}
