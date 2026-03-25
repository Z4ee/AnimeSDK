#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELLOOKATPOSITIONINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17331190)
#define RPG_GAMECORE_LEVELLOOKATPOSITIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1733B190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLookAtPositionInfo_TypeDefinitionIndex = 15942;

	class LevelLookAtPositionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Position; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOOKATPOSITIONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelLookAtPositionInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelLookAtPositionInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOOKATPOSITIONINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
