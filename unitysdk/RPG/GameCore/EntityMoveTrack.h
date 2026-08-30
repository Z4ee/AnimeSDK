#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTITYMOVETRACK_METHOD_2_004C3C22D43C6725_OFFSET UNITYSDK_OFFSET(0x1D06B430)
#define RPG_GAMECORE_ENTITYMOVETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06B4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityMoveTrack_TypeDefinitionIndex = 19933;

	class EntityMoveTrack : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Offset; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMOVETRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_004C3C22D43C6725(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EntityMoveTrack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EntityMoveTrack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMOVETRACK_METHOD_2_004C3C22D43C6725_OFFSET))(a1, a2);
		}
	};
}
