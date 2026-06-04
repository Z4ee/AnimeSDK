#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETBASEHITSTATESPEED_METHOD_3_8FFD749348EBC8F8_OFFSET UNITYSDK_OFFSET(0x19C2A480)
#define RPG_GAMECORE_SETBASEHITSTATESPEED_METHOD_3_96D6B8887BB74BEE_OFFSET UNITYSDK_OFFSET(0x19C2A400)
#define RPG_GAMECORE_SETBASEHITSTATESPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2A450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBaseHitStateSpeed_TypeDefinitionIndex = 21190;

	class SetBaseHitStateSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBASEHITSTATESPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_96D6B8887BB74BEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBaseHitStateSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBaseHitStateSpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBASEHITSTATESPEED_METHOD_3_96D6B8887BB74BEE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8FFD749348EBC8F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetBaseHitStateSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetBaseHitStateSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBASEHITSTATESPEED_METHOD_3_8FFD749348EBC8F8_OFFSET))(a1, a2);
		}
	};
}
