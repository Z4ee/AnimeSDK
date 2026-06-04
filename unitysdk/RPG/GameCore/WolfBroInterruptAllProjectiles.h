#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES_METHOD_3_25674C7B01D8EFEC_OFFSET UNITYSDK_OFFSET(0x19E68480)
#define RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES_METHOD_3_25D1E696116528DF_OFFSET UNITYSDK_OFFSET(0x19E685A0)
#define RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES__CTOR_OFFSET UNITYSDK_OFFSET(0x19E68520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WolfBroInterruptAllProjectiles_TypeDefinitionIndex = 20373;

	class WolfBroInterruptAllProjectiles : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_25674C7B01D8EFEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroInterruptAllProjectiles*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroInterruptAllProjectiles*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES_METHOD_3_25674C7B01D8EFEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_25D1E696116528DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WolfBroInterruptAllProjectiles* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WolfBroInterruptAllProjectiles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WOLFBROINTERRUPTALLPROJECTILES_METHOD_3_25D1E696116528DF_OFFSET))(a1, a2);
		}
	};
}
