#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTIMEREWINDENTITYMINRATIO_METHOD_3_0D01B4FB9A2EE992_OFFSET UNITYSDK_OFFSET(0x19C65040)
#define RPG_GAMECORE_SETTIMEREWINDENTITYMINRATIO_METHOD_3_2D66E72539C1E1C5_OFFSET UNITYSDK_OFFSET(0x19C64FC0)
#define RPG_GAMECORE_SETTIMEREWINDENTITYMINRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x19C65010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTimeRewindEntityMinRatio_TypeDefinitionIndex = 19537;

	class SetTimeRewindEntityMinRatio : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicFloat* MinRatio; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYMINRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D66E72539C1E1C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTimeRewindEntityMinRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTimeRewindEntityMinRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYMINRATIO_METHOD_3_2D66E72539C1E1C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0D01B4FB9A2EE992(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTimeRewindEntityMinRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTimeRewindEntityMinRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYMINRATIO_METHOD_3_0D01B4FB9A2EE992_OFFSET))(a1, a2);
		}
	};
}
