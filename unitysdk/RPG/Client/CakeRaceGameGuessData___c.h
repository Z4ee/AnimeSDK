#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceGameGuessCatData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CAKERACEGAMEGUESSDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F02840)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9F02880)
#define RPG_CLIENT_CAKERACEGAMEGUESSDATA___C___INITCATDATALIST_B__16_0_OFFSET UNITYSDK_OFFSET(0x9F02890)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameGuessData___c_TypeDefinitionIndex = 58073;

	class CakeRaceGameGuessData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::CakeRaceGameGuessCatData*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::RPG::Client::CakeRaceGameGuessCatData*>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameGuessData___c_TypeDefinitionIndex)->GetStaticField(0x44DC0);
		}
		static ::RPG::Client::CakeRaceGameGuessData___c** StaticGet___9()
		{
			return (::RPG::Client::CakeRaceGameGuessData___c**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameGuessData___c_TypeDefinitionIndex)->GetStaticField(0x44DC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __InitCatDataList_b__16_0(::RPG::Client::CakeRaceGameGuessCatData* x, ::RPG::Client::CakeRaceGameGuessCatData* y)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceGameGuessCatData*, ::RPG::Client::CakeRaceGameGuessCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEGUESSDATA___C___INITCATDATALIST_B__16_0_OFFSET))(this, x, y);
		}
	};
}
