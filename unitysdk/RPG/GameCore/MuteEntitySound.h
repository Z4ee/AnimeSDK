#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MUTEENTITYSOUND_METHOD_3_6467977E62ECABC7_OFFSET UNITYSDK_OFFSET(0x1D2ECD90)
#define RPG_GAMECORE_MUTEENTITYSOUND_METHOD_3_DF0353ED8AEE20B0_OFFSET UNITYSDK_OFFSET(0x1D2ECD50)
#define RPG_GAMECORE_MUTEENTITYSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2ECD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuteEntitySound_TypeDefinitionIndex = 21948;

	class MuteEntitySound : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsReset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTEENTITYSOUND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DF0353ED8AEE20B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuteEntitySound*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuteEntitySound*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTEENTITYSOUND_METHOD_3_DF0353ED8AEE20B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6467977E62ECABC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuteEntitySound* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuteEntitySound*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUTEENTITYSOUND_METHOD_3_6467977E62ECABC7_OFFSET))(a1, a2);
		}
	};
}
