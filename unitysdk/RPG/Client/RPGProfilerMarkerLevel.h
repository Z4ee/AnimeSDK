#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RPGPROFILERMARKERLEVEL_ISINWORKINGLEVEL_OFFSET UNITYSDK_OFFSET(0x19D32B20)
#define RPG_CLIENT_RPGPROFILERMARKERLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19D32440)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGProfilerMarkerLevel_TypeDefinitionIndex = 33253;

	class RPGProfilerMarkerLevel : public ::System::Object
	{
	public:
		::System::Int32 m_MarkerLevel; // 0x10

		::System::Void _ctor(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERLEVEL__CTOR_OFFSET))(this, level);
		}

		::System::Boolean IsInWorkingLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGPROFILERMARKERLEVEL_ISINWORKINGLEVEL_OFFSET))(this);
		}
	};
}
