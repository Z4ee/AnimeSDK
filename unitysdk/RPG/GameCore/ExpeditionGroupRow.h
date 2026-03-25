#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EXPEDITIONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171B9300)
#define RPG_GAMECORE_EXPEDITIONGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x171B98F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionGroupRow_TypeDefinitionIndex = 12096;

	class ExpeditionGroupRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 GroupID; // 0x18
		::RPG::Client::TextID Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ExpeditionGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ExpeditionGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
