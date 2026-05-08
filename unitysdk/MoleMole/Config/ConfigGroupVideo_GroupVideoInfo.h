#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MultipleVideoPlayerManager_PlayParam.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGGROUPVIDEO_GROUPVIDEOINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17536300)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGroupVideo_GroupVideoInfo_TypeDefinitionIndex = 63798;

	class ConfigGroupVideo_GroupVideoInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::MultipleVideoPlayerManager_PlayParam>* playParams; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGROUPVIDEO_GROUPVIDEOINFO__CTOR_OFFSET))(this);
		}
	};
}
