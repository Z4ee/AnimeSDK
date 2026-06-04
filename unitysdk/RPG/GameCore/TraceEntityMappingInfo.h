#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRACEENTITYMAPPINGINFO_METHOD_3_680A24B0C7982357_OFFSET UNITYSDK_OFFSET(0x19DEBB10)
#define RPG_GAMECORE_TRACEENTITYMAPPINGINFO_METHOD_3_E96D1775893488C6_OFFSET UNITYSDK_OFFSET(0x19DEBB90)
#define RPG_GAMECORE_TRACEENTITYMAPPINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEBB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TraceEntityMappingInfo_TypeDefinitionIndex = 19541;

	class TraceEntityMappingInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEENTITYMAPPINGINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_680A24B0C7982357(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TraceEntityMappingInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TraceEntityMappingInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEENTITYMAPPINGINFO_METHOD_3_680A24B0C7982357_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E96D1775893488C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TraceEntityMappingInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TraceEntityMappingInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACEENTITYMAPPINGINFO_METHOD_3_E96D1775893488C6_OFFSET))(a1, a2);
		}
	};
}
