#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_SILVERWOLFTABGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E6C6B0)
#define RPG_GAMECORE_SILVERWOLFTABGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6C990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SilverWolfTabGroupRow_TypeDefinitionIndex = 11675;

	class SilverWolfTabGroupRow : public ::System::Object
	{
	public:
		::System::String* RaidFigurePath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* ExploreFigurePath; // 0x20
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Conditions; // 0x28
		::System::UInt32 GroupID; // 0x30
		::System::UInt32 ActivityModuleID; // 0x34
		::RPG::Client::TextID Name; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFTABGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SilverWolfTabGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SilverWolfTabGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFTABGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
