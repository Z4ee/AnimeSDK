#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPCURVEMOVESTOP_METHOD_3_B5E2F259C77E2863_OFFSET UNITYSDK_OFFSET(0x18C686A0)
#define RPG_GAMECORE_PROPCURVEMOVESTOP_METHOD_3_BFE333FCD81AB79B_OFFSET UNITYSDK_OFFSET(0x18C68770)
#define RPG_GAMECORE_PROPCURVEMOVESTOP__CTOR_OFFSET UNITYSDK_OFFSET(0x18C68720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveMoveStop_TypeDefinitionIndex = 19998;

	class PropCurveMoveStop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* Duration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTOP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B5E2F259C77E2863(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveStop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveStop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTOP_METHOD_3_B5E2F259C77E2863_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BFE333FCD81AB79B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveStop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveStop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTOP_METHOD_3_BFE333FCD81AB79B_OFFSET))(a1, a2);
		}
	};
}
