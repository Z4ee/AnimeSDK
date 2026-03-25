#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDEENTITY_METHOD_3_56B73E0D5A5DEE0D_OFFSET UNITYSDK_OFFSET(0x172A9440)
#define RPG_GAMECORE_HIDEENTITY_METHOD_3_E6079BFA573CC5A1_OFFSET UNITYSDK_OFFSET(0x172A94C0)
#define RPG_GAMECORE_HIDEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x172A9490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideEntity_TypeDefinitionIndex = 19833;

	class HideEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean IsHide; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_56B73E0D5A5DEE0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITY_METHOD_3_56B73E0D5A5DEE0D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E6079BFA573CC5A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITY_METHOD_3_E6079BFA573CC5A1_OFFSET))(a1, a2);
		}
	};
}
