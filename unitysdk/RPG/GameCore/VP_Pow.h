#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValuePostProcessConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_VP_POW_METHOD_3_0508A64F4585BDA4_OFFSET UNITYSDK_OFFSET(0x190F0DD0)
#define RPG_GAMECORE_VP_POW_METHOD_3_A5D11E933D61A721_OFFSET UNITYSDK_OFFSET(0x190F0D20)
#define RPG_GAMECORE_VP_POW__CTOR_OFFSET UNITYSDK_OFFSET(0x190F0DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VP_Pow_TypeDefinitionIndex = 23042;

	class VP_Pow : public ::RPG::GameCore::ValuePostProcessConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_POW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A5D11E933D61A721(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Pow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Pow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_POW_METHOD_3_A5D11E933D61A721_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0508A64F4585BDA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VP_Pow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VP_Pow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VP_POW_METHOD_3_0508A64F4585BDA4_OFFSET))(a1, a2);
		}
	};
}
