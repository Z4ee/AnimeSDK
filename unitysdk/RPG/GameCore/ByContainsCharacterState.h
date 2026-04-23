#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_METHOD_4_47A03D34BB0E94B1_OFFSET UNITYSDK_OFFSET(0x187424A0)
#define RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_METHOD_4_9AB8A5D627B4FBC6_OFFSET UNITYSDK_OFFSET(0x187425D0)
#define RPG_GAMECORE_BYCONTAINSCHARACTERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18742550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainsCharacterState_TypeDefinitionIndex = 21663;

	class ByContainsCharacterState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* SaveKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSCHARACTERSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_47A03D34BB0E94B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainsCharacterState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainsCharacterState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_METHOD_4_47A03D34BB0E94B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9AB8A5D627B4FBC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByContainsCharacterState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByContainsCharacterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_METHOD_4_9AB8A5D627B4FBC6_OFFSET))(a1, a2);
		}
	};
}
