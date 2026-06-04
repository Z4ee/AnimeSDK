#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleValue.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYVALUEREACH_METHOD_4_A50795E859BAC65B_OFFSET UNITYSDK_OFFSET(0x198CD8B0)
#define RPG_GAMECORE_MARBLEBYVALUEREACH_METHOD_4_E448FB0DE221C1F5_OFFSET UNITYSDK_OFFSET(0x198CD990)
#define RPG_GAMECORE_MARBLEBYVALUEREACH__CTOR_OFFSET UNITYSDK_OFFSET(0x198CD940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByValueReach_TypeDefinitionIndex = 16027;

	class MarbleByValueReach : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleValue ValueType; // 0x28
		::System::Boolean IsLoop; // 0x2C
		::System::Int32 Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYVALUEREACH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A50795E859BAC65B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByValueReach*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByValueReach*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYVALUEREACH_METHOD_4_A50795E859BAC65B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E448FB0DE221C1F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByValueReach* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByValueReach*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYVALUEREACH_METHOD_4_E448FB0DE221C1F5_OFFSET))(a1, a2);
		}
	};
}
