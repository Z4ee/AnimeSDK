#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW_METHOD_3_57BE84F2664C4748_OFFSET UNITYSDK_OFFSET(0x18E4A1B0)
#define RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW_METHOD_3_73C74515DA5976E1_OFFSET UNITYSDK_OFFSET(0x18E4A130)
#define RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4A180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetViewModeServantFollow_TypeDefinitionIndex = 21830;

	class SetViewModeServantFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_73C74515DA5976E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetViewModeServantFollow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetViewModeServantFollow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW_METHOD_3_73C74515DA5976E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_57BE84F2664C4748(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetViewModeServantFollow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetViewModeServantFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETVIEWMODESERVANTFOLLOW_METHOD_3_57BE84F2664C4748_OFFSET))(a1, a2);
		}
	};
}
