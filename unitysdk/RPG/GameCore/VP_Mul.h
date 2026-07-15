#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_MUL_METHOD_3_0A8FA96807155CA4_OFFSET UNITYSDK_OFFSET(0x1B897350)
#define RPG_GAMECORE_VP_MUL_METHOD_3_0DF253D2109A5CFC_OFFSET UNITYSDK_OFFSET(0x1B897380)
#define RPG_GAMECORE_VP_MUL_METHOD_3_1CFAE318C8045BD0_OFFSET UNITYSDK_OFFSET(0x1B8972D0)
#define RPG_GAMECORE_VP_MUL_METHOD_3_CDEFB4653038268D_OFFSET UNITYSDK_OFFSET(0x1B897220)
#define RPG_GAMECORE_VP_MUL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8972C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Mul_TypeDefinitionIndex = 23194;

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

		static ::System::Void Method_3_0A8FA96807155CA4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Mul*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Mul*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MUL_METHOD_3_0A8FA96807155CA4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0DF253D2109A5CFC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Mul* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Mul*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MUL_METHOD_3_0DF253D2109A5CFC_OFFSET))(a1, a2);
		}
	};
}
