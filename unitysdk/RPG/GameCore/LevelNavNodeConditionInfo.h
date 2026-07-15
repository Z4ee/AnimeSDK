#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInnerConditionType.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELNAVNODECONDITIONINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B078280)
#define RPG_GAMECORE_LEVELNAVNODECONDITIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B078490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeConditionInfo_TypeDefinitionIndex = 16473;

	class LevelNavNodeConditionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelNavNodeInnerConditionType Type; // 0x10
		::System::String* Name; // 0x18
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Int32 Value; // 0x24
		::RPG::GameCore::PropState PropState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODECONDITIONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNavNodeConditionInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeConditionInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODECONDITIONINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
