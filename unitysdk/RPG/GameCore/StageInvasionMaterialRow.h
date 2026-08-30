#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FarmTypeConfig.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEINVASIONMATERIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D558690)
#define RPG_GAMECORE_STAGEINVASIONMATERIALROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D558810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInvasionMaterialRow_TypeDefinitionIndex = 14990;

	class StageInvasionMaterialRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FarmTypeConfig>* FarmTypeList; // 0x10
		::System::UInt32 MaterialType; // 0x18
		::System::UInt32 InvasionID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONMATERIALROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageInvasionMaterialRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageInvasionMaterialRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONMATERIALROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
