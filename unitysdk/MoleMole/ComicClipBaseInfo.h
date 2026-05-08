#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define MOLEMOLE_COMICCLIPBASEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA41DF0)

namespace MoleMole
{
	inline static constexpr unsigned int ComicClipBaseInfo_TypeDefinitionIndex = 30573;

	class ComicClipBaseInfo : public ::System::Object
	{
	public:
		::UnityEngine::Timeline::INapNotifyData* zoneInfo; // 0x10
		::System::String* trackName; // 0x18
		::System::Double end; // 0x20
		::System::Double duration; // 0x28
		::System::Double begin; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICCLIPBASEINFO__CTOR_OFFSET))(this);
		}
	};
}
