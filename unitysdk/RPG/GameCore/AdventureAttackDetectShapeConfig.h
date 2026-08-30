#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREATTACKDETECTSHAPECONFIG_METHOD_2_249F6D388E30B97E_OFFSET UNITYSDK_OFFSET(0x1CBA8380)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTSHAPECONFIG_METHOD_2_2A4A54B57813716F_OFFSET UNITYSDK_OFFSET(0x1CBA8570)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTSHAPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA8120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAttackDetectShapeConfig_TypeDefinitionIndex = 16100;

	class AdventureAttackDetectShapeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Offset; // 0x10
		::System::Single FaceDir; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTSHAPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_249F6D388E30B97E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAttackDetectShapeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAttackDetectShapeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTSHAPECONFIG_METHOD_2_249F6D388E30B97E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_2A4A54B57813716F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureAttackDetectShapeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureAttackDetectShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTSHAPECONFIG_METHOD_2_2A4A54B57813716F_OFFSET))(a1, a2);
		}
	};
}
