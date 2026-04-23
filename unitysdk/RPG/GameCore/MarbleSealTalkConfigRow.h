#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLESEALTALKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AA76E0)
#define RPG_GAMECORE_MARBLESEALTALKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA78B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealTalkConfigRow_TypeDefinitionIndex = 11298;

	class MarbleSealTalkConfigRow : public ::System::Object
	{
	public:
		::System::String* VoiceEvt; // 0x10
		::RPG::Client::TextID Talk; // 0x18
		::System::UInt32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALTALKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarbleSealTalkConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSealTalkConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALTALKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
