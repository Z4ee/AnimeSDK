#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTAUGMENTREMARKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197DA410)
#define RPG_GAMECORE_GRIDFIGHTAUGMENTREMARKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197DA590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAugmentRemarkConfigRow_TypeDefinitionIndex = 12772;

	class GridFightAugmentRemarkConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID AugmentRemark; // 0x10
		::System::UInt32 AugmentID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTREMARKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightAugmentRemarkConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightAugmentRemarkConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTREMARKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
