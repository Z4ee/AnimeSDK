#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropSpawnerParam.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMGECKOPROPSPAWNERPARAM_METHOD_3_72773E856C64A18D_OFFSET UNITYSDK_OFFSET(0x171F4DF0)
#define RPG_GAMECORE_FIVEDIMGECKOPROPSPAWNERPARAM_METHOD_3_759B33392CF0A058_OFFSET UNITYSDK_OFFSET(0x171F4E30)
#define RPG_GAMECORE_FIVEDIMGECKOPROPSPAWNERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x171F4E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGeckoPropSpawnerParam_TypeDefinitionIndex = 17049;

	class FiveDimGeckoPropSpawnerParam : public ::RPG::GameCore::FiveDimPropSpawnerParam
	{
	public:
		::System::Boolean FaceLeft; // 0x10
		::System::Boolean OverrideMoveSpeed; // 0x11
		::System::Single MoveSpeed; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOPROPSPAWNERPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_72773E856C64A18D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGeckoPropSpawnerParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGeckoPropSpawnerParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOPROPSPAWNERPARAM_METHOD_3_72773E856C64A18D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_759B33392CF0A058(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGeckoPropSpawnerParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGeckoPropSpawnerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOPROPSPAWNERPARAM_METHOD_3_759B33392CF0A058_OFFSET))(a1, a2);
		}
	};
}
