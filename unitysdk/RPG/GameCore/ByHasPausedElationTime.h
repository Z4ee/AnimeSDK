#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYHASPAUSEDELATIONTIME_METHOD_4_34763F50B546CCB3_OFFSET UNITYSDK_OFFSET(0x18748F70)
#define RPG_GAMECORE_BYHASPAUSEDELATIONTIME_METHOD_4_44D3F23363C9A1C9_OFFSET UNITYSDK_OFFSET(0x18748EA0)
#define RPG_GAMECORE_BYHASPAUSEDELATIONTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x18748F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasPausedElationTime_TypeDefinitionIndex = 21504;

	class ByHasPausedElationTime : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPAUSEDELATIONTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_44D3F23363C9A1C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasPausedElationTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasPausedElationTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPAUSEDELATIONTIME_METHOD_4_44D3F23363C9A1C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_34763F50B546CCB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasPausedElationTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasPausedElationTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPAUSEDELATIONTIME_METHOD_4_34763F50B546CCB3_OFFSET))(a1, a2);
		}
	};
}
