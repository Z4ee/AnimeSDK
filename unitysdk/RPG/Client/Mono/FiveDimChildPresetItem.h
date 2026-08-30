#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONO_FIVEDIMCHILDPRESETITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19E27F70)

namespace RPG::Client::Mono
{
	inline static constexpr unsigned int FiveDimChildPresetItem_TypeDefinitionIndex = 75546;

	class FiveDimChildPresetItem : public ::System::Object
	{
	public:
		::System::String* PresetName; // 0x10
		::UnityEngine::Transform* PresetTransform; // 0x18
		::System::Boolean IsDynamicGridView; // 0x20
		::System::UInt32 GridSizeX; // 0x24
		::System::UInt32 GridSizeY; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMCHILDPRESETITEM__CTOR_OFFSET))(this);
		}
	};
}
