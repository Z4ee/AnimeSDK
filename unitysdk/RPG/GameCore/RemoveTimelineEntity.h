#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TimelineEntityConfig; }

#define RPG_GAMECORE_REMOVETIMELINEENTITY_METHOD_3_0DFE8F94387A0838_OFFSET UNITYSDK_OFFSET(0x18CA5F20)
#define RPG_GAMECORE_REMOVETIMELINEENTITY_METHOD_3_DCBC6272DBD7D41B_OFFSET UNITYSDK_OFFSET(0x18CA5FA0)
#define RPG_GAMECORE_REMOVETIMELINEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA5F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveTimelineEntity_TypeDefinitionIndex = 19603;

	class RemoveTimelineEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TimelineEntityConfig*>* Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVETIMELINEENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0DFE8F94387A0838(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveTimelineEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveTimelineEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVETIMELINEENTITY_METHOD_3_0DFE8F94387A0838_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DCBC6272DBD7D41B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveTimelineEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveTimelineEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVETIMELINEENTITY_METHOD_3_DCBC6272DBD7D41B_OFFSET))(a1, a2);
		}
	};
}
