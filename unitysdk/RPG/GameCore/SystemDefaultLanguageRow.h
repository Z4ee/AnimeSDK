#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SYSTEMDEFAULTLANGUAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177A63B0)
#define RPG_GAMECORE_SYSTEMDEFAULTLANGUAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177A6500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SystemDefaultLanguageRow_TypeDefinitionIndex = 11546;

	class SystemDefaultLanguageRow : public ::System::Object
	{
	public:
		::System::String* SystemLanguage; // 0x10
		::System::String* DefaultAudioLanguage; // 0x18
		::System::String* DefaultTextLanguage; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSTEMDEFAULTLANGUAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SystemDefaultLanguageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SystemDefaultLanguageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSTEMDEFAULTLANGUAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
