#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYCONDITIONCONFIGBASE_METHOD_4_333F89C8A58DBB83_OFFSET UNITYSDK_OFFSET(0x1D5DC5E0)
#define RPG_GAMECORE_TRAINPARTYCONDITIONCONFIGBASE_METHOD_4_79223D57267C82BA_OFFSET UNITYSDK_OFFSET(0x1D5DC7F0)
#define RPG_GAMECORE_TRAINPARTYCONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DC450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyConditionConfigBase_TypeDefinitionIndex = 17873;

	class TrainPartyConditionConfigBase : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_333F89C8A58DBB83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDITIONCONFIGBASE_METHOD_4_333F89C8A58DBB83_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_79223D57267C82BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDITIONCONFIGBASE_METHOD_4_79223D57267C82BA_OFFSET))(a1, a2);
		}
	};
}
