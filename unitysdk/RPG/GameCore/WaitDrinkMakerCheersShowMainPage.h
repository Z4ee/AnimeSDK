#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE_METHOD_4_189C7B518B3E7D3C_OFFSET UNITYSDK_OFFSET(0x190FB310)
#define RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE_METHOD_4_5E18B06224BB44C2_OFFSET UNITYSDK_OFFSET(0x190FB3F0)
#define RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x190FB390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDrinkMakerCheersShowMainPage_TypeDefinitionIndex = 20566;

	class WaitDrinkMakerCheersShowMainPage : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_189C7B518B3E7D3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE_METHOD_4_189C7B518B3E7D3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5E18B06224BB44C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE_METHOD_4_5E18B06224BB44C2_OFFSET))(a1, a2);
		}
	};
}
