#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STOPCHARACTERALLSOUND_METHOD_3_1A28FE636F3A18B3_OFFSET UNITYSDK_OFFSET(0x18EA2BC0)
#define RPG_GAMECORE_STOPCHARACTERALLSOUND_METHOD_3_2D87556DB237CA6A_OFFSET UNITYSDK_OFFSET(0x18EA2B40)
#define RPG_GAMECORE_STOPCHARACTERALLSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA2B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopCharacterAllSound_TypeDefinitionIndex = 21384;

	class StopCharacterAllSound : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPCHARACTERALLSOUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2D87556DB237CA6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopCharacterAllSound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopCharacterAllSound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPCHARACTERALLSOUND_METHOD_3_2D87556DB237CA6A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1A28FE636F3A18B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopCharacterAllSound* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopCharacterAllSound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPCHARACTERALLSOUND_METHOD_3_1A28FE636F3A18B3_OFFSET))(a1, a2);
		}
	};
}
