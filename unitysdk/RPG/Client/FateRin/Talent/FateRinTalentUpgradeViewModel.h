#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_1_BDAA5D56149A1E9B;
namespace RPG::Client::FateRin::Talent { class FateRinTalentViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_FATERIN_TALENT_FATERINTALENTUPGRADEVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B5B3C60)
#define RPG_CLIENT_FATERIN_TALENT_FATERINTALENTUPGRADEVIEWMODEL_GET_TALENT_OFFSET UNITYSDK_OFFSET(0x1B5B4050)
#define RPG_CLIENT_FATERIN_TALENT_FATERINTALENTUPGRADEVIEWMODEL_SET_TALENT_OFFSET UNITYSDK_OFFSET(0x1B5B4060)
#define RPG_CLIENT_FATERIN_TALENT_FATERINTALENTUPGRADEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B3BE0)

namespace RPG::Client::FateRin::Talent
{
	inline static constexpr unsigned int FateRinTalentUpgradeViewModel_TypeDefinitionIndex = 79401;

	class FateRinTalentUpgradeViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::Talent::FateRinTalentViewModel* _Talent_k__BackingField; // 0x20
		::Class_1_BDAA5D56149A1E9B* _Service; // 0x28

		::System::Void _ctor(::Class_1_BDAA5D56149A1E9B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BDAA5D56149A1E9B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TALENT_FATERINTALENTUPGRADEVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TALENT_FATERINTALENTUPGRADEVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Talent::FateRinTalentViewModel* get_Talent()
		{
			return ((::RPG::Client::FateRin::Talent::FateRinTalentViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TALENT_FATERINTALENTUPGRADEVIEWMODEL_GET_TALENT_OFFSET))(this);
		}

		::System::Void set_Talent(::RPG::Client::FateRin::Talent::FateRinTalentViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Talent::FateRinTalentViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TALENT_FATERINTALENTUPGRADEVIEWMODEL_SET_TALENT_OFFSET))(this, a1);
		}
	};
}
