#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETFIVEDIMIGNORECOLLISIONTARGET_METHOD_3_17147E63935AFABB_OFFSET UNITYSDK_OFFSET(0x176CD830)
#define RPG_GAMECORE_SETFIVEDIMIGNORECOLLISIONTARGET_METHOD_3_4F9BB3B39E2BB528_OFFSET UNITYSDK_OFFSET(0x176CD7B0)
#define RPG_GAMECORE_SETFIVEDIMIGNORECOLLISIONTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x176CD800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFiveDimIgnoreCollisionTarget_TypeDefinitionIndex = 19579;

	class SetFiveDimIgnoreCollisionTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LittleGame; // 0x18
		::RPG::GameCore::TargetEvaluator* IgnoreTarget; // 0x20
		::System::Boolean IgnoreCollision; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFIVEDIMIGNORECOLLISIONTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4F9BB3B39E2BB528(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFiveDimIgnoreCollisionTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFiveDimIgnoreCollisionTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFIVEDIMIGNORECOLLISIONTARGET_METHOD_3_4F9BB3B39E2BB528_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_17147E63935AFABB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFiveDimIgnoreCollisionTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFiveDimIgnoreCollisionTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFIVEDIMIGNORECOLLISIONTARGET_METHOD_3_17147E63935AFABB_OFFSET))(a1, a2);
		}
	};
}
