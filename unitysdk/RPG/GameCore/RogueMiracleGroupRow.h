#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMIRACLEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1761C840)
#define RPG_GAMECORE_ROGUEMIRACLEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1761C990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMiracleGroupRow_TypeDefinitionIndex = 13453;

	class RogueMiracleGroupRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* MiracleWeight; // 0x10
		::System::UInt32 RogueMiracleGroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMiracleGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMiracleGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
