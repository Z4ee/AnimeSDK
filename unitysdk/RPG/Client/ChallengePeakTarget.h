#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleTargetConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEPEAKTARGET_CREATE_OFFSET UNITYSDK_OFFSET(0xB55DEC0)
#define RPG_CLIENT_CHALLENGEPEAKTARGET_GET_ID_OFFSET UNITYSDK_OFFSET(0xB55E080)
#define RPG_CLIENT_CHALLENGEPEAKTARGET_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0xB55E180)
#define RPG_CLIENT_CHALLENGEPEAKTARGET_GET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0xB572D00)
#define RPG_CLIENT_CHALLENGEPEAKTARGET_GET_TARGETPARAM_OFFSET UNITYSDK_OFFSET(0xB572D30)
#define RPG_CLIENT_CHALLENGEPEAKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xB572D50)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTarget_TypeDefinitionIndex = 59135;

	class ChallengePeakTarget : public ::System::Object
	{
	public:
		::System::Func_2<::System::UInt32, ::System::Boolean>* _CheckIsPassed; // 0x10
		::RPG::GameCore::BattleTargetConfigRow* _Meta; // 0x18

		::System::Void _ctor(::RPG::GameCore::BattleTargetConfigRow* a1, ::System::Func_2<::System::UInt32, ::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetConfigRow*, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTARGET__CTOR_OFFSET))(this, a1, a2);
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

		static ::RPG::Client::ChallengePeakTarget* Create(::System::UInt32 a1, ::System::Func_2<::System::UInt32, ::System::Boolean>* a2)
		{
			return ((::RPG::Client::ChallengePeakTarget*(*)(::System::UInt32, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTARGET_CREATE_OFFSET))(a1, a2);
		}
	};
}
