#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleValue.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYCOMPAREVALUE_METHOD_4_7377D7A3666B3500_OFFSET UNITYSDK_OFFSET(0x198CB6F0)
#define RPG_GAMECORE_MARBLEBYCOMPAREVALUE_METHOD_4_F3BFE4753C700857_OFFSET UNITYSDK_OFFSET(0x198CB610)
#define RPG_GAMECORE_MARBLEBYCOMPAREVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x198CB6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCompareValue_TypeDefinitionIndex = 16025;

	class MarbleByCompareValue : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28
		::RPG::GameCore::MarbleValue ValueType; // 0x2C
		::RPG::GameCore::MarbleCompare CompareType; // 0x30
		::System::Int32 Value; // 0x34
		::RPG::GameCore::MarbleValue CompareValueType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPAREVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F3BFE4753C700857(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPAREVALUE_METHOD_4_F3BFE4753C700857_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7377D7A3666B3500(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPAREVALUE_METHOD_4_7377D7A3666B3500_OFFSET))(a1, a2);
		}
	};
}
