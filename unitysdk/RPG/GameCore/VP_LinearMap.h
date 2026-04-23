#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_VP_LINEARMAP_METHOD_3_A17455C7FF04B0CE_OFFSET UNITYSDK_OFFSET(0x190F0820)
#define RPG_GAMECORE_VP_LINEARMAP_METHOD_3_D574404E1FA8677D_OFFSET UNITYSDK_OFFSET(0x190F0860)
#define RPG_GAMECORE_VP_LINEARMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x190F0850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_LinearMap_TypeDefinitionIndex = 23049;

	class VP_LinearMap : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* x; // 0x10
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* y; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A17455C7FF04B0CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_LinearMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_LinearMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP_METHOD_3_A17455C7FF04B0CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D574404E1FA8677D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_LinearMap* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_LinearMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_LINEARMAP_METHOD_3_D574404E1FA8677D_OFFSET))(a1, a2);
		}
	};
}
