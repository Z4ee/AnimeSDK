#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayEffectType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_41AA97F98A3C6C44_OFFSET UNITYSDK_OFFSET(0x16FFC7F0)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_C78F913653A8849A_OFFSET UNITYSDK_OFFSET(0x16FFC8C0)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFC870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckActionDelayEffectType_TypeDefinitionIndex = 21709;

	class ByCheckActionDelayEffectType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ActionDelayEffectType EffectType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_41AA97F98A3C6C44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckActionDelayEffectType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckActionDelayEffectType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_41AA97F98A3C6C44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C78F913653A8849A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckActionDelayEffectType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckActionDelayEffectType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_METHOD_4_C78F913653A8849A_OFFSET))(a1, a2);
		}
	};
}
