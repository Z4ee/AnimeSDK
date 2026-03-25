#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MESSAGECONTACTSTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173D21F0)
#define RPG_GAMECORE_MESSAGECONTACTSTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173D2850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageContactsTypeRow_TypeDefinitionIndex = 13209;

	class MessageContactsTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 SortID; // 0x10
		::System::UInt32 ContactsType; // 0x14
		::RPG::Client::TextID Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MessageContactsTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageContactsTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
