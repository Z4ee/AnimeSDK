#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MissingVideoProcessType.h"
#include "unitysdk/RPG/GameCore/VideoType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_VIDEOEXISTUTILS_ADDBADLISTFILE_OFFSET UNITYSDK_OFFSET(0xA7716F0)
#define RPG_CLIENT_VIDEOEXISTUTILS_CHECKVIDEOEXISTANDPROCESSMISSINGBYID_OFFSET UNITYSDK_OFFSET(0xA771520)
#define RPG_CLIENT_VIDEOEXISTUTILS_CHECKVIDEOEXISTANDPROCESSMISSINGBYPATH_OFFSET UNITYSDK_OFFSET(0xA771670)
#define RPG_CLIENT_VIDEOEXISTUTILS_ISVIDEOEXISTBYID_OFFSET UNITYSDK_OFFSET(0xA771270)
#define RPG_CLIENT_VIDEOEXISTUTILS_ISVIDEOEXISTBYPATH_OFFSET UNITYSDK_OFFSET(0xA771490)
#define RPG_CLIENT_VIDEOEXISTUTILS__GETVIDEORELATIVEPATHBYID_OFFSET UNITYSDK_OFFSET(0xA771360)

namespace RPG::Client
{
	inline static constexpr unsigned int VideoExistUtils_TypeDefinitionIndex = 60018;

	class VideoExistUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsVideoExistByID(::System::UInt32 id, ::RPG::GameCore::VideoType videoType)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::VideoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOEXISTUTILS_ISVIDEOEXISTBYID_OFFSET))(id, videoType);
		}

		static ::System::Boolean IsVideoExistByPath(::System::String* relativePath, ::System::Boolean isGuideVideo)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOEXISTUTILS_ISVIDEOEXISTBYPATH_OFFSET))(relativePath, isGuideVideo);
		}

		static ::System::String* _GetVideoRelativePathByID(::System::UInt32 id, ::RPG::GameCore::VideoType videoType)
		{
			return ((::System::String*(*)(::System::UInt32, ::RPG::GameCore::VideoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOEXISTUTILS__GETVIDEORELATIVEPATHBYID_OFFSET))(id, videoType);
		}

		static ::System::Boolean CheckVideoExistAndProcessMissingByID(::System::UInt32 id, ::RPG::GameCore::VideoType videoType, ::RPG::Client::MissingVideoProcessType processType)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::VideoType, ::RPG::Client::MissingVideoProcessType))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOEXISTUTILS_CHECKVIDEOEXISTANDPROCESSMISSINGBYID_OFFSET))(id, videoType, processType);
		}

		static ::System::Boolean CheckVideoExistAndProcessMissingByPath(::System::String* relativePath, ::RPG::GameCore::VideoType videoType, ::RPG::Client::MissingVideoProcessType processType)
		{
			return ((::System::Boolean(*)(::System::String*, ::RPG::GameCore::VideoType, ::RPG::Client::MissingVideoProcessType))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOEXISTUTILS_CHECKVIDEOEXISTANDPROCESSMISSINGBYPATH_OFFSET))(relativePath, videoType, processType);
		}

		static ::System::Void AddBadListFile(::System::String* relativePath, ::System::Boolean isGuideVideo)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOEXISTUTILS_ADDBADLISTFILE_OFFSET))(relativePath, isGuideVideo);
		}
	};
}
