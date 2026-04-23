#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELNPCPOSSESSIONINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A4BFA0)
#define RPG_GAMECORE_LEVELNPCPOSSESSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4D410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCPossessionInfo_TypeDefinitionIndex = 16395;

	class LevelNPCPossessionInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean IsOverride; // 0x18
		::RPG::MVector3 LocalPosition; // 0x1C
		::RPG::MVector3 LocalRotation; // 0x28
		::RPG::MVector3 LocalScale; // 0x34
		::System::String* AttachPoint; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCPOSSESSIONINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNPCPossessionInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCPossessionInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCPOSSESSIONINFO_FROMBINARY_OFFSET))(array, val);
		}
	};
}
