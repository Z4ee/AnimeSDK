#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicJson; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_WAITPROPCURVEMOVEFINISH_METHOD_3_9FAE3F0E0A34EA44_OFFSET UNITYSDK_OFFSET(0x19E5D580)
#define RPG_GAMECORE_WAITPROPCURVEMOVEFINISH_METHOD_3_AD2CC6DA09E725A0_OFFSET UNITYSDK_OFFSET(0x19E5D650)
#define RPG_GAMECORE_WAITPROPCURVEMOVEFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x19E5D600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropCurveMoveFinish_TypeDefinitionIndex = 19863;

	class WaitPropCurveMoveFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicJson* TargetCurve; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TasksConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9FAE3F0E0A34EA44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropCurveMoveFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropCurveMoveFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEFINISH_METHOD_3_9FAE3F0E0A34EA44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD2CC6DA09E725A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropCurveMoveFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropCurveMoveFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEFINISH_METHOD_3_AD2CC6DA09E725A0_OFFSET))(a1, a2);
		}
	};
}
