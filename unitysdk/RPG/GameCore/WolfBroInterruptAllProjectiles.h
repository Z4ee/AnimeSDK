#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES_METHOD_3_25D1E696116528DF_OFFSET UNITYSDK_OFFSET(0x1DC7AD50)
#define RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES_METHOD_3_CF4240FE72C2ABB5_OFFSET UNITYSDK_OFFSET(0x1DC7AC50)
#define RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7ACE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroInterruptAllProjectiles_TypeDefinitionIndex = 21590;

	class WolfBroInterruptAllProjectiles : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CF4240FE72C2ABB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroInterruptAllProjectiles*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroInterruptAllProjectiles*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES_METHOD_3_CF4240FE72C2ABB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_25D1E696116528DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroInterruptAllProjectiles* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroInterruptAllProjectiles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES_METHOD_3_25D1E696116528DF_OFFSET))(a1, a2);
		}
	};
}
