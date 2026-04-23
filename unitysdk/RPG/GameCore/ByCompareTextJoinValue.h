#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_95DC7C725B433A17_OFFSET UNITYSDK_OFFSET(0x187401E0)
#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_9EE93E5A994F1431_OFFSET UNITYSDK_OFFSET(0x187402B0)
#define RPG_GAMECORE_BYCOMPARETEXTJOINVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18740260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTextJoinValue_TypeDefinitionIndex = 19867;

	class ByCompareTextJoinValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TextJoinID; // 0x20
		::System::UInt32 Value; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_95DC7C725B433A17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTextJoinValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTextJoinValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_95DC7C725B433A17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9EE93E5A994F1431(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTextJoinValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTextJoinValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEXTJOINVALUE_METHOD_4_9EE93E5A994F1431_OFFSET))(a1, a2);
		}
	};
}
