#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELENTITYREF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B033730)
#define RPG_GAMECORE_LEVELENTITYREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B033820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityRef_TypeDefinitionIndex = 18153;

	class LevelEntityRef : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREF__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelEntityRef*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelEntityRef*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYREF_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
