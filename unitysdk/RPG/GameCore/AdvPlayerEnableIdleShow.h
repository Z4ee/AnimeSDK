#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVPLAYERENABLEIDLESHOW_METHOD_3_E84EBAEC91BAA186_OFFSET UNITYSDK_OFFSET(0x194310E0)
#define RPG_GAMECORE_ADVPLAYERENABLEIDLESHOW_METHOD_3_EC8ED245C2670CB7_OFFSET UNITYSDK_OFFSET(0x19431160)
#define RPG_GAMECORE_ADVPLAYERENABLEIDLESHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x19431130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvPlayerEnableIdleShow_TypeDefinitionIndex = 19101;

	class AdvPlayerEnableIdleShow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Int32 IdleShowIndex; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERENABLEIDLESHOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E84EBAEC91BAA186(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerEnableIdleShow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerEnableIdleShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERENABLEIDLESHOW_METHOD_3_E84EBAEC91BAA186_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC8ED245C2670CB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvPlayerEnableIdleShow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvPlayerEnableIdleShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERENABLEIDLESHOW_METHOD_3_EC8ED245C2670CB7_OFFSET))(a1, a2);
		}
	};
}
