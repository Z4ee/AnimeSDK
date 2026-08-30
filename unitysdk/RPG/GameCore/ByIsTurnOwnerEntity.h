#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTURNOWNERENTITY_METHOD_4_37B2D31618B9F74F_OFFSET UNITYSDK_OFFSET(0x1CDB48B0)
#define RPG_GAMECORE_BYISTURNOWNERENTITY_METHOD_4_76FE51661FEE2E04_OFFSET UNITYSDK_OFFSET(0x1CDB4AA0)
#define RPG_GAMECORE_BYISTURNOWNERENTITY_METHOD_4_E60DC3D43181C9FE_OFFSET UNITYSDK_OFFSET(0x1CDB48F0)
#define RPG_GAMECORE_BYISTURNOWNERENTITY_METHOD_4_FBCDEE83C2889BEA_OFFSET UNITYSDK_OFFSET(0x1CDB4A70)
#define RPG_GAMECORE_BYISTURNOWNERENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB48E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTurnOwnerEntity_TypeDefinitionIndex = 22727;

	class ByIsTurnOwnerEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNOWNERENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_37B2D31618B9F74F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTurnOwnerEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNOWNERENTITY_METHOD_4_37B2D31618B9F74F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E60DC3D43181C9FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNOWNERENTITY_METHOD_4_E60DC3D43181C9FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FBCDEE83C2889BEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnOwnerEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNOWNERENTITY_METHOD_4_FBCDEE83C2889BEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_76FE51661FEE2E04(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNOWNERENTITY_METHOD_4_76FE51661FEE2E04_OFFSET))(a1, a2);
		}
	};
}
