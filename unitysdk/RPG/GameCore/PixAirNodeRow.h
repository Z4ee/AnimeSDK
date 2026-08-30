#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIRNODEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7939C0)
#define RPG_GAMECORE_PIXAIRNODEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D793AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirNodeRow_TypeDefinitionIndex = 12050;

	class PixAirNodeRow : public ::System::Object
	{
	public:
		::System::UInt32 NodeID; // 0x10
		::RPG::GameCore::PixAirNodeType NodeType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRNODEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirNodeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirNodeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRNODEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
