#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERREPLACEANIMATORCONTROLLER_METHOD_3_47B0B0DB245B168A_OFFSET UNITYSDK_OFFSET(0x170719E0)
#define RPG_GAMECORE_CHARACTERREPLACEANIMATORCONTROLLER_METHOD_3_81C0F2161B400B31_OFFSET UNITYSDK_OFFSET(0x17071910)
#define RPG_GAMECORE_CHARACTERREPLACEANIMATORCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17071990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReplaceAnimatorController_TypeDefinitionIndex = 21423;

	class CharacterReplaceAnimatorController : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ControllerPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEANIMATORCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_81C0F2161B400B31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterReplaceAnimatorController*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterReplaceAnimatorController*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEANIMATORCONTROLLER_METHOD_3_81C0F2161B400B31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_47B0B0DB245B168A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterReplaceAnimatorController* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterReplaceAnimatorController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEANIMATORCONTROLLER_METHOD_3_47B0B0DB245B168A_OFFSET))(a1, a2);
		}
	};
}
