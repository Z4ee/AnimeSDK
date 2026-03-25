#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProjectileDataList; }
namespace RPG::GameCore { class ProjectileOnHitList; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHESSMULTIPROJECTILES_METHOD_3_356915788D4A7FEA_OFFSET UNITYSDK_OFFSET(0x1708D680)
#define RPG_GAMECORE_CHESSMULTIPROJECTILES_METHOD_3_9845761BD0D01F54_OFFSET UNITYSDK_OFFSET(0x1708D600)
#define RPG_GAMECORE_CHESSMULTIPROJECTILES__CTOR_OFFSET UNITYSDK_OFFSET(0x1708D650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessMultiProjectiles_TypeDefinitionIndex = 21990;

	class ChessMultiProjectiles : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* CasterTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean WaitProjectileFinish; // 0x28
		::Il2CppArray<::RPG::GameCore::ProjectileDataList*>* ProjectileConfigList; // 0x30
		::Il2CppArray<::RPG::GameCore::ProjectileOnHitList*>* ProjectileOnHitList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMULTIPROJECTILES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9845761BD0D01F54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessMultiProjectiles*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessMultiProjectiles*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMULTIPROJECTILES_METHOD_3_9845761BD0D01F54_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_356915788D4A7FEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessMultiProjectiles* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessMultiProjectiles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSMULTIPROJECTILES_METHOD_3_356915788D4A7FEA_OFFSET))(a1, a2);
		}
	};
}
