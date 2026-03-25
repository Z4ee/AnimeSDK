#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_METHOD_4_B9F197A604D8E4CE_OFFSET UNITYSDK_OFFSET(0x16F27800)
#define RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_METHOD_4_D84731B050BC72A4_OFFSET UNITYSDK_OFFSET(0x16F278D0)
#define RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX__CTOR_OFFSET UNITYSDK_OFFSET(0x16F27880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByPerceiveValueReachMax_TypeDefinitionIndex = 18294;

	class AdvByPerceiveValueReachMax : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B9F197A604D8E4CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByPerceiveValueReachMax*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_METHOD_4_B9F197A604D8E4CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D84731B050BC72A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByPerceiveValueReachMax*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPERCEIVEVALUEREACHMAX_METHOD_4_D84731B050BC72A4_OFFSET))(a1, a2);
		}
	};
}
