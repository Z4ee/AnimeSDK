#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BindInfo_BindReference.h"
#include "unitysdk/System/ValueType.h"

namespace RPGTools::Timeline { class ArchiveAsset; }
namespace System { class String; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPGTOOLS_TIMELINE_BINDINFO_METHOD_2_8915213097B92E4D_OFFSET UNITYSDK_OFFSET(0xE30E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int BindInfo_TypeDefinitionIndex = 45219;

	struct alignas(8) BindInfo
	{
		::RPGTools::Timeline::BindInfo_BindReference Referene; // 0x10
		::RPGTools::Timeline::ArchiveAsset* Asset; // 0x28
		::System::String* RelativePath; // 0x30
		::System::String* Component; // 0x38

		::System::Void Method_2_8915213097B92E4D(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BINDINFO_METHOD_2_8915213097B92E4D_OFFSET))(this, a1, a2);
		}
	};
}
