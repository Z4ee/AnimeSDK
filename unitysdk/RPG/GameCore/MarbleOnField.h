#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEONFIELD_METHOD_3_103F44BF468FE4F9_OFFSET UNITYSDK_OFFSET(0x18AA15B0)
#define RPG_GAMECORE_MARBLEONFIELD_METHOD_3_87B6914A5B4C89E2_OFFSET UNITYSDK_OFFSET(0x18AA1690)
#define RPG_GAMECORE_MARBLEONFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA1640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleOnField_TypeDefinitionIndex = 15946;

	class MarbleOnField : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEONFIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_103F44BF468FE4F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleOnField*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleOnField*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEONFIELD_METHOD_3_103F44BF468FE4F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_87B6914A5B4C89E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleOnField* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleOnField*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEONFIELD_METHOD_3_87B6914A5B4C89E2_OFFSET))(a1, a2);
		}
	};
}
