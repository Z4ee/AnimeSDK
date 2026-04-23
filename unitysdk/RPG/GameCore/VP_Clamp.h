#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_VP_CLAMP_METHOD_3_0226964AFE0B4A82_OFFSET UNITYSDK_OFFSET(0x190F0310)
#define RPG_GAMECORE_VP_CLAMP_METHOD_3_222C95AC95D2CE71_OFFSET UNITYSDK_OFFSET(0x190F02D0)
#define RPG_GAMECORE_VP_CLAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x190F0300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Clamp_TypeDefinitionIndex = 23045;

	class VP_Clamp : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Min; // 0x10
		::RPG::GameCore::ValueEvaluatorConfig* Max; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CLAMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_222C95AC95D2CE71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Clamp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Clamp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CLAMP_METHOD_3_222C95AC95D2CE71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0226964AFE0B4A82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Clamp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Clamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CLAMP_METHOD_3_0226964AFE0B4A82_OFFSET))(a1, a2);
		}
	};
}
