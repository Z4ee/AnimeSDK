#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MAKECHARACTERHUDVISIBLE_METHOD_3_13AE624A7DD4AC54_OFFSET UNITYSDK_OFFSET(0x1BCDBF70)
#define RPG_GAMECORE_MAKECHARACTERHUDVISIBLE_METHOD_3_7637FFAA3CB52109_OFFSET UNITYSDK_OFFSET(0x1BCDBFB0)
#define RPG_GAMECORE_MAKECHARACTERHUDVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCDBFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MakeCharacterHUDVisible_TypeDefinitionIndex = 21996;

	class MakeCharacterHUDVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Visible; // 0x20
		::System::Boolean IndependentControl; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAKECHARACTERHUDVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_13AE624A7DD4AC54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MakeCharacterHUDVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MakeCharacterHUDVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAKECHARACTERHUDVISIBLE_METHOD_3_13AE624A7DD4AC54_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7637FFAA3CB52109(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MakeCharacterHUDVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MakeCharacterHUDVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAKECHARACTERHUDVISIBLE_METHOD_3_7637FFAA3CB52109_OFFSET))(a1, a2);
		}
	};
}
