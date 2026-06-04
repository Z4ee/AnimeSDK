#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPCURVEMOVERECOVER_METHOD_3_9A9C1F9A217748FB_OFFSET UNITYSDK_OFFSET(0x19A891E0)
#define RPG_GAMECORE_PROPCURVEMOVERECOVER_METHOD_3_F266E870893F7CD1_OFFSET UNITYSDK_OFFSET(0x19A892B0)
#define RPG_GAMECORE_PROPCURVEMOVERECOVER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A89260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveMoveRecover_TypeDefinitionIndex = 19859;

	class PropCurveMoveRecover : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVERECOVER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9A9C1F9A217748FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveRecover*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveRecover*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVERECOVER_METHOD_3_9A9C1F9A217748FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F266E870893F7CD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveRecover* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveRecover*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVERECOVER_METHOD_3_F266E870893F7CD1_OFFSET))(a1, a2);
		}
	};
}
