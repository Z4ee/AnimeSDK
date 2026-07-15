#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AUDIOBOOKDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A0689B0)
#define RPG_GAMECORE_AUDIOBOOKDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A068F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudioBookDataRow_TypeDefinitionIndex = 12412;

	class AudioBookDataRow : public ::System::Object
	{
	public:
		::System::String* AudioEvent; // 0x10
		::System::UInt32 BookID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOBOOKDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AudioBookDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AudioBookDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOBOOKDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
