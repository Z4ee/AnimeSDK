#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_BYINAISTATUS_METHOD_4_879CC8C5E7F577A6_OFFSET UNITYSDK_OFFSET(0x18DEE100)
#define RPG_GAMECORE_ST_BYINAISTATUS_METHOD_4_E172B2C343178AF8_OFFSET UNITYSDK_OFFSET(0x18DEE030)
#define RPG_GAMECORE_ST_BYINAISTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x18DEE0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByInAIStatus_TypeDefinitionIndex = 19012;

	class ST_ByInAIStatus : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AIStatus>* States; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINAISTATUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E172B2C343178AF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByInAIStatus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByInAIStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINAISTATUS_METHOD_4_E172B2C343178AF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_879CC8C5E7F577A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByInAIStatus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByInAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINAISTATUS_METHOD_4_879CC8C5E7F577A6_OFFSET))(a1, a2);
		}
	};
}
