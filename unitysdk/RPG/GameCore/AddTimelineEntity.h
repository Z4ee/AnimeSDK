#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TimelineEntityConfig; }

#define RPG_GAMECORE_ADDTIMELINEENTITY_METHOD_3_84B14B424D83F797_OFFSET UNITYSDK_OFFSET(0x1BE0B0C0)
#define RPG_GAMECORE_ADDTIMELINEENTITY_METHOD_3_F1D013277AC92044_OFFSET UNITYSDK_OFFSET(0x1BE0B100)
#define RPG_GAMECORE_ADDTIMELINEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE0B0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddTimelineEntity_TypeDefinitionIndex = 19847;

	class AddTimelineEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TimelineEntityConfig*>* Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_84B14B424D83F797(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddTimelineEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddTimelineEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEENTITY_METHOD_3_84B14B424D83F797_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F1D013277AC92044(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddTimelineEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddTimelineEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEENTITY_METHOD_3_F1D013277AC92044_OFFSET))(a1, a2);
		}
	};
}
