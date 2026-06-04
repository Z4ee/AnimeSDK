#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_CONSTMAP_METHOD_3_551F9D0423D868BC_OFFSET UNITYSDK_OFFSET(0x19E47100)
#define RPG_GAMECORE_VP_CONSTMAP_METHOD_3_89E3AF4C019BEC05_OFFSET UNITYSDK_OFFSET(0x19E47290)
#define RPG_GAMECORE_VP_CONSTMAP_METHOD_3_9EF1F11437835883_OFFSET UNITYSDK_OFFSET(0x19E47140)
#define RPG_GAMECORE_VP_CONSTMAP_METHOD_3_CB031A9CBA490CD6_OFFSET UNITYSDK_OFFSET(0x19E47260)
#define RPG_GAMECORE_VP_CONSTMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x19E47130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_ConstMap_TypeDefinitionIndex = 22736;

	class VP_ConstMap : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* x; // 0x10
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* y; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CONSTMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_551F9D0423D868BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_ConstMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_ConstMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CONSTMAP_METHOD_3_551F9D0423D868BC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9EF1F11437835883(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_ConstMap* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_ConstMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CONSTMAP_METHOD_3_9EF1F11437835883_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB031A9CBA490CD6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_ConstMap*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_ConstMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CONSTMAP_METHOD_3_CB031A9CBA490CD6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_89E3AF4C019BEC05(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_ConstMap* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_ConstMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CONSTMAP_METHOD_3_89E3AF4C019BEC05_OFFSET))(a1, a2);
		}
	};
}
