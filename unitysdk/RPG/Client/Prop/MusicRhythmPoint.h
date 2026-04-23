#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/MusicRhythmPointType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_PROP_MUSICRHYTHMPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xAE55E20)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int MusicRhythmPoint_TypeDefinitionIndex = 71677;

	class MusicRhythmPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::MusicRhythmPointType PointType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MUSICRHYTHMPOINT__CTOR_OFFSET))(this);
		}
	};
}
