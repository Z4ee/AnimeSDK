#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProjectileOnHitList; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FIREMULTIPROJECTILESBASE_METHOD_3_9B5A7F13C4E06216_OFFSET UNITYSDK_OFFSET(0x1E0DE190)
#define RPG_GAMECORE_FIREMULTIPROJECTILESBASE_METHOD_3_9B5CC274591D538B_OFFSET UNITYSDK_OFFSET(0x1E0DE340)
#define RPG_GAMECORE_FIREMULTIPROJECTILESBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DE180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireMultiProjectilesBase_TypeDefinitionIndex = 22337;

	class FireMultiProjectilesBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* CasterTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean WaitProjectileFinish; // 0x28
		::Il2CppArray<::RPG::GameCore::ProjectileOnHitList*>* ProjectileOnHitList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILESBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B5A7F13C4E06216(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireMultiProjectilesBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireMultiProjectilesBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILESBASE_METHOD_3_9B5A7F13C4E06216_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9B5CC274591D538B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireMultiProjectilesBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireMultiProjectilesBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILESBASE_METHOD_3_9B5CC274591D538B_OFFSET))(a1, a2);
		}
	};
}
