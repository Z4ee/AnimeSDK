#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELNPCPOSSESSIONINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B0760E0)
#define RPG_GAMECORE_LEVELNPCPOSSESSIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0775B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCPossessionInfo_TypeDefinitionIndex = 16591;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelNPCPossessionInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCPossessionInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCPOSSESSIONINFO_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
