#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISTURNOWNERENTITY_METHOD_4_AC4F59C06CF45F10_OFFSET UNITYSDK_OFFSET(0x1875A2F0)
#define RPG_GAMECORE_BYISTURNOWNERENTITY_METHOD_4_E60DC3D43181C9FE_OFFSET UNITYSDK_OFFSET(0x1875A3C0)
#define RPG_GAMECORE_BYISTURNOWNERENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1875A370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTurnOwnerEntity_TypeDefinitionIndex = 21907;

	class ByIsTurnOwnerEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNOWNERENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AC4F59C06CF45F10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTurnOwnerEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTurnOwnerEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNOWNERENTITY_METHOD_4_AC4F59C06CF45F10_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E60DC3D43181C9FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNOWNERENTITY_METHOD_4_E60DC3D43181C9FE_OFFSET))(a1, a2);
		}
	};
}
