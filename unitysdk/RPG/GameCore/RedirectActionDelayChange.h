#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REDIRECTACTIONDELAYCHANGE_METHOD_3_1E8B998B50C222F3_OFFSET UNITYSDK_OFFSET(0x1DB7DC90)
#define RPG_GAMECORE_REDIRECTACTIONDELAYCHANGE_METHOD_3_D922455000922F82_OFFSET UNITYSDK_OFFSET(0x1DB7DC50)
#define RPG_GAMECORE_REDIRECTACTIONDELAYCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7DC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedirectActionDelayChange_TypeDefinitionIndex = 23009;

	class RedirectActionDelayChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* FromTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* ToTargetType; // 0x20
		::System::Boolean IsCancel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDIRECTACTIONDELAYCHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D922455000922F82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RedirectActionDelayChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RedirectActionDelayChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDIRECTACTIONDELAYCHANGE_METHOD_3_D922455000922F82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1E8B998B50C222F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RedirectActionDelayChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RedirectActionDelayChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDIRECTACTIONDELAYCHANGE_METHOD_3_1E8B998B50C222F3_OFFSET))(a1, a2);
		}
	};
}
