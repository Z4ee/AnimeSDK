#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEPLOYPUZZLEFINISHED_METHOD_3_0D0F76003D3EF667_OFFSET UNITYSDK_OFFSET(0x1D816A10)
#define RPG_GAMECORE_DEPLOYPUZZLEFINISHED_METHOD_3_6BBF26340C6C5E9F_OFFSET UNITYSDK_OFFSET(0x1D816990)
#define RPG_GAMECORE_DEPLOYPUZZLEFINISHED__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8169E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeployPuzzleFinished_TypeDefinitionIndex = 20126;

	class DeployPuzzleFinished : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEFINISHED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6BBF26340C6C5E9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeployPuzzleFinished*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeployPuzzleFinished*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEFINISHED_METHOD_3_6BBF26340C6C5E9F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0D0F76003D3EF667(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeployPuzzleFinished* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeployPuzzleFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEFINISHED_METHOD_3_0D0F76003D3EF667_OFFSET))(a1, a2);
		}
	};
}
