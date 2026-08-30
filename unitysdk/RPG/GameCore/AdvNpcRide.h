#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVNPCRIDE_METHOD_3_2722FE1BF6EC2E09_OFFSET UNITYSDK_OFFSET(0x1D6C1AA0)
#define RPG_GAMECORE_ADVNPCRIDE_METHOD_3_75A6B09F5B7D109F_OFFSET UNITYSDK_OFFSET(0x1D6C1A00)
#define RPG_GAMECORE_ADVNPCRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C1A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcRide_TypeDefinitionIndex = 20796;

	class AdvNpcRide : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* SourceAttachPoint; // 0x28
		::RPG::GameCore::DynamicString* AttachPoint; // 0x30
		::RPG::MVector3 OffsetPosition; // 0x38
		::RPG::MVector3 OffsetRotation; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_75A6B09F5B7D109F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcRide*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcRide*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRIDE_METHOD_3_75A6B09F5B7D109F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2722FE1BF6EC2E09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcRide* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcRide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRIDE_METHOD_3_2722FE1BF6EC2E09_OFFSET))(a1, a2);
		}
	};
}
