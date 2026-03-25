#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYRESETCAMERAROOTTRANSFORM_METHOD_3_38A0CBDDD5A6600C_OFFSET UNITYSDK_OFFSET(0x16F2DA50)
#define RPG_GAMECORE_ADVENTITYRESETCAMERAROOTTRANSFORM_METHOD_3_F55D436948A75D9D_OFFSET UNITYSDK_OFFSET(0x16F2D9D0)
#define RPG_GAMECORE_ADVENTITYRESETCAMERAROOTTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2DA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityResetCameraRootTransform_TypeDefinitionIndex = 19371;

	class AdvEntityResetCameraRootTransform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYRESETCAMERAROOTTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F55D436948A75D9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityResetCameraRootTransform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityResetCameraRootTransform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYRESETCAMERAROOTTRANSFORM_METHOD_3_F55D436948A75D9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_38A0CBDDD5A6600C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEntityResetCameraRootTransform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEntityResetCameraRootTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYRESETCAMERAROOTTRANSFORM_METHOD_3_38A0CBDDD5A6600C_OFFSET))(a1, a2);
		}
	};
}
