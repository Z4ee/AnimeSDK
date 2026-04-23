#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTSETANIM_CUEEVENTNAMELOOKUP__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAB2D3D0)
#define RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTSETANIM_CUEEVENTNAMELOOKUP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB2D3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicVisualization_BeatEffectElementSetAnim_CueEventNameLookUp_TypeDefinitionIndex = 65307;

	class MusicVisualization_BeatEffectElementSetAnim_CueEventNameLookUp : public ::System::Object
	{
	public:
		::System::String* CueEventName; // 0x10
		::System::Int32 Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTSETANIM_CUEEVENTNAMELOOKUP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICVISUALIZATION_BEATEFFECTELEMENTSETANIM_CUEEVENTNAMELOOKUP__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
