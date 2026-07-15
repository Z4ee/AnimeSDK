#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSKILLDESCMODCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D078480)
#define RPG_GAMECORE_GRIDFIGHTSKILLDESCMODCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0786E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSkillDescModConfigRow_TypeDefinitionIndex = 13058;

	class GridFightSkillDescModConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ModifySkillSimpleDesc; // 0x10
		::RPG::Client::TextID ModifySkillDesc; // 0x20
		::System::UInt32 ModifySkillID; // 0x30
		::RPG::GameCore::GridFightSkillType ModifySkillType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSKILLDESCMODCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightSkillDescModConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSkillDescModConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSKILLDESCMODCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
