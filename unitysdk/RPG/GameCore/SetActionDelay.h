#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETACTIONDELAY_METHOD_3_BA8E488434F63FEF_OFFSET UNITYSDK_OFFSET(0x1D4DE950)
#define RPG_GAMECORE_SETACTIONDELAY_METHOD_3_C4A45D1103E83D32_OFFSET UNITYSDK_OFFSET(0x1D4DE810)
#define RPG_GAMECORE_SETACTIONDELAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DE8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetActionDelay_TypeDefinitionIndex = 22447;

	class SetActionDelay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20
		::RPG::GameCore::DynamicFloat* NormalizedValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONDELAY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C4A45D1103E83D32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetActionDelay*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetActionDelay*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONDELAY_METHOD_3_C4A45D1103E83D32_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BA8E488434F63FEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetActionDelay* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetActionDelay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONDELAY_METHOD_3_BA8E488434F63FEF_OFFSET))(a1, a2);
		}
	};
}
