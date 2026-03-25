#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_TRACEORIGAMIBYCOLONY_METHOD_3_1E378F198A55358C_OFFSET UNITYSDK_OFFSET(0x178A29B0)
#define RPG_GAMECORE_TRACEORIGAMIBYCOLONY_METHOD_3_841086ED0464E6E5_OFFSET UNITYSDK_OFFSET(0x1788C2E0)
#define RPG_GAMECORE_TRACEORIGAMIBYCOLONY__CTOR_OFFSET UNITYSDK_OFFSET(0x1788C2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TraceOrigamiByColony_TypeDefinitionIndex = 19470;

	class TraceOrigamiByColony : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x18
		::System::Boolean OpenBigMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEORIGAMIBYCOLONY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1E378F198A55358C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TraceOrigamiByColony*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TraceOrigamiByColony*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEORIGAMIBYCOLONY_METHOD_3_1E378F198A55358C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_841086ED0464E6E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TraceOrigamiByColony* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TraceOrigamiByColony*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEORIGAMIBYCOLONY_METHOD_3_841086ED0464E6E5_OFFSET))(a1, a2);
		}
	};
}
