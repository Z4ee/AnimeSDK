#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18A4E330)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A4E1F0)
#define RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4E1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNavNodeInnerNodeInfo_TypeDefinitionIndex = 16271;

	class LevelNavNodeInnerNodeInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::MVector3 Pos; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavNodeInnerNodeInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerNodeInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNavNodeInnerNodeInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNavNodeInnerNodeInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNAVNODEINNERNODEINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
