#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MiniMapZone; }

#define RPG_CLIENT_UNLOCKSECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA741120)

namespace RPG::Client
{
	inline static constexpr unsigned int UnlockSectionInfo_TypeDefinitionIndex = 49131;

	class UnlockSectionInfo : public ::System::Object
	{
	public:
		::RPG::Client::MiniMapZone* Zone; // 0x10
		::System::Int32 SectionIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UNLOCKSECTIONINFO__CTOR_OFFSET))(this);
		}
	};
}
