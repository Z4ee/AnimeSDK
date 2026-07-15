#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMIRACLEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFBEBD0)
#define RPG_GAMECORE_ROGUEMIRACLEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBED20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMiracleGroupRow_TypeDefinitionIndex = 14140;

	class RogueMiracleGroupRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* MiracleWeight; // 0x10
		::System::UInt32 RogueMiracleGroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMiracleGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMiracleGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
