#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_VP_MIN_METHOD_3_354EE36AC864B94F_OFFSET UNITYSDK_OFFSET(0x190F0AC0)
#define RPG_GAMECORE_VP_MIN_METHOD_3_54992364255A3AD2_OFFSET UNITYSDK_OFFSET(0x190F0B70)
#define RPG_GAMECORE_VP_MIN__CTOR_OFFSET UNITYSDK_OFFSET(0x190F0B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Min_TypeDefinitionIndex = 23047;

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
	};
}
