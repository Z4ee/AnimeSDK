#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETENTITYUNSELECTABLE_METHOD_3_0C8A65CC46CCB8D6_OFFSET UNITYSDK_OFFSET(0x1C5F8140)
#define RPG_GAMECORE_SETENTITYUNSELECTABLE_METHOD_3_7AA843D33BD997C1_OFFSET UNITYSDK_OFFSET(0x1C5F8100)
#define RPG_GAMECORE_SETENTITYUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F8130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityUnselectable_TypeDefinitionIndex = 21901;

	class SetEntityUnselectable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Unselectable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7AA843D33BD997C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYUNSELECTABLE_METHOD_3_7AA843D33BD997C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0C8A65CC46CCB8D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYUNSELECTABLE_METHOD_3_0C8A65CC46CCB8D6_OFFSET))(a1, a2);
		}
	};
}
