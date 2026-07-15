#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EXPEDITIONASSIGNERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C06A740)
#define RPG_GAMECORE_EXPEDITIONASSIGNERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C06AD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionAssignerRow_TypeDefinitionIndex = 12768;

	class ExpeditionAssignerRow : public ::System::Object
	{
	public:
		::System::UInt32 AssignerID; // 0x10
		::RPG::Client::TextID AssignerName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ExpeditionAssignerRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionAssignerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONASSIGNERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
