#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::B51Racing { class B51RacingDriverTabViewModel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDRIVERSELECTPAGECONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC85D800)
#define RPG_CLIENT_B51RACING_B51RACINGCARDRIVERSELECTPAGECONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC85D840)
#define RPG_CLIENT_B51RACING_B51RACINGCARDRIVERSELECTPAGECONTROL___C___REFRESHBTNARROWVIEW_B__19_0_OFFSET UNITYSDK_OFFSET(0xC85D850)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDriverSelectPageControl___c_TypeDefinitionIndex = 80506;

	class B51RacingCarDriverSelectPageControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::B51Racing::B51RacingDriverTabViewModel*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::RPG::Client::B51Racing::B51RacingDriverTabViewModel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(B51RacingCarDriverSelectPageControl___c_TypeDefinitionIndex)->GetStaticField(0x66760);
		}
		static ::RPG::Client::B51Racing::B51RacingCarDriverSelectPageControl___c** StaticGet___9()
		{
			return (::RPG::Client::B51Racing::B51RacingCarDriverSelectPageControl___c**)Il2CppClass::FromTypeDefinitionIndex(B51RacingCarDriverSelectPageControl___c_TypeDefinitionIndex)->GetStaticField(0x66768);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDRIVERSELECTPAGECONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDRIVERSELECTPAGECONTROL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshBtnArrowView_b__19_0(::RPG::Client::B51Racing::B51RacingDriverTabViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingDriverTabViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDRIVERSELECTPAGECONTROL___C___REFRESHBTNARROWVIEW_B__19_0_OFFSET))(this, a1);
		}
	};
}
