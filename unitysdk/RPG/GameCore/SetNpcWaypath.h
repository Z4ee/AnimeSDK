#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaypathUsageType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETNPCWAYPATH_METHOD_3_C0931672B72D53A1_OFFSET UNITYSDK_OFFSET(0x1D50A1F0)
#define RPG_GAMECORE_SETNPCWAYPATH_METHOD_3_DC214FE941B4EF13_OFFSET UNITYSDK_OFFSET(0x1D50A270)
#define RPG_GAMECORE_SETNPCWAYPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D50A240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNpcWaypath_TypeDefinitionIndex = 20104;

	class SetNpcWaypath : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::WaypathUsageType UsageType; // 0x20
		::System::UInt32 WaypathIdx; // 0x24
		::System::Boolean LockEntityLod; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCWAYPATH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C0931672B72D53A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNpcWaypath*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNpcWaypath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCWAYPATH_METHOD_3_C0931672B72D53A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DC214FE941B4EF13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNpcWaypath* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNpcWaypath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCWAYPATH_METHOD_3_DC214FE941B4EF13_OFFSET))(a1, a2);
		}
	};
}
