#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleMonoStateBase.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"

namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleMonoStateView; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE_GETVIEW_OFFSET UNITYSDK_OFFSET(0x16E2AD80)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE_GET__STATETYPE_OFFSET UNITYSDK_OFFSET(0x16E2AD30)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x16E2ADC0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E2AFA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleMasterSelectState_TypeDefinitionIndex = 74422;

	class ChimeraDuelMainPuzzleMasterSelectState : public ::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType get__StateType()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE_GET__STATETYPE_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView* GetView()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE_GETVIEW_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEMASTERSELECTSTATE_ONENTER_OFFSET))(this);
		}
	};
}
