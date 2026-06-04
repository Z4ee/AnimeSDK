#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_MIN_METHOD_3_354EE36AC864B94F_OFFSET UNITYSDK_OFFSET(0x19E47DE0)
#define RPG_GAMECORE_VP_MIN_METHOD_3_54992364255A3AD2_OFFSET UNITYSDK_OFFSET(0x19E47E90)
#define RPG_GAMECORE_VP_MIN_METHOD_3_64FC6C98FB53FCEC_OFFSET UNITYSDK_OFFSET(0x19E47FB0)
#define RPG_GAMECORE_VP_MIN_METHOD_3_8E609660DAA94CDA_OFFSET UNITYSDK_OFFSET(0x19E47F10)
#define RPG_GAMECORE_VP_MIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19E47E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Min_TypeDefinitionIndex = 22735;

	class VP_Min : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_354EE36AC864B94F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Min*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Min*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MIN_METHOD_3_354EE36AC864B94F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_54992364255A3AD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Min* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Min*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MIN_METHOD_3_54992364255A3AD2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8E609660DAA94CDA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Min*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Min*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MIN_METHOD_3_8E609660DAA94CDA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64FC6C98FB53FCEC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_Min* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_Min*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_MIN_METHOD_3_64FC6C98FB53FCEC_OFFSET))(a1, a2);
		}
	};
}
