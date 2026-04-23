#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISGENDERTYPE_METHOD_4_D2C301A67DE6BA68_OFFSET UNITYSDK_OFFSET(0x187533E0)
#define RPG_GAMECORE_BYISGENDERTYPE_METHOD_4_DC9F15406B4100C6_OFFSET UNITYSDK_OFFSET(0x18753310)
#define RPG_GAMECORE_BYISGENDERTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18753390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsGenderType_TypeDefinitionIndex = 19785;

	class ByIsGenderType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GenderType Gender; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISGENDERTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DC9F15406B4100C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsGenderType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsGenderType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISGENDERTYPE_METHOD_4_DC9F15406B4100C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D2C301A67DE6BA68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsGenderType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsGenderType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISGENDERTYPE_METHOD_4_D2C301A67DE6BA68_OFFSET))(a1, a2);
		}
	};
}
