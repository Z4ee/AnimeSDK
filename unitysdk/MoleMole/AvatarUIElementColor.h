#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_AVATARUIELEMENTCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0xFAE2AD0)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarUIElementColor_TypeDefinitionIndex = 64556;

	class AvatarUIElementColor : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::UnityEngine::Color UIColor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARUIELEMENTCOLOR__CTOR_OFFSET))(this);
		}
	};
}
