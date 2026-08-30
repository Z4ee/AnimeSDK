#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyCellType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYCONTENTDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2BB130)
#define RPG_GAMECORE_MONOPOLYCONTENTDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BB2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyContentDisplayRow_TypeDefinitionIndex = 12006;

	class MonopolyContentDisplayRow : public ::System::Object
	{
	public:
		::RPG::GameCore::MonopolyCellType CellType; // 0x10
		::System::UInt32 DisplayID; // 0x14
		::System::UInt32 CellContentID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCONTENTDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyContentDisplayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyContentDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCONTENTDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
