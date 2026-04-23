#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_VP_CONSTMAP_METHOD_3_9B3B7077F2B5C352_OFFSET UNITYSDK_OFFSET(0x190F03C0)
#define RPG_GAMECORE_VP_CONSTMAP_METHOD_3_FDFA389EF16850B9_OFFSET UNITYSDK_OFFSET(0x190F0400)
#define RPG_GAMECORE_VP_CONSTMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x190F03F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_ConstMap_TypeDefinitionIndex = 23048;

	class VP_ConstMap : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* x; // 0x10
		::Il2CppArray<::RPG::GameCore::ValueEvaluatorConfig*>* y; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CONSTMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B3B7077F2B5C352(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_ConstMap*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_ConstMap*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CONSTMAP_METHOD_3_9B3B7077F2B5C352_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FDFA389EF16850B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_ConstMap* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_ConstMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_CONSTMAP_METHOD_3_FDFA389EF16850B9_OFFSET))(a1, a2);
		}
	};
}
