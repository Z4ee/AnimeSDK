#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETDEFAULTDAMAGEDISPLAYDATA_METHOD_3_2719C925DCE9CF77_OFFSET UNITYSDK_OFFSET(0x18E45390)
#define RPG_GAMECORE_SETTARGETDEFAULTDAMAGEDISPLAYDATA_METHOD_3_D2B1626F17513CD2_OFFSET UNITYSDK_OFFSET(0x18E45410)
#define RPG_GAMECORE_SETTARGETDEFAULTDAMAGEDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E453E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetDefaultDamageDisplayData_TypeDefinitionIndex = 21463;

	class SetTargetDefaultDamageDisplayData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x20
		::System::Boolean IsReset; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDEFAULTDAMAGEDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2719C925DCE9CF77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetDefaultDamageDisplayData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetDefaultDamageDisplayData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDEFAULTDAMAGEDISPLAYDATA_METHOD_3_2719C925DCE9CF77_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D2B1626F17513CD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetDefaultDamageDisplayData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetDefaultDamageDisplayData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDEFAULTDAMAGEDISPLAYDATA_METHOD_3_D2B1626F17513CD2_OFFSET))(a1, a2);
		}
	};
}
