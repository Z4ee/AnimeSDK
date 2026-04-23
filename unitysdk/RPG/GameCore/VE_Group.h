#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
#include "unitysdk/RPG/GameCore/ValueGroupComputeType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VE_GROUP_METHOD_3_372EF2B54D943522_OFFSET UNITYSDK_OFFSET(0x190ED200)
#define RPG_GAMECORE_VE_GROUP_METHOD_3_FC8BC04BB1ADC393_OFFSET UNITYSDK_OFFSET(0x190ED240)
#define RPG_GAMECORE_VE_GROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x190ED230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_Group_TypeDefinitionIndex = 23032;

	class VE_Group : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueGroupComputeType ComputeType; // 0x20
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* Values; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_GROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_372EF2B54D943522(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Group*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Group*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_GROUP_METHOD_3_372EF2B54D943522_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FC8BC04BB1ADC393(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_Group* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_Group*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_GROUP_METHOD_3_FC8BC04BB1ADC393_OFFSET))(a1, a2);
		}
	};
}
