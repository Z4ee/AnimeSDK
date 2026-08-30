#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEONFIELD_METHOD_3_0339294535F7ED8A_OFFSET UNITYSDK_OFFSET(0x1D238410)
#define RPG_GAMECORE_MARBLEONFIELD_METHOD_3_87B6914A5B4C89E2_OFFSET UNITYSDK_OFFSET(0x1D238470)
#define RPG_GAMECORE_MARBLEONFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D238460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleOnField_TypeDefinitionIndex = 16666;

	class MarbleOnField : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEONFIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0339294535F7ED8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleOnField*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleOnField*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEONFIELD_METHOD_3_0339294535F7ED8A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_87B6914A5B4C89E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleOnField* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleOnField*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEONFIELD_METHOD_3_87B6914A5B4C89E2_OFFSET))(a1, a2);
		}
	};
}
