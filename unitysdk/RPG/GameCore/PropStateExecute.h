#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSTATEEXECUTE_METHOD_3_2E8BC4BD9B0D10A7_OFFSET UNITYSDK_OFFSET(0x1B9A3D30)
#define RPG_GAMECORE_PROPSTATEEXECUTE_METHOD_3_B47B1E41119A210D_OFFSET UNITYSDK_OFFSET(0x1B9A3CB0)
#define RPG_GAMECORE_PROPSTATEEXECUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A3D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateExecute_TypeDefinitionIndex = 19650;

	class PropStateExecute : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PropState State; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Execute; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEEXECUTE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B47B1E41119A210D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStateExecute*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStateExecute*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEEXECUTE_METHOD_3_B47B1E41119A210D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E8BC4BD9B0D10A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStateExecute* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStateExecute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEEXECUTE_METHOD_3_2E8BC4BD9B0D10A7_OFFSET))(a1, a2);
		}
	};
}
