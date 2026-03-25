#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEACTIONAGAIN_METHOD_3_0968E8EC57D8916C_OFFSET UNITYSDK_OFFSET(0x17387010)
#define RPG_GAMECORE_MARBLEACTIONAGAIN_METHOD_3_E7CF048290FF688D_OFFSET UNITYSDK_OFFSET(0x17386F30)
#define RPG_GAMECORE_MARBLEACTIONAGAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17386FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleActionAgain_TypeDefinitionIndex = 15418;

	class MarbleActionAgain : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::Boolean IsPaoPao; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEACTIONAGAIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E7CF048290FF688D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleActionAgain*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleActionAgain*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEACTIONAGAIN_METHOD_3_E7CF048290FF688D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0968E8EC57D8916C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleActionAgain* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleActionAgain*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEACTIONAGAIN_METHOD_3_0968E8EC57D8916C_OFFSET))(a1, a2);
		}
	};
}
