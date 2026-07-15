#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtLevelGroupInfoBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelDimensionFilter; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELGROUPINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1B036DC0)
#define RPG_GAMECORE_LEVELGROUPINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B036D50)
#define RPG_GAMECORE_LEVELGROUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B036DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupInfo_TypeDefinitionIndex = 16653;

	class LevelGroupInfo : public ::RPG::GameCore::RtLevelGroupInfoBase
	{
	public:
		::System::String* GroupGUID; // 0x160
		::RPG::GameCore::LevelDimensionFilter* SaveDimensionFilter; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
