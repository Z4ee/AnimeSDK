#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RuanMadeCakeFeatureConfig.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RUANMADECAKEFEATURE_BODYCOLOR_METHOD_3_A72BF51FAC87BB06_OFFSET UNITYSDK_OFFSET(0x1DB2B870)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_BODYCOLOR_METHOD_3_F27B24C66DFE4DB9_OFFSET UNITYSDK_OFFSET(0x1DB2B8B0)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_BODYCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2B8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RuanMadeCakeFeature_BodyColor_TypeDefinitionIndex = 17267;

	class RuanMadeCakeFeature_BodyColor : public ::RPG::GameCore::RuanMadeCakeFeatureConfig
	{
	public:
		::Il2CppArray<::Struct_2_331ACDD60B60D2E3>* CustomColor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_BODYCOLOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A72BF51FAC87BB06(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuanMadeCakeFeature_BodyColor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuanMadeCakeFeature_BodyColor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_BODYCOLOR_METHOD_3_A72BF51FAC87BB06_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F27B24C66DFE4DB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuanMadeCakeFeature_BodyColor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuanMadeCakeFeature_BodyColor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_BODYCOLOR_METHOD_3_F27B24C66DFE4DB9_OFFSET))(a1, a2);
		}
	};
}
