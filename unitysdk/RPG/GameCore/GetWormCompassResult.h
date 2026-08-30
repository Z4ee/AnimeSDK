#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_GETWORMCOMPASSRESULT_METHOD_3_A8A8B6F119FD4391_OFFSET UNITYSDK_OFFSET(0x1D144360)
#define RPG_GAMECORE_GETWORMCOMPASSRESULT_METHOD_3_F436166FDBFF4F07_OFFSET UNITYSDK_OFFSET(0x1D1443E0)
#define RPG_GAMECORE_GETWORMCOMPASSRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1443B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GetWormCompassResult_TypeDefinitionIndex = 21917;

	class GetWormCompassResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* Result; // 0x20
		::RPG::GameCore::DynamicString* TreasureBoxName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETWORMCOMPASSRESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A8A8B6F119FD4391(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GetWormCompassResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GetWormCompassResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETWORMCOMPASSRESULT_METHOD_3_A8A8B6F119FD4391_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F436166FDBFF4F07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GetWormCompassResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GetWormCompassResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GETWORMCOMPASSRESULT_METHOD_3_F436166FDBFF4F07_OFFSET))(a1, a2);
		}
	};
}
