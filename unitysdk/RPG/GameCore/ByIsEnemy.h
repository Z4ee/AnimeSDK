#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISENEMY_METHOD_4_2F44EDAB81B8D623_OFFSET UNITYSDK_OFFSET(0x1A8E0230)
#define RPG_GAMECORE_BYISENEMY_METHOD_4_417FFE90E85AD7DF_OFFSET UNITYSDK_OFFSET(0x1A8E03F0)
#define RPG_GAMECORE_BYISENEMY_METHOD_4_A3E59FA1452A3C3A_OFFSET UNITYSDK_OFFSET(0x1A8E01F0)
#define RPG_GAMECORE_BYISENEMY_METHOD_4_E16AB73B98695001_OFFSET UNITYSDK_OFFSET(0x1A8E0420)
#define RPG_GAMECORE_BYISENEMY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E0220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsEnemy_TypeDefinitionIndex = 22641;

	class ByIsEnemy : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetTypeA; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetTypeB; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENEMY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A3E59FA1452A3C3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEnemy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEnemy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENEMY_METHOD_4_A3E59FA1452A3C3A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2F44EDAB81B8D623(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEnemy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEnemy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENEMY_METHOD_4_2F44EDAB81B8D623_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_417FFE90E85AD7DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnemy*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnemy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENEMY_METHOD_4_417FFE90E85AD7DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E16AB73B98695001(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnemy* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnemy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENEMY_METHOD_4_E16AB73B98695001_OFFSET))(a1, a2);
		}
	};
}
