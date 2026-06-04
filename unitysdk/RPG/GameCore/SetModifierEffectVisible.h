#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMODIFIEREFFECTVISIBLE_METHOD_3_6C20CB97CD84EBA5_OFFSET UNITYSDK_OFFSET(0x19C56660)
#define RPG_GAMECORE_SETMODIFIEREFFECTVISIBLE_METHOD_3_8F8E0CF694B8024C_OFFSET UNITYSDK_OFFSET(0x19C565E0)
#define RPG_GAMECORE_SETMODIFIEREFFECTVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C56630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetModifierEffectVisible_TypeDefinitionIndex = 22342;

	class SetModifierEffectVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsRecoverAll; // 0x18
		::RPG::GameCore::TargetEvaluator* HideTargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIEREFFECTVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8F8E0CF694B8024C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetModifierEffectVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetModifierEffectVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIEREFFECTVISIBLE_METHOD_3_8F8E0CF694B8024C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6C20CB97CD84EBA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetModifierEffectVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetModifierEffectVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIEREFFECTVISIBLE_METHOD_3_6C20CB97CD84EBA5_OFFSET))(a1, a2);
		}
	};
}
