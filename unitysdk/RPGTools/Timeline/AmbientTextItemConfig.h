#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPGTOOLS_TIMELINE_AMBIENTTEXTITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE80E0D0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AmbientTextItemConfig_TypeDefinitionIndex = 48303;

	class AmbientTextItemConfig : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::RPG::Client::TextID TextID; // 0x18
		::UnityEngine::Vector3 Offset; // 0x28
		::UnityEngine::Vector3 Rotation; // 0x34
		::System::Single Scale; // 0x40
		::System::Single ShowDelay; // 0x44
		::System::Int32 AnimatorParam; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AMBIENTTEXTITEMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
