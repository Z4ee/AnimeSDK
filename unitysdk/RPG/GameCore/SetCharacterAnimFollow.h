#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERANIMFOLLOW_METHOD_3_C99D894D21181D25_OFFSET UNITYSDK_OFFSET(0x1E812160)
#define RPG_GAMECORE_SETCHARACTERANIMFOLLOW_METHOD_3_FC1E8BEFDB998F72_OFFSET UNITYSDK_OFFSET(0x1E812120)
#define RPG_GAMECORE_SETCHARACTERANIMFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E812150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterAnimFollow_TypeDefinitionIndex = 22396;

	class SetCharacterAnimFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* FollowTarget; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERANIMFOLLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC1E8BEFDB998F72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterAnimFollow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterAnimFollow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERANIMFOLLOW_METHOD_3_FC1E8BEFDB998F72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C99D894D21181D25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterAnimFollow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterAnimFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERANIMFOLLOW_METHOD_3_C99D894D21181D25_OFFSET))(a1, a2);
		}
	};
}
