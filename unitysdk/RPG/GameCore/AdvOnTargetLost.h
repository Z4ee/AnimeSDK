#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVONTARGETLOST_METHOD_3_C822F08912D43C12_OFFSET UNITYSDK_OFFSET(0x1BE26DF0)
#define RPG_GAMECORE_ADVONTARGETLOST_METHOD_3_CBE2834239258519_OFFSET UNITYSDK_OFFSET(0x1BE26E30)
#define RPG_GAMECORE_ADVONTARGETLOST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE26E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvOnTargetLost_TypeDefinitionIndex = 19563;

	class AdvOnTargetLost : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVONTARGETLOST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C822F08912D43C12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvOnTargetLost*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvOnTargetLost*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVONTARGETLOST_METHOD_3_C822F08912D43C12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CBE2834239258519(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvOnTargetLost* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvOnTargetLost*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVONTARGETLOST_METHOD_3_CBE2834239258519_OFFSET))(a1, a2);
		}
	};
}
