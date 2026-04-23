#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_VP_DIV_METHOD_3_43F749C00776FDA9_OFFSET UNITYSDK_OFFSET(0x190F05E0)
#define RPG_GAMECORE_VP_DIV_METHOD_3_75CC7125958743EC_OFFSET UNITYSDK_OFFSET(0x190F0530)
#define RPG_GAMECORE_VP_DIV__CTOR_OFFSET UNITYSDK_OFFSET(0x190F05D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Div_TypeDefinitionIndex = 23040;

	class VP_Div : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_DIV__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_75CC7125958743EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Div*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Div*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_DIV_METHOD_3_75CC7125958743EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_43F749C00776FDA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Div* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Div*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_DIV_METHOD_3_43F749C00776FDA9_OFFSET))(a1, a2);
		}
	};
}
