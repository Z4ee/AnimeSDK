#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9181F0C44F119688.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_TRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C4FC0)

namespace MoleMole
{
	inline static constexpr unsigned int Track_TypeDefinitionIndex = 78996;

	class Track : public ::System::Object
	{
	public:
		::System::String* Id; // 0x10
		::System::String* Name; // 0x18
		::Enum_3_9181F0C44F119688 Type; // 0x20
		::System::Int32 NoteLaneId; // 0x24
		::UnityEngine::Color Color; // 0x28
		::System::Boolean IsVisible; // 0x38
		::System::Boolean IsMuted; // 0x39
		::System::Int32 Order; // 0x3C
		::System::Boolean IsFolded; // 0x40
		::System::Boolean IsSelected; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRACK__CTOR_OFFSET))(this);
		}
	};
}
