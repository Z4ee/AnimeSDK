#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleTargetConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEPEAKTARGET_CREATE_OFFSET UNITYSDK_OFFSET(0x9F45EE0)
#define RPG_CLIENT_CHALLENGEPEAKTARGET_GET_ID_OFFSET UNITYSDK_OFFSET(0x9F460A0)
#define RPG_CLIENT_CHALLENGEPEAKTARGET_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0x9F46190)
#define RPG_CLIENT_CHALLENGEPEAKTARGET_GET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0x9F59D50)
#define RPG_CLIENT_CHALLENGEPEAKTARGET_GET_TARGETPARAM_OFFSET UNITYSDK_OFFSET(0x9F59D80)
#define RPG_CLIENT_CHALLENGEPEAKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x9F59DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTarget_TypeDefinitionIndex = 58205;

	class ChallengePeakTarget : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleTargetConfigRow* _Meta; // 0x10
		::System::Func_2<::System::UInt32, ::System::Boolean>* _CheckIsPassed; // 0x18

		::System::Void _ctor(::RPG::GameCore::BattleTargetConfigRow* meta, ::System::Func_2<::System::UInt32, ::System::Boolean>* checkIsPassed)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetConfigRow*, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTARGET__CTOR_OFFSET))(this, meta, checkIsPassed);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTARGET_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_TargetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTARGET_GET_TARGETNAME_OFFSET))(this);
		}

		::System::UInt32 get_TargetParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTARGET_GET_TARGETPARAM_OFFSET))(this);
		}

		::System::Boolean get_IsPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTARGET_GET_ISPASSED_OFFSET))(this);
		}

		static ::RPG::Client::ChallengePeakTarget* Create(::System::UInt32 id, ::System::Func_2<::System::UInt32, ::System::Boolean>* checkIsPassed)
		{
			return ((::RPG::Client::ChallengePeakTarget*(*)(::System::UInt32, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTARGET_CREATE_OFFSET))(id, checkIsPassed);
		}
	};
}
