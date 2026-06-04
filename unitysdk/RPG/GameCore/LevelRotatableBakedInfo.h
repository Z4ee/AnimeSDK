#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelRotatableRegionBakedInfo; }

#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1988A850)
#define RPG_GAMECORE_LEVELROTATABLEBAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1988A940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRotatableBakedInfo_TypeDefinitionIndex = 16298;

	class LevelRotatableBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelRotatableRegionBakedInfo*>* RotatableRegionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelRotatableBakedInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRotatableBakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELROTATABLEBAKEDINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
