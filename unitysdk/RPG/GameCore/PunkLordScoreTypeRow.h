#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PunkLordMonsterRare.h"
#include "unitysdk/RPG/GameCore/PunkLordScoreFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PUNKLORDSCORETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D377860)
#define RPG_GAMECORE_PUNKLORDSCORETYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D377A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PunkLordScoreTypeRow_TypeDefinitionIndex = 12218;

	class PunkLordScoreTypeRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID FinishName; // 0x10
		::RPG::GameCore::PunkLordMonsterRare FinishRare; // 0x20
		::RPG::GameCore::PunkLordScoreFinishType FinishID; // 0x24
		::System::UInt32 FinishPoint; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDSCORETYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PunkLordScoreTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PunkLordScoreTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDSCORETYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
