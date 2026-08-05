#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_GAMERESPART__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BB3B0)

namespace Foundation
{
	inline static constexpr unsigned int GameResPart_TypeDefinitionIndex = 7995;

	class GameResPart : public ::System::Object
	{
	public:
		::System::String* res_revision; // 0x10
		::System::String* audio_revision; // 0x18
		::System::String* md5_files; // 0x20
		::System::String* base_url; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GAMERESPART__CTOR_OFFSET))(this);
		}
	};
}
