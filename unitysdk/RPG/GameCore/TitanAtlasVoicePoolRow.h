#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TITANATLASVOICEPOOLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19DE8E20)
#define RPG_GAMECORE_TITANATLASVOICEPOOLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19DE8FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TitanAtlasVoicePoolRow_TypeDefinitionIndex = 14534;

	class TitanAtlasVoicePoolRow : public ::System::Object
	{
	public:
		::System::String* AudioEvent; // 0x10
		::System::UInt32 TitanVoicePoolID; // 0x18
		::System::UInt32 Weight; // 0x1C
		::System::UInt32 TitanVoiceID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASVOICEPOOLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TitanAtlasVoicePoolRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TitanAtlasVoicePoolRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASVOICEPOOLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
