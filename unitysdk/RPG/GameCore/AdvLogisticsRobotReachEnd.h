#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVLOGISTICSROBOTREACHEND_METHOD_3_3E542A1D2088B362_OFFSET UNITYSDK_OFFSET(0x1D6BBAE0)
#define RPG_GAMECORE_ADVLOGISTICSROBOTREACHEND_METHOD_3_B8A0B926F0D3DA1F_OFFSET UNITYSDK_OFFSET(0x1D6BBBB0)
#define RPG_GAMECORE_ADVLOGISTICSROBOTREACHEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BBBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLogisticsRobotReachEnd_TypeDefinitionIndex = 20956;

	class AdvLogisticsRobotReachEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTREACHEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3E542A1D2088B362(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLogisticsRobotReachEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLogisticsRobotReachEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTREACHEND_METHOD_3_3E542A1D2088B362_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B8A0B926F0D3DA1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLogisticsRobotReachEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLogisticsRobotReachEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTREACHEND_METHOD_3_B8A0B926F0D3DA1F_OFFSET))(a1, a2);
		}
	};
}
