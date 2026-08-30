#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WhiteBoxCommandTaskType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_WHITEBOXFUNCCOMMAND_METHOD_3_7E9C36990B4F70D6_OFFSET UNITYSDK_OFFSET(0x1EFA7120)
#define RPG_GAMECORE_WHITEBOXFUNCCOMMAND_METHOD_3_87237D0E564C0F9F_OFFSET UNITYSDK_OFFSET(0x1EFA7080)
#define RPG_GAMECORE_WHITEBOXFUNCCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA70E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WhiteBoxFuncCommand_TypeDefinitionIndex = 22558;

	class WhiteBoxFuncCommand : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::RPG::GameCore::WhiteBoxCommandTaskType Command; // 0x24
		::System::String* ParamStr; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHITEBOXFUNCCOMMAND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_87237D0E564C0F9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WhiteBoxFuncCommand*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WhiteBoxFuncCommand*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHITEBOXFUNCCOMMAND_METHOD_3_87237D0E564C0F9F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7E9C36990B4F70D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WhiteBoxFuncCommand* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WhiteBoxFuncCommand*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WHITEBOXFUNCCOMMAND_METHOD_3_7E9C36990B4F70D6_OFFSET))(a1, a2);
		}
	};
}
