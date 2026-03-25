#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGENEMYMATERIALMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17085600)
#define RPG_GAMECORE_CHENLINGENEMYMATERIALMAPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17085770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingEnemyMaterialMapRow_TypeDefinitionIndex = 10373;

	class ChenLingEnemyMaterialMapRow : public ::System::Object
	{
	public:
		::System::String* MaterialPath; // 0x10
		::System::UInt32 StageID; // 0x18
		::System::UInt32 SoldierID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENEMYMATERIALMAPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENEMYMATERIALMAPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
