#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"

class Class_1_BDAA5D56149A1E9B;
namespace RPG::Client::FateRin::Talent { class FateRinTalentViewModel; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_TALENT_FATERINTALENTVIEWVIEWMODEL_GET_TALENTS_OFFSET UNITYSDK_OFFSET(0x1A398100)
#define RPG_CLIENT_FATERIN_TALENT_FATERINTALENTVIEWVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A397E40)

namespace RPG::Client::FateRin::Talent
{
	inline static constexpr unsigned int FateRinTalentViewViewModel_TypeDefinitionIndex = 75770;

	class FateRinTalentViewViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Talent::FateRinTalentViewModel*>* _Talents; // 0x20

		::System::Void _ctor(::Class_1_BDAA5D56149A1E9B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BDAA5D56149A1E9B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TALENT_FATERINTALENTVIEWVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Talent::FateRinTalentViewModel*>* get_Talents()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Talent::FateRinTalentViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TALENT_FATERINTALENTVIEWVIEWMODEL_GET_TALENTS_OFFSET))(this);
		}
	};
}
