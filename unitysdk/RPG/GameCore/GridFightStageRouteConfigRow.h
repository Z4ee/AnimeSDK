#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3BC2F0)
#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BC9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightStageRouteConfigRow_TypeDefinitionIndex = 13506;

	class GridFightStageRouteConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 NodeTemplateID; // 0x10
		::System::UInt32 SectionID; // 0x14
		::System::UInt32 ChapterID; // 0x18
		::System::UInt32 ID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightStageRouteConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightStageRouteConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
