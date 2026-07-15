#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_SILVERWOLFTABGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BE4B890)
#define RPG_GAMECORE_SILVERWOLFTABGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE4BB70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SilverWolfTabGroupRow_TypeDefinitionIndex = 11874;

	class SilverWolfTabGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Conditions; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* RaidFigurePath; // 0x20
		::System::String* ExploreFigurePath; // 0x28
		::System::UInt32 GroupID; // 0x30
		::System::UInt32 ActivityModuleID; // 0x34
		::RPG::Client::TextID Name; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFTABGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SilverWolfTabGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SilverWolfTabGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFTABGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
