#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VP_LINEARMAP_METHOD_3_1350383F6C78486C_OFFSET UNITYSDK_OFFSET(0x1B896AF0)
#define RPG_GAMECORE_VP_LINEARMAP_METHOD_3_67AD8C556FCC3008_OFFSET UNITYSDK_OFFSET(0x1B896B20)
#define RPG_GAMECORE_VP_LINEARMAP_METHOD_3_74B100017F376B7F_OFFSET UNITYSDK_OFFSET(0x1B8969D0)
#define RPG_GAMECORE_VP_LINEARMAP_METHOD_3_B3796A0521369888_OFFSET UNITYSDK_OFFSET(0x1B896990)
#define RPG_GAMECORE_VP_LINEARMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8969C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_LinearMap_TypeDefinitionIndex = 23204;

	class VP_LinearMap : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* x; // 0x10
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* y; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B3796A0521369888(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_LinearMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_LinearMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP_METHOD_3_B3796A0521369888_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_74B100017F376B7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_LinearMap* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_LinearMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP_METHOD_3_74B100017F376B7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1350383F6C78486C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_LinearMap*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_LinearMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP_METHOD_3_1350383F6C78486C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_67AD8C556FCC3008(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VP_LinearMap* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VP_LinearMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP_METHOD_3_67AD8C556FCC3008_OFFSET))(a1, a2);
		}
	};
}
