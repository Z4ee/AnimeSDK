#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_UNLOADLITTLEGAMEAREA_METHOD_3_00C6D5159BDA3386_OFFSET UNITYSDK_OFFSET(0x1D623D10)
#define RPG_GAMECORE_UNLOADLITTLEGAMEAREA_METHOD_3_B624C2FE75A1A29E_OFFSET UNITYSDK_OFFSET(0x1D623D90)
#define RPG_GAMECORE_UNLOADLITTLEGAMEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D623D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnloadLittleGameArea_TypeDefinitionIndex = 20758;

	class UnloadLittleGameArea : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLITTLEGAMEAREA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_00C6D5159BDA3386(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnloadLittleGameArea*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnloadLittleGameArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLITTLEGAMEAREA_METHOD_3_00C6D5159BDA3386_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B624C2FE75A1A29E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnloadLittleGameArea* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnloadLittleGameArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLITTLEGAMEAREA_METHOD_3_B624C2FE75A1A29E_OFFSET))(a1, a2);
		}
	};
}
