#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDSNEAKEFFECT_METHOD_3_97632CAEA94EC64E_OFFSET UNITYSDK_OFFSET(0x194124C0)
#define RPG_GAMECORE_ADDSNEAKEFFECT_METHOD_3_B325F9BB4DF5AE9F_OFFSET UNITYSDK_OFFSET(0x19412440)
#define RPG_GAMECORE_ADDSNEAKEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19412490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddSneakEffect_TypeDefinitionIndex = 21008;

	class AddSneakEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSNEAKEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B325F9BB4DF5AE9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddSneakEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddSneakEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSNEAKEFFECT_METHOD_3_B325F9BB4DF5AE9F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_97632CAEA94EC64E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddSneakEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddSneakEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSNEAKEFFECT_METHOD_3_97632CAEA94EC64E_OFFSET))(a1, a2);
		}
	};
}
