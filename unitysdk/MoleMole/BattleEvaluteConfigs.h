#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class BattleEvaluteBgColor; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BATTLEEVALUTECONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x159C6690)

namespace MoleMole
{
	inline static constexpr unsigned int BattleEvaluteConfigs_TypeDefinitionIndex = 53957;

	class BattleEvaluteConfigs : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::BattleEvaluteBgColor*>* BattleEvaluateBgColors; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEEVALUTECONFIGS__CTOR_OFFSET))(this);
		}
	};
}
