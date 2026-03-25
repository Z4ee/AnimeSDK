#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_METHOD_4_5552BE9E63AE5870_OFFSET UNITYSDK_OFFSET(0x177B7AC0)
#define RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_METHOD_4_9BC4595DDD3D41C2_OFFSET UNITYSDK_OFFSET(0x177BFDF0)
#define RPG_GAMECORE_TARGETFETCHPASSIVEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x177B7A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchPassiveEntity_TypeDefinitionIndex = 22192;

	class TargetFetchPassiveEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPASSIVEENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9BC4595DDD3D41C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPassiveEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPassiveEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_METHOD_4_9BC4595DDD3D41C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5552BE9E63AE5870(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPassiveEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPassiveEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPASSIVEENTITY_METHOD_4_5552BE9E63AE5870_OFFSET))(a1, a2);
		}
	};
}
