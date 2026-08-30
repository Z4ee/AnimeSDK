#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SKIPBILLBOARDMODELVISIBLECHECK_METHOD_3_5448887AC0D191A5_OFFSET UNITYSDK_OFFSET(0x1D53BC30)
#define RPG_GAMECORE_SKIPBILLBOARDMODELVISIBLECHECK_METHOD_3_BE34713A3E64B56F_OFFSET UNITYSDK_OFFSET(0x1D53BCB0)
#define RPG_GAMECORE_SKIPBILLBOARDMODELVISIBLECHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D53BC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkipBillboardModelVisibleCheck_TypeDefinitionIndex = 20225;

	class SkipBillboardModelVisibleCheck : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Skip; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKIPBILLBOARDMODELVISIBLECHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5448887AC0D191A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkipBillboardModelVisibleCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkipBillboardModelVisibleCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKIPBILLBOARDMODELVISIBLECHECK_METHOD_3_5448887AC0D191A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BE34713A3E64B56F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkipBillboardModelVisibleCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkipBillboardModelVisibleCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKIPBILLBOARDMODELVISIBLECHECK_METHOD_3_BE34713A3E64B56F_OFFSET))(a1, a2);
		}
	};
}
