#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRACEENTITYMAPPINGINFO_METHOD_3_635E495759DE4F45_OFFSET UNITYSDK_OFFSET(0x1D52D380)
#define RPG_GAMECORE_TRACEENTITYMAPPINGINFO_METHOD_3_E96D1775893488C6_OFFSET UNITYSDK_OFFSET(0x1D52D3C0)
#define RPG_GAMECORE_TRACEENTITYMAPPINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D52D3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TraceEntityMappingInfo_TypeDefinitionIndex = 20445;

	class TraceEntityMappingInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEENTITYMAPPINGINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_635E495759DE4F45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TraceEntityMappingInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TraceEntityMappingInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEENTITYMAPPINGINFO_METHOD_3_635E495759DE4F45_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E96D1775893488C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TraceEntityMappingInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TraceEntityMappingInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEENTITYMAPPINGINFO_METHOD_3_E96D1775893488C6_OFFSET))(a1, a2);
		}
	};
}
