#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaypathUsageType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETNPCWAYPATH_METHOD_3_CE6FAE50E9ADDBFF_OFFSET UNITYSDK_OFFSET(0x19C5AA10)
#define RPG_GAMECORE_SETNPCWAYPATH_METHOD_3_DC214FE941B4EF13_OFFSET UNITYSDK_OFFSET(0x19C5AB60)
#define RPG_GAMECORE_SETNPCWAYPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x19C5AAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNpcWaypath_TypeDefinitionIndex = 19202;

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

		static ::System::Void Method_3_CE6FAE50E9ADDBFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNpcWaypath*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNpcWaypath*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCWAYPATH_METHOD_3_CE6FAE50E9ADDBFF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DC214FE941B4EF13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetNpcWaypath* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetNpcWaypath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCWAYPATH_METHOD_3_DC214FE941B4EF13_OFFSET))(a1, a2);
		}
	};
}
