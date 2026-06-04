#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_MUL_METHOD_3_1CFAE318C8045BD0_OFFSET UNITYSDK_OFFSET(0x19E480E0)
#define RPG_GAMECORE_VP_MUL_METHOD_3_CDEFB4653038268D_OFFSET UNITYSDK_OFFSET(0x19E48030)
#define RPG_GAMECORE_VP_MUL_METHOD_3_D9D29DFD2134A32A_OFFSET UNITYSDK_OFFSET(0x19E48200)
#define RPG_GAMECORE_VP_MUL_METHOD_3_EAD7C0D20981177C_OFFSET UNITYSDK_OFFSET(0x19E48160)
#define RPG_GAMECORE_VP_MUL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E480D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Mul_TypeDefinitionIndex = 22727;

	class VP_Mul : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MUL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CDEFB4653038268D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Mul*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Mul*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MUL_METHOD_3_CDEFB4653038268D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CFAE318C8045BD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Mul* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Mul*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MUL_METHOD_3_1CFAE318C8045BD0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EAD7C0D20981177C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Mul*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Mul*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MUL_METHOD_3_EAD7C0D20981177C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D9D29DFD2134A32A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Mul* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Mul*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MUL_METHOD_3_D9D29DFD2134A32A_OFFSET))(a1, a2);
		}
	};
}
