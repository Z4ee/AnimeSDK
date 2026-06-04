#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNDIVISIONEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BC62E0)
#define RPG_GAMECORE_ROGUETOURNDIVISIONEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC64C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournDivisionEffectRow_TypeDefinitionIndex = 14217;

	class RogueTournDivisionEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParamList; // 0x10
		::RPG::Client::TextID DescText; // 0x18
		::System::UInt32 DivisionLevel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNDIVISIONEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournDivisionEffectRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournDivisionEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNDIVISIONEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
