#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REFRESHMAZEBUFFTIME_METHOD_3_7612EDDB74E08EE7_OFFSET UNITYSDK_OFFSET(0x175896D0)
#define RPG_GAMECORE_REFRESHMAZEBUFFTIME_METHOD_3_C76A6A1F3AB1C236_OFFSET UNITYSDK_OFFSET(0x17589650)
#define RPG_GAMECORE_REFRESHMAZEBUFFTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x175896A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RefreshMazeBuffTime_TypeDefinitionIndex = 18469;

	class RefreshMazeBuffTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::GameCore::DynamicFloat* LifeTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMAZEBUFFTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C76A6A1F3AB1C236(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshMazeBuffTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshMazeBuffTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMAZEBUFFTIME_METHOD_3_C76A6A1F3AB1C236_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7612EDDB74E08EE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RefreshMazeBuffTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RefreshMazeBuffTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REFRESHMAZEBUFFTIME_METHOD_3_7612EDDB74E08EE7_OFFSET))(a1, a2);
		}
	};
}
