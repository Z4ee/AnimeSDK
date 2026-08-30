#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_CONSTMAP_METHOD_3_4EE3D334C2F87998_OFFSET UNITYSDK_OFFSET(0x1DEA9A40)
#define RPG_GAMECORE_VP_CONSTMAP_METHOD_3_551F9D0423D868BC_OFFSET UNITYSDK_OFFSET(0x1DEA98E0)
#define RPG_GAMECORE_VP_CONSTMAP_METHOD_3_5D266255DE12B05C_OFFSET UNITYSDK_OFFSET(0x1DEA9A70)
#define RPG_GAMECORE_VP_CONSTMAP_METHOD_3_9EF1F11437835883_OFFSET UNITYSDK_OFFSET(0x1DEA9920)
#define RPG_GAMECORE_VP_CONSTMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA9910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_ConstMap_TypeDefinitionIndex = 23783;

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

		static ::System::Void Method_3_4EE3D334C2F87998(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_ConstMap*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_ConstMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CONSTMAP_METHOD_3_4EE3D334C2F87998_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5D266255DE12B05C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_ConstMap* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_ConstMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CONSTMAP_METHOD_3_5D266255DE12B05C_OFFSET))(a1, a2);
		}
	};
}
