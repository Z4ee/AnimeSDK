#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleValue.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYVALUEREACH_METHOD_4_434A3092842E57FF_OFFSET UNITYSDK_OFFSET(0x1738C6B0)
#define RPG_GAMECORE_MARBLEBYVALUEREACH_METHOD_4_57F3FFD2ECF9972E_OFFSET UNITYSDK_OFFSET(0x1738C790)
#define RPG_GAMECORE_MARBLEBYVALUEREACH__CTOR_OFFSET UNITYSDK_OFFSET(0x1738C740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByValueReach_TypeDefinitionIndex = 15457;

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

		static ::System::Void Method_4_434A3092842E57FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByValueReach*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByValueReach*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYVALUEREACH_METHOD_4_434A3092842E57FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_57F3FFD2ECF9972E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByValueReach* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByValueReach*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYVALUEREACH_METHOD_4_57F3FFD2ECF9972E_OFFSET))(a1, a2);
		}
	};
}
