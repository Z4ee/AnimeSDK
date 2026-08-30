#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERSTEALTHSTATE_METHOD_3_44EDD5E8D15BE189_OFFSET UNITYSDK_OFFSET(0x1E814100)
#define RPG_GAMECORE_SETCHARACTERSTEALTHSTATE_METHOD_3_A045E1CBE0E309C6_OFFSET UNITYSDK_OFFSET(0x1E8140B0)
#define RPG_GAMECORE_SETCHARACTERSTEALTHSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8140F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterStealthState_TypeDefinitionIndex = 22697;

	class SetCharacterStealthState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsStealthState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSTEALTHSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A045E1CBE0E309C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterStealthState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterStealthState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSTEALTHSTATE_METHOD_3_A045E1CBE0E309C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_44EDD5E8D15BE189(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterStealthState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterStealthState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERSTEALTHSTATE_METHOD_3_44EDD5E8D15BE189_OFFSET))(a1, a2);
		}
	};
}
