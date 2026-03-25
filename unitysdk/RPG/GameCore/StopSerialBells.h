#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STOPSERIALBELLS_METHOD_3_07CFE74849AB282D_OFFSET UNITYSDK_OFFSET(0x1777E1D0)
#define RPG_GAMECORE_STOPSERIALBELLS_METHOD_3_89C0CBDC9EBF8AB9_OFFSET UNITYSDK_OFFSET(0x1777E0C0)
#define RPG_GAMECORE_STOPSERIALBELLS__CTOR_OFFSET UNITYSDK_OFFSET(0x1777E1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopSerialBells_TypeDefinitionIndex = 18857;

	class StopSerialBells : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSERIALBELLS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_89C0CBDC9EBF8AB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopSerialBells*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopSerialBells*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSERIALBELLS_METHOD_3_89C0CBDC9EBF8AB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_07CFE74849AB282D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopSerialBells* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopSerialBells*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPSERIALBELLS_METHOD_3_07CFE74849AB282D_OFFSET))(a1, a2);
		}
	};
}
