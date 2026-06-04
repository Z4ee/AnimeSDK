#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSUMMONBEOVERRIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1980E2E0)
#define RPG_GAMECORE_GRIDFIGHTSUMMONBEOVERRIDECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1980E4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSummonBEOverrideConfigRow_TypeDefinitionIndex = 12885;

	class GridFightSummonBEOverrideConfigRow : public ::System::Object
	{
	public:
		::System::String* BackJsonOverride; // 0x10
		::System::String* FrontJsonOverride; // 0x18
		::System::UInt32 BEID; // 0x20
		::System::UInt32 SeasonID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSUMMONBEOVERRIDECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightSummonBEOverrideConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSummonBEOverrideConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSUMMONBEOVERRIDECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
