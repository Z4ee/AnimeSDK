#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MiniMapClipper;
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UIADVENTUREMINIMAP_SECTIONINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xE338920)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureMinimap_SectionInstance_TypeDefinitionIndex = 69030;

	class UIAdventureMinimap_SectionInstance : public ::System::Object
	{
	public:
		::UnityEngine::UI::Image* Image; // 0x10
		::MiniMapClipper* Clipper; // 0x18
		::System::Int32 ZoneID; // 0x20
		::System::UInt32 AreaID; // 0x24
		::System::Int32 DynamicVersion; // 0x28
		::System::Int32 SectionIndex; // 0x2C
		::UnityEngine::Vector2 AnchorPos; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREMINIMAP_SECTIONINSTANCE__CTOR_OFFSET))(this);
		}
	};
}
