#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETEXCLUDEINMULTICHARACTERFORMATION_METHOD_3_3400EC4F8D9BBFF5_OFFSET UNITYSDK_OFFSET(0x19C4D1B0)
#define RPG_GAMECORE_SETEXCLUDEINMULTICHARACTERFORMATION_METHOD_3_3AD44EE2F0B0BB76_OFFSET UNITYSDK_OFFSET(0x19C4D290)
#define RPG_GAMECORE_SETEXCLUDEINMULTICHARACTERFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19C4D230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetExcludeInMultiCharacterFormation_TypeDefinitionIndex = 21409;

	class SetExcludeInMultiCharacterFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsExclude; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEXCLUDEINMULTICHARACTERFORMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3400EC4F8D9BBFF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetExcludeInMultiCharacterFormation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetExcludeInMultiCharacterFormation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEXCLUDEINMULTICHARACTERFORMATION_METHOD_3_3400EC4F8D9BBFF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3AD44EE2F0B0BB76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetExcludeInMultiCharacterFormation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetExcludeInMultiCharacterFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEXCLUDEINMULTICHARACTERFORMATION_METHOD_3_3AD44EE2F0B0BB76_OFFSET))(a1, a2);
		}
	};
}
