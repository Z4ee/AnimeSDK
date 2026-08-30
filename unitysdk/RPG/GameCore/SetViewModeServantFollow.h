#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW_METHOD_3_045813813614702B_OFFSET UNITYSDK_OFFSET(0x1E095680)
#define RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW_METHOD_3_57BE84F2664C4748_OFFSET UNITYSDK_OFFSET(0x1E0956C0)
#define RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0956B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetViewModeServantFollow_TypeDefinitionIndex = 22660;

	class SetViewModeServantFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_045813813614702B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetViewModeServantFollow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetViewModeServantFollow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW_METHOD_3_045813813614702B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_57BE84F2664C4748(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetViewModeServantFollow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetViewModeServantFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW_METHOD_3_57BE84F2664C4748_OFFSET))(a1, a2);
		}
	};
}
