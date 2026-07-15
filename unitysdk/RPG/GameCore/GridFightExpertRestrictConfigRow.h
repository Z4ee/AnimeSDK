#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTEXPERTRESTRICTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C5CD870)
#define RPG_GAMECORE_GRIDFIGHTEXPERTRESTRICTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CDA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightExpertRestrictConfigRow_TypeDefinitionIndex = 12973;

	class GridFightExpertRestrictConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Cost; // 0x10
		::System::UInt32 Section; // 0x14
		::System::UInt32 Chapter; // 0x18
		::System::UInt32 OCSection; // 0x1C
		::System::UInt32 OCChapter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXPERTRESTRICTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightExpertRestrictConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightExpertRestrictConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEXPERTRESTRICTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
