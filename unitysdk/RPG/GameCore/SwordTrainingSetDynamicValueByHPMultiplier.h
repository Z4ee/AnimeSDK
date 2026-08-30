#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYHPMULTIPLIER_METHOD_3_4C560835A40F795F_OFFSET UNITYSDK_OFFSET(0x1E159720)
#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYHPMULTIPLIER_METHOD_3_C1EFCA00298E93A8_OFFSET UNITYSDK_OFFSET(0x1E1596E0)
#define RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYHPMULTIPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E159710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingSetDynamicValueByHPMultiplier_TypeDefinitionIndex = 22347;

	class SwordTrainingSetDynamicValueByHPMultiplier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYHPMULTIPLIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C1EFCA00298E93A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByHPMultiplier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingSetDynamicValueByHPMultiplier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYHPMULTIPLIER_METHOD_3_C1EFCA00298E93A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4C560835A40F795F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByHPMultiplier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingSetDynamicValueByHPMultiplier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSETDYNAMICVALUEBYHPMULTIPLIER_METHOD_3_4C560835A40F795F_OFFSET))(a1, a2);
		}
	};
}
