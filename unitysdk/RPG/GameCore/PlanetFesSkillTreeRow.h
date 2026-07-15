#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESSKILLTREEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA01320)
#define RPG_GAMECORE_PLANETFESSKILLTREEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA016F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesSkillTreeRow_TypeDefinitionIndex = 11737;

	class PlanetFesSkillTreeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LevelSkillList; // 0x10
		::System::String* Icon; // 0x18
		::Il2CppArray<::System::UInt32>* NextSkillIDList; // 0x20
		::Il2CppArray<::System::UInt32>* LevelCostList; // 0x28
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x30
		::System::UInt32 SkillID; // 0x38
		::System::UInt32 Phase; // 0x3C
		::System::Boolean IsImportant; // 0x40
		::System::UInt32 MaxLevel; // 0x44
		::RPG::Client::TextID Name; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESSKILLTREEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesSkillTreeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesSkillTreeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESSKILLTREEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
