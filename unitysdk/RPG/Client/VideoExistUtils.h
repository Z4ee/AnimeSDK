#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MissingVideoProcessType.h"
#include "unitysdk/RPG/GameCore/VideoType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_VIDEOEXISTUTILS_ADDBADLISTFILE_OFFSET UNITYSDK_OFFSET(0xE442AC0)
#define RPG_CLIENT_VIDEOEXISTUTILS_CHECKVIDEOEXISTANDPROCESSMISSINGBYID_OFFSET UNITYSDK_OFFSET(0xE4428F0)
#define RPG_CLIENT_VIDEOEXISTUTILS_CHECKVIDEOEXISTANDPROCESSMISSINGBYPATH_OFFSET UNITYSDK_OFFSET(0xE442A40)
#define RPG_CLIENT_VIDEOEXISTUTILS_ISVIDEOEXISTBYID_OFFSET UNITYSDK_OFFSET(0xE442640)
#define RPG_CLIENT_VIDEOEXISTUTILS_ISVIDEOEXISTBYPATH_OFFSET UNITYSDK_OFFSET(0xE442860)
#define RPG_CLIENT_VIDEOEXISTUTILS__GETVIDEORELATIVEPATHBYID_OFFSET UNITYSDK_OFFSET(0xE442730)

namespace RPG::Client
{
	inline static constexpr unsigned int VideoExistUtils_TypeDefinitionIndex = 73209;

	class VideoExistUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsVideoExistByID(::System::UInt32 a1, ::RPG::GameCore::VideoType a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::VideoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOEXISTUTILS_ISVIDEOEXISTBYID_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsVideoExistByPath(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOEXISTUTILS_ISVIDEOEXISTBYPATH_OFFSET))(a1, a2);
		}

		static ::System::String* _GetVideoRelativePathByID(::System::UInt32 a1, ::RPG::GameCore::VideoType a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::RPG::GameCore::VideoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOEXISTUTILS__GETVIDEORELATIVEPATHBYID_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckVideoExistAndProcessMissingByID(::System::UInt32 a1, ::RPG::GameCore::VideoType a2, ::RPG::Client::MissingVideoProcessType a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::VideoType, ::RPG::Client::MissingVideoProcessType))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOEXISTUTILS_CHECKVIDEOEXISTANDPROCESSMISSINGBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CheckVideoExistAndProcessMissingByPath(::System::String* a1, ::RPG::GameCore::VideoType a2, ::RPG::Client::MissingVideoProcessType a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::RPG::GameCore::VideoType, ::RPG::Client::MissingVideoProcessType))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOEXISTUTILS_CHECKVIDEOEXISTANDPROCESSMISSINGBYPATH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddBadListFile(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOEXISTUTILS_ADDBADLISTFILE_OFFSET))(a1, a2);
		}
	};
}
