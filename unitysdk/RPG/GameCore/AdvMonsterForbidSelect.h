#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVMONSTERFORBIDSELECT_METHOD_3_8F7844DD5FBF4FE1_OFFSET UNITYSDK_OFFSET(0x1CDCE1D0)
#define RPG_GAMECORE_ADVMONSTERFORBIDSELECT_METHOD_3_D21357FADC0A555E_OFFSET UNITYSDK_OFFSET(0x1CDCE180)
#define RPG_GAMECORE_ADVMONSTERFORBIDSELECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCE1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvMonsterForbidSelect_TypeDefinitionIndex = 21561;

	class AdvMonsterForbidSelect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMONSTERFORBIDSELECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D21357FADC0A555E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvMonsterForbidSelect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvMonsterForbidSelect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMONSTERFORBIDSELECT_METHOD_3_D21357FADC0A555E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F7844DD5FBF4FE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvMonsterForbidSelect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvMonsterForbidSelect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVMONSTERFORBIDSELECT_METHOD_3_8F7844DD5FBF4FE1_OFFSET))(a1, a2);
		}
	};
}
