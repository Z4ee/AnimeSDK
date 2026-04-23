#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE_CREATEWITHCONSTVALUES_OFFSET UNITYSDK_OFFSET(0xA003080)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE_GETSELLPRICEFORLEVEL_OFFSET UNITYSDK_OFFSET(0xA004280)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA0041A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraLevelInfo_SellRule_TypeDefinitionIndex = 58361;

	class ChimeraDuelChimeraLevelInfo_SellRule : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _SellPriceAtLevel; // 0x10

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* sellPriceAtLevelDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE__CTOR_OFFSET))(this, sellPriceAtLevelDict);
		}

		static ::RPG::Client::ChimeraDuelChimeraLevelInfo_SellRule* CreateWithConstValues(::System::String* sellPriceAtLevelKey)
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo_SellRule*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE_CREATEWITHCONSTVALUES_OFFSET))(sellPriceAtLevelKey);
		}

		::System::Int32 GetSellPriceForLevel(::System::Int32 level)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE_GETSELLPRICEFORLEVEL_OFFSET))(this, level);
		}
	};
}
