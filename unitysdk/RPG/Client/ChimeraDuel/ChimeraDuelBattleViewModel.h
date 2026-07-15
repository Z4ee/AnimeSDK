#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace Sofa::Core { class SimpleCommand; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1A502A90)
#define RPG_CLIENT_CHIMERADUEL_CHIMERADUELBATTLEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A502B20)

namespace RPG::Client::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelBattleViewModel_TypeDefinitionIndex = 76291;

	class ChimeraDuelBattleViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::Sofa::Core::SimpleCommand* TryExitBattleCommand; // 0x18
		::Sofa::Core::SimpleCommand* ApplyAccelerateCommand; // 0x20
		::Sofa::Core::SimpleCommand* SwitchAutoModeCommand; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* ChimeraProxies; // 0x30

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
