#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETIGNORECOLLISION_METHOD_3_01683D60DDD8F8B1_OFFSET UNITYSDK_OFFSET(0x16F411C0)
#define RPG_GAMECORE_ADVSETIGNORECOLLISION_METHOD_3_90B5814827F5BCDD_OFFSET UNITYSDK_OFFSET(0x16F41140)
#define RPG_GAMECORE_ADVSETIGNORECOLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0x16F41190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetIgnoreCollision_TypeDefinitionIndex = 18835;

	class AdvSetIgnoreCollision : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TypeA; // 0x18
		::RPG::GameCore::TargetEvaluator* TypeB; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETIGNORECOLLISION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_90B5814827F5BCDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetIgnoreCollision*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetIgnoreCollision*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETIGNORECOLLISION_METHOD_3_90B5814827F5BCDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_01683D60DDD8F8B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetIgnoreCollision* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetIgnoreCollision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETIGNORECOLLISION_METHOD_3_01683D60DDD8F8B1_OFFSET))(a1, a2);
		}
	};
}
