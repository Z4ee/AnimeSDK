#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_ABS_METHOD_3_0856BE86AB8B1C5E_OFFSET UNITYSDK_OFFSET(0x1DEA9370)
#define RPG_GAMECORE_VP_ABS_METHOD_3_4C424A12BB0190C1_OFFSET UNITYSDK_OFFSET(0x1DEA9310)
#define RPG_GAMECORE_VP_ABS_METHOD_3_916BD9CB1FA7290B_OFFSET UNITYSDK_OFFSET(0x1DEA9390)
#define RPG_GAMECORE_VP_ABS_METHOD_3_E8F401B3C9B986AC_OFFSET UNITYSDK_OFFSET(0x1DEA9290)
#define RPG_GAMECORE_VP_ABS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA9300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Abs_TypeDefinitionIndex = 23778;

	class VP_Abs : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ABS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8F401B3C9B986AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Abs*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Abs*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ABS_METHOD_3_E8F401B3C9B986AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4C424A12BB0190C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Abs* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Abs*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ABS_METHOD_3_4C424A12BB0190C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0856BE86AB8B1C5E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Abs*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Abs*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ABS_METHOD_3_0856BE86AB8B1C5E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_916BD9CB1FA7290B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Abs* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Abs*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_ABS_METHOD_3_916BD9CB1FA7290B_OFFSET))(a1, a2);
		}
	};
}
