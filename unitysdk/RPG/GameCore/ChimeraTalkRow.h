#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERATALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170ABBA0)
#define RPG_GAMECORE_CHIMERATALKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170AC210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTalkRow_TypeDefinitionIndex = 11895;

	class ChimeraTalkRow : public ::System::Object
	{
	public:
		::System::String* EvPath; // 0x10
		::System::UInt32 TalkID; // 0x18
		::RPG::Client::TextID TalkContent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraTalkRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTalkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
