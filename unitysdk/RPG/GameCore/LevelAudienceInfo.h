#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelAudienceMemberInfo; }

#define RPG_GAMECORE_LEVELAUDIENCEINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18A3BDE0)
#define RPG_GAMECORE_LEVELAUDIENCEINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A3BD80)
#define RPG_GAMECORE_LEVELAUDIENCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3BDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudienceInfo_TypeDefinitionIndex = 16435;

	class LevelAudienceInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::RPG::GameCore::LevelAudienceMemberInfo* Member; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIENCEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelAudienceInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAudienceInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIENCEINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelAudienceInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAudienceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIENCEINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
