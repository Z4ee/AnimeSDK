#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_CLAMP_METHOD_3_0226964AFE0B4A82_OFFSET UNITYSDK_OFFSET(0x19E46F30)
#define RPG_GAMECORE_VP_CLAMP_METHOD_3_025D85F42749601B_OFFSET UNITYSDK_OFFSET(0x19E46FE0)
#define RPG_GAMECORE_VP_CLAMP_METHOD_3_222C95AC95D2CE71_OFFSET UNITYSDK_OFFSET(0x19E46EF0)
#define RPG_GAMECORE_VP_CLAMP_METHOD_3_7751FB13C052F7D9_OFFSET UNITYSDK_OFFSET(0x19E47010)
#define RPG_GAMECORE_VP_CLAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x19E46F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Clamp_TypeDefinitionIndex = 22733;

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

		static ::System::Void Method_3_025D85F42749601B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Clamp*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Clamp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CLAMP_METHOD_3_025D85F42749601B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7751FB13C052F7D9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Clamp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Clamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CLAMP_METHOD_3_7751FB13C052F7D9_OFFSET))(a1, a2);
		}
	};
}
