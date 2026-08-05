#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_15C568652F4FEFB0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_NOTETYPECOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13857100)

namespace MoleMole
{
	inline static constexpr unsigned int NoteTypeColor_TypeDefinitionIndex = 55906;

	class NoteTypeColor : public ::System::Object
	{
	public:
		::Enum_3_15C568652F4FEFB0 Type; // 0x10
		::UnityEngine::Color Color; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTETYPECOLOR__CTOR_OFFSET))(this);
		}
	};
}
