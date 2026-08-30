#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RuanMadeCakeFeatureConfig.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RUANMADECAKEFEATURE_HATCOLOR_METHOD_3_0596358E11614EC1_OFFSET UNITYSDK_OFFSET(0x1DB2BE40)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_HATCOLOR_METHOD_3_2297D7B5EB883E76_OFFSET UNITYSDK_OFFSET(0x1DB2BE80)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_HATCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2BE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RuanMadeCakeFeature_HatColor_TypeDefinitionIndex = 17268;

	class RuanMadeCakeFeature_HatColor : public ::RPG::GameCore::RuanMadeCakeFeatureConfig
	{
	public:
		::Il2CppArray<::Struct_2_331ACDD60B60D2E3>* CustomColor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_HATCOLOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0596358E11614EC1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuanMadeCakeFeature_HatColor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuanMadeCakeFeature_HatColor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_HATCOLOR_METHOD_3_0596358E11614EC1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2297D7B5EB883E76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuanMadeCakeFeature_HatColor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuanMadeCakeFeature_HatColor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_HATCOLOR_METHOD_3_2297D7B5EB883E76_OFFSET))(a1, a2);
		}
	};
}
