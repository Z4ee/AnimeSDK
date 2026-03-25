#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELOBJECTINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x17342470)
#define RPG_GAMECORE_LEVELOBJECTINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17341AB0)
#define RPG_GAMECORE_LEVELOBJECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17342460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelObjectInfo_TypeDefinitionIndex = 15833;

	class LevelObjectInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Single PosX; // 0x14
		::System::Single PosY; // 0x18
		::System::Single PosZ; // 0x1C
		::System::Boolean IsDelete; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELOBJECTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelObjectInfo*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelObjectInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELOBJECTINFO_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelObjectInfo* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelObjectInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELOBJECTINFO_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
