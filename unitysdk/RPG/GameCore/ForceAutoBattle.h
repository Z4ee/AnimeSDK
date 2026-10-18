#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORCEAUTOBATTLE_METHOD_3_40F2D69AE16A2E5A_OFFSET UNITYSDK_OFFSET(0x1D6E8BE0)
#define RPG_GAMECORE_FORCEAUTOBATTLE_METHOD_3_FE118C96F4301087_OFFSET UNITYSDK_OFFSET(0x1D6E8BA0)
#define RPG_GAMECORE_FORCEAUTOBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E8BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceAutoBattle_TypeDefinitionIndex = 23268;

	class ForceAutoBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x18
		::RPG::Client::TextID OperationTip; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEAUTOBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE118C96F4301087(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceAutoBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceAutoBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEAUTOBATTLE_METHOD_3_FE118C96F4301087_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_40F2D69AE16A2E5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceAutoBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEAUTOBATTLE_METHOD_3_40F2D69AE16A2E5A_OFFSET))(a1, a2);
		}
	};
}
