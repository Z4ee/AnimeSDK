#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_ADD_METHOD_3_0479390A1370BC13_OFFSET UNITYSDK_OFFSET(0x1D694340)
#define RPG_GAMECORE_VP_ADD_METHOD_3_2FE52B8759972B81_OFFSET UNITYSDK_OFFSET(0x1D694370)
#define RPG_GAMECORE_VP_ADD_METHOD_3_71E9D31756D4F255_OFFSET UNITYSDK_OFFSET(0x1D6942C0)
#define RPG_GAMECORE_VP_ADD_METHOD_3_BC4146052205FC18_OFFSET UNITYSDK_OFFSET(0x1D694210)
#define RPG_GAMECORE_VP_ADD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6942B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Add_TypeDefinitionIndex = 23772;

	class VP_Add : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ADD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BC4146052205FC18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Add*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Add*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ADD_METHOD_3_BC4146052205FC18_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_71E9D31756D4F255(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Add* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Add*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ADD_METHOD_3_71E9D31756D4F255_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0479390A1370BC13(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Add*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Add*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ADD_METHOD_3_0479390A1370BC13_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2FE52B8759972B81(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Add* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Add*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ADD_METHOD_3_2FE52B8759972B81_OFFSET))(a1, a2);
		}
	};
}
