#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREGROUPPROPNUM_METHOD_4_2ACDAB99D9D6DF00_OFFSET UNITYSDK_OFFSET(0x1CEC9880)
#define RPG_GAMECORE_BYCOMPAREGROUPPROPNUM_METHOD_4_98E352EE577B9DFC_OFFSET UNITYSDK_OFFSET(0x1CEC98D0)
#define RPG_GAMECORE_BYCOMPAREGROUPPROPNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC98C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGroupPropNum_TypeDefinitionIndex = 20986;

	class ByCompareGroupPropNum : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPNUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2ACDAB99D9D6DF00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupPropNum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupPropNum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPNUM_METHOD_4_2ACDAB99D9D6DF00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_98E352EE577B9DFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGroupPropNum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGroupPropNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPPROPNUM_METHOD_4_98E352EE577B9DFC_OFFSET))(a1, a2);
		}
	};
}
