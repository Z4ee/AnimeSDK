#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }

#define RICHTAP_COMMON_RICHTAPCLIP_GETCLIPNAME_OFFSET UNITYSDK_OFFSET(0x1BAB3F90)
#define RICHTAP_COMMON_RICHTAPCLIP_GETCONTENT_OFFSET UNITYSDK_OFFSET(0x1BAB3F80)
#define RICHTAP_COMMON_RICHTAPCLIP_LOAD_OFFSET UNITYSDK_OFFSET(0x1BAB3F50)
#define RICHTAP_COMMON_RICHTAPCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB3ED0)

namespace RichTap::Common
{
	inline static constexpr unsigned int RichtapClip_TypeDefinitionIndex = 36498;

	class RichtapClip : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* content; // 0x18
		::System::String* clipName; // 0x20

		::System::Void _ctor(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCLIP__CTOR_OFFSET))(this, path);
		}

		::System::Void Load(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCLIP_LOAD_OFFSET))(this, path);
		}

		::System::String* GetContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCLIP_GETCONTENT_OFFSET))(this);
		}

		::System::String* GetClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_RICHTAPCLIP_GETCLIPNAME_OFFSET))(this);
		}
	};
}
