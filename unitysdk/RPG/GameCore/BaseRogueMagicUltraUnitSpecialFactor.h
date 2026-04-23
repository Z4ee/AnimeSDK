#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASEROGUEMAGICULTRAUNITSPECIALFACTOR_METHOD_2_7F7AF1E0BE356C7B_OFFSET UNITYSDK_OFFSET(0x186EDAD0)
#define RPG_GAMECORE_BASEROGUEMAGICULTRAUNITSPECIALFACTOR_METHOD_2_C8820E3BFD5EF1A3_OFFSET UNITYSDK_OFFSET(0x186ED8B0)
#define RPG_GAMECORE_BASEROGUEMAGICULTRAUNITSPECIALFACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x186EDAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseRogueMagicUltraUnitSpecialFactor_TypeDefinitionIndex = 17021;

	class BaseRogueMagicUltraUnitSpecialFactor : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEROGUEMAGICULTRAUNITSPECIALFACTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C8820E3BFD5EF1A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseRogueMagicUltraUnitSpecialFactor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseRogueMagicUltraUnitSpecialFactor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEROGUEMAGICULTRAUNITSPECIALFACTOR_METHOD_2_C8820E3BFD5EF1A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_7F7AF1E0BE356C7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseRogueMagicUltraUnitSpecialFactor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseRogueMagicUltraUnitSpecialFactor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEROGUEMAGICULTRAUNITSPECIALFACTOR_METHOD_2_7F7AF1E0BE356C7B_OFFSET))(a1, a2);
		}
	};
}
