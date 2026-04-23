#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_UNLOADLITTLEGAMEAREA_METHOD_3_94FC5B64EBD94EF0_OFFSET UNITYSDK_OFFSET(0x190E5800)
#define RPG_GAMECORE_UNLOADLITTLEGAMEAREA_METHOD_3_B624C2FE75A1A29E_OFFSET UNITYSDK_OFFSET(0x190E5950)
#define RPG_GAMECORE_UNLOADLITTLEGAMEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x190E58C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnloadLittleGameArea_TypeDefinitionIndex = 19981;

	class UnloadLittleGameArea : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLITTLEGAMEAREA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_94FC5B64EBD94EF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnloadLittleGameArea*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnloadLittleGameArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLITTLEGAMEAREA_METHOD_3_94FC5B64EBD94EF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B624C2FE75A1A29E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnloadLittleGameArea* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnloadLittleGameArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLITTLEGAMEAREA_METHOD_3_B624C2FE75A1A29E_OFFSET))(a1, a2);
		}
	};
}
