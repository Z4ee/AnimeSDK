#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CampType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAZECAMPDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2763B0)
#define RPG_GAMECORE_MAZECAMPDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D276DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeCampDataRow_TypeDefinitionIndex = 13944;

	class MazeCampDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HostileCampList; // 0x10
		::RPG::GameCore::CampType CampID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeCampDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeCampDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZECAMPDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
