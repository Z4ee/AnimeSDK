#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_SUB_METHOD_3_41582E1924B06D31_OFFSET UNITYSDK_OFFSET(0x1D695DE0)
#define RPG_GAMECORE_VP_SUB_METHOD_3_6040BD1B2E7F1F40_OFFSET UNITYSDK_OFFSET(0x1D695F40)
#define RPG_GAMECORE_VP_SUB_METHOD_3_8D7ADBD7E41A3320_OFFSET UNITYSDK_OFFSET(0x1D695F10)
#define RPG_GAMECORE_VP_SUB_METHOD_3_C1F1F3EF4CAAF6F4_OFFSET UNITYSDK_OFFSET(0x1D695E90)
#define RPG_GAMECORE_VP_SUB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D695E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Sub_TypeDefinitionIndex = 23773;

	class VP_Sub : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SUB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_41582E1924B06D31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Sub*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Sub*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SUB_METHOD_3_41582E1924B06D31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C1F1F3EF4CAAF6F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Sub* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Sub*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SUB_METHOD_3_C1F1F3EF4CAAF6F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8D7ADBD7E41A3320(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Sub*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Sub*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SUB_METHOD_3_8D7ADBD7E41A3320_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6040BD1B2E7F1F40(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Sub* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Sub*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_SUB_METHOD_3_6040BD1B2E7F1F40_OFFSET))(a1, a2);
		}
	};
}
