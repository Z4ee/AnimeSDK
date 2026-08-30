#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGENEMYMATERIALMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFB0CF0)
#define RPG_GAMECORE_CHENLINGENEMYMATERIALMAPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB0E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingEnemyMaterialMapRow_TypeDefinitionIndex = 11061;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingEnemyMaterialMapRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENEMYMATERIALMAPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
