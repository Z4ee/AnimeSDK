#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_2FDE33CCAE591AA8;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xB674C50)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB674CE0)

namespace RPG::Client::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelBattleViewModel_TypeDefinitionIndex = 73909;

	class ChimeraDuelBattleViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::Class_1_2FDE33CCAE591AA8* ApplyAccelerateCommand; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* ChimeraProxies; // 0x20
		::Class_1_2FDE33CCAE591AA8* TryExitBattleCommand; // 0x28
		::Class_1_2FDE33CCAE591AA8* SwitchAutoModeCommand; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuel::ChimeraDuelBattleViewModel* Create(::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* a1)
		{
			return ((::RPG::Client::ChimeraDuel::ChimeraDuelBattleViewModel*(*)(::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL_CREATE_OFFSET))(a1);
		}
	};
}
