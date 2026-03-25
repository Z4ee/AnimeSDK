#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MESSAGECONTACTSCAMPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173D1110)
#define RPG_GAMECORE_MESSAGECONTACTSCAMPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173D1770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageContactsCampRow_TypeDefinitionIndex = 13211;

	class MessageContactsCampRow : public ::System::Object
	{
	public:
		::System::UInt32 SortID; // 0x10
		::System::UInt32 ContactsCamp; // 0x14
		::RPG::Client::TextID Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MessageContactsCampRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageContactsCampRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCAMPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
