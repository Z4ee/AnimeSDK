#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/UIDamageTextType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARENTITYDAMAGETEXT_METHOD_3_146577BE06A515F2_OFFSET UNITYSDK_OFFSET(0x1C253920)
#define RPG_GAMECORE_CLEARENTITYDAMAGETEXT_METHOD_3_BE4910CD81A95D6D_OFFSET UNITYSDK_OFFSET(0x1C2538E0)
#define RPG_GAMECORE_CLEARENTITYDAMAGETEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C253910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearEntityDamageText_TypeDefinitionIndex = 22381;

	class ClearEntityDamageText : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::UIDamageTextType TextType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYDAMAGETEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BE4910CD81A95D6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearEntityDamageText*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearEntityDamageText*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYDAMAGETEXT_METHOD_3_BE4910CD81A95D6D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_146577BE06A515F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearEntityDamageText* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearEntityDamageText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYDAMAGETEXT_METHOD_3_146577BE06A515F2_OFFSET))(a1, a2);
		}
	};
}
