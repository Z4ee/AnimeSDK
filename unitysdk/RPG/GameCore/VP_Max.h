#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_MAX_METHOD_3_6848624B36003E52_OFFSET UNITYSDK_OFFSET(0x19E47D60)
#define RPG_GAMECORE_VP_MAX_METHOD_3_6AB2EB1D537051D8_OFFSET UNITYSDK_OFFSET(0x19E47C40)
#define RPG_GAMECORE_VP_MAX_METHOD_3_7F0286D47BD64E15_OFFSET UNITYSDK_OFFSET(0x19E47B90)
#define RPG_GAMECORE_VP_MAX_METHOD_3_DD3C632788ECD484_OFFSET UNITYSDK_OFFSET(0x19E47CC0)
#define RPG_GAMECORE_VP_MAX__CTOR_OFFSET UNITYSDK_OFFSET(0x19E47C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Max_TypeDefinitionIndex = 22734;

	class VP_Max : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MAX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7F0286D47BD64E15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Max*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Max*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MAX_METHOD_3_7F0286D47BD64E15_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6AB2EB1D537051D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Max* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Max*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MAX_METHOD_3_6AB2EB1D537051D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD3C632788ECD484(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Max*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Max*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MAX_METHOD_3_DD3C632788ECD484_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6848624B36003E52(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Max* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Max*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MAX_METHOD_3_6848624B36003E52_OFFSET))(a1, a2);
		}
	};
}
