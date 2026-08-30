#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELRELATIVEPOSITIONSELECTORCONFIG_METHOD_3_A7E58F01CCC4F9BA_OFFSET UNITYSDK_OFFSET(0x1E33AE90)
#define RPG_GAMECORE_CHIMERADUELRELATIVEPOSITIONSELECTORCONFIG_METHOD_3_EBE2437591073136_OFFSET UNITYSDK_OFFSET(0x1E33AD90)
#define RPG_GAMECORE_CHIMERADUELRELATIVEPOSITIONSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E33AE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelRelativePositionSelectorConfig_TypeDefinitionIndex = 15730;

	class ChimeraDuelRelativePositionSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Int32 RelativePosition; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRELATIVEPOSITIONSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EBE2437591073136(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelRelativePositionSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelRelativePositionSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRELATIVEPOSITIONSELECTORCONFIG_METHOD_3_EBE2437591073136_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A7E58F01CCC4F9BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelRelativePositionSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelRelativePositionSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRELATIVEPOSITIONSELECTORCONFIG_METHOD_3_A7E58F01CCC4F9BA_OFFSET))(a1, a2);
		}
	};
}
