#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesBigInt; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESAVATARLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D798130)
#define RPG_GAMECORE_PLANETFESAVATARLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7982C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarLevelRow_TypeDefinitionIndex = 12112;

	class PlanetFesAvatarLevelRow : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesBigInt* IncomeNum; // 0x10
		::RPG::GameCore::PlanetFesBigInt* CostNum; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* GrantItemList; // 0x20
		::System::UInt32 Level; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesAvatarLevelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesAvatarLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
