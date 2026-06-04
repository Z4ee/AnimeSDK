#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECHARACTERSPEED_METHOD_4_22BFA02F37A9F055_OFFSET UNITYSDK_OFFSET(0x195090F0)
#define RPG_GAMECORE_BYCOMPARECHARACTERSPEED_METHOD_4_53B5FC7450787EAD_OFFSET UNITYSDK_OFFSET(0x19509420)
#define RPG_GAMECORE_BYCOMPARECHARACTERSPEED_METHOD_4_7E83DE384DC877C4_OFFSET UNITYSDK_OFFSET(0x19508FD0)
#define RPG_GAMECORE_BYCOMPARECHARACTERSPEED_METHOD_4_905C8D819A76BE8E_OFFSET UNITYSDK_OFFSET(0x19509380)
#define RPG_GAMECORE_BYCOMPARECHARACTERSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x19509070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCharacterSpeed_TypeDefinitionIndex = 19117;

	class ByCompareCharacterSpeed : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean RealSpeed; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7E83DE384DC877C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCharacterSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCharacterSpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERSPEED_METHOD_4_7E83DE384DC877C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_22BFA02F37A9F055(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCharacterSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCharacterSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERSPEED_METHOD_4_22BFA02F37A9F055_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_905C8D819A76BE8E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterSpeed*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterSpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERSPEED_METHOD_4_905C8D819A76BE8E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_53B5FC7450787EAD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCharacterSpeed* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCharacterSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECHARACTERSPEED_METHOD_4_53B5FC7450787EAD_OFFSET))(a1, a2);
		}
	};
}
