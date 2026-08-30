#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMOVEPARAMMODIFIERFLOAT_METHOD_3_0C77DB5917BF430F_OFFSET UNITYSDK_OFFSET(0x1D0F5250)
#define RPG_GAMECORE_FIVEDIMMOVEPARAMMODIFIERFLOAT_METHOD_3_2C28B2A8ECBF8DF4_OFFSET UNITYSDK_OFFSET(0x1D0F5210)
#define RPG_GAMECORE_FIVEDIMMOVEPARAMMODIFIERFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F5240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMoveParamModifierFloat_TypeDefinitionIndex = 18336;

	class FiveDimMoveParamModifierFloat : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean Modify; // 0x10
		::System::Single Value; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVEPARAMMODIFIERFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2C28B2A8ECBF8DF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveParamModifierFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveParamModifierFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVEPARAMMODIFIERFLOAT_METHOD_3_2C28B2A8ECBF8DF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0C77DB5917BF430F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMoveParamModifierFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMoveParamModifierFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVEPARAMMODIFIERFLOAT_METHOD_3_0C77DB5917BF430F_OFFSET))(a1, a2);
		}
	};
}
