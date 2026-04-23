#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE_METHOD_3_6B1429BCB33EE10D_OFFSET UNITYSDK_OFFSET(0x18E45210)
#define RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE_METHOD_3_DDB3B3C8BF9989D1_OFFSET UNITYSDK_OFFSET(0x18E45190)
#define RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E451E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetDamageTextVisible_TypeDefinitionIndex = 22167;

	class SetTargetDamageTextVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Visible; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DDB3B3C8BF9989D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetDamageTextVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetDamageTextVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE_METHOD_3_DDB3B3C8BF9989D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B1429BCB33EE10D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetDamageTextVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetDamageTextVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE_METHOD_3_6B1429BCB33EE10D_OFFSET))(a1, a2);
		}
	};
}
