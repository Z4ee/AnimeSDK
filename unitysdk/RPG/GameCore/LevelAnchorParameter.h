#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELANCHORPARAMETER_METHOD_2_E3F525CD63145BFD_OFFSET UNITYSDK_OFFSET(0x1986D3A0)
#define RPG_GAMECORE_LEVELANCHORPARAMETER_METHOD_2_FEEE01F5F1985CC1_OFFSET UNITYSDK_OFFSET(0x1986D1D0)
#define RPG_GAMECORE_LEVELANCHORPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1986CCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAnchorParameter_TypeDefinitionIndex = 16394;

	class LevelAnchorParameter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORPARAMETER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FEEE01F5F1985CC1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelAnchorParameter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAnchorParameter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORPARAMETER_METHOD_2_FEEE01F5F1985CC1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_E3F525CD63145BFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelAnchorParameter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAnchorParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELANCHORPARAMETER_METHOD_2_E3F525CD63145BFD_OFFSET))(a1, a2);
		}
	};
}
