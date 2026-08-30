#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE_METHOD_4_53B4F97DF630863B_OFFSET UNITYSDK_OFFSET(0x1DEB64C0)
#define RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE_METHOD_4_5E18B06224BB44C2_OFFSET UNITYSDK_OFFSET(0x1DEB6510)
#define RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB6500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDrinkMakerCheersShowMainPage_TypeDefinitionIndex = 21472;

	class WaitDrinkMakerCheersShowMainPage : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_53B4F97DF630863B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE_METHOD_4_53B4F97DF630863B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5E18B06224BB44C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDRINKMAKERCHEERSSHOWMAINPAGE_METHOD_4_5E18B06224BB44C2_OFFSET))(a1, a2);
		}
	};
}
