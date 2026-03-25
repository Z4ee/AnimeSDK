#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OperationTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_8FB50BF0E4150ED7_OFFSET UNITYSDK_OFFSET(0x170296D0)
#define RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_EA61B0446AF79499_OFFSET UNITYSDK_OFFSET(0x170297B0)
#define RPG_GAMECORE_BYISAUTOBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17029750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsAutoBattle_TypeDefinitionIndex = 20749;

	class ByIsAutoBattle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::OperationTypeMask ApplyOpMask; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8FB50BF0E4150ED7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAutoBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAutoBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_8FB50BF0E4150ED7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EA61B0446AF79499(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAutoBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_EA61B0446AF79499_OFFSET))(a1, a2);
		}
	};
}
