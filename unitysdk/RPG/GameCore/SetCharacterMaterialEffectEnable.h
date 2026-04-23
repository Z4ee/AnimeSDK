#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE_METHOD_3_3529F5EC1DF122EE_OFFSET UNITYSDK_OFFSET(0x18E10910)
#define RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE_METHOD_3_745AA2D9948D50A4_OFFSET UNITYSDK_OFFSET(0x18E10890)
#define RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E108E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterMaterialEffectEnable_TypeDefinitionIndex = 21876;

	class SetCharacterMaterialEffectEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsEnable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_745AA2D9948D50A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterMaterialEffectEnable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterMaterialEffectEnable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE_METHOD_3_745AA2D9948D50A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3529F5EC1DF122EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterMaterialEffectEnable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterMaterialEffectEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERMATERIALEFFECTENABLE_METHOD_3_3529F5EC1DF122EE_OFFSET))(a1, a2);
		}
	};
}
