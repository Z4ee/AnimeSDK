#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingDevelopValueIconItemViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EE0590)
#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE05D0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTCONTROL___C___REFRESHDATA_B__51_0_OFFSET UNITYSDK_OFFSET(0x19EE05E0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDevelopActionSelectControl___c_TypeDefinitionIndex = 80471;

	class B51RacingCarDevelopActionSelectControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::B51Racing::B51RacingCarDevelopActionSelectControl___c** StaticGet___9()
		{
			return (::RPG::Client::B51Racing::B51RacingCarDevelopActionSelectControl___c**)Il2CppClass::FromTypeDefinitionIndex(B51RacingCarDevelopActionSelectControl___c_TypeDefinitionIndex)->GetStaticField(0x661B0);
		}
		static ::System::Func_2<::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel*, ::RPG::GameCore::B51RacingStatType>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel*, ::RPG::GameCore::B51RacingStatType>**)Il2CppClass::FromTypeDefinitionIndex(B51RacingCarDevelopActionSelectControl___c_TypeDefinitionIndex)->GetStaticField(0x661B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTCONTROL___C__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::B51RacingStatType __RefreshData_b__51_0(::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel* a1)
		{
			return ((::RPG::GameCore::B51RacingStatType(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingDevelopValueIconItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDEVELOPACTIONSELECTCONTROL___C___REFRESHDATA_B__51_0_OFFSET))(this, a1);
		}
	};
}
