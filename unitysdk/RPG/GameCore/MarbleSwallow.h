#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLESWALLOW_METHOD_3_1BF91A4F778FF7F9_OFFSET UNITYSDK_OFFSET(0x18AA8C30)
#define RPG_GAMECORE_MARBLESWALLOW_METHOD_3_937066DA8C4C9CE2_OFFSET UNITYSDK_OFFSET(0x18AA8D10)
#define RPG_GAMECORE_MARBLESWALLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA8CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSwallow_TypeDefinitionIndex = 15952;

	class MarbleSwallow : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESWALLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1BF91A4F778FF7F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSwallow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSwallow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESWALLOW_METHOD_3_1BF91A4F778FF7F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_937066DA8C4C9CE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSwallow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSwallow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESWALLOW_METHOD_3_937066DA8C4C9CE2_OFFSET))(a1, a2);
		}
	};
}
