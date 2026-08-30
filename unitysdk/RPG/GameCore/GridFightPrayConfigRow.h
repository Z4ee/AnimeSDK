#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPRAYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3B14C0)
#define RPG_GAMECORE_GRIDFIGHTPRAYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B1580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrayConfigRow_TypeDefinitionIndex = 13382;

	class GridFightPrayConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPRAYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPrayConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPrayConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPRAYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
