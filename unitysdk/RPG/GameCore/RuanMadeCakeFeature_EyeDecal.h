#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RuanMadeCakeFeatureConfig.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RUANMADECAKEFEATURE_EYEDECAL_METHOD_3_3E16CDF6DCC7144B_OFFSET UNITYSDK_OFFSET(0x1D4B97D0)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_EYEDECAL_METHOD_3_CB833E12B8B4E3D6_OFFSET UNITYSDK_OFFSET(0x1D4B9790)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_EYEDECAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B97C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RuanMadeCakeFeature_EyeDecal_TypeDefinitionIndex = 17271;

	class RuanMadeCakeFeature_EyeDecal : public ::RPG::GameCore::RuanMadeCakeFeatureConfig
	{
	public:
		::System::String* DecalTex; // 0x18
		::Struct_2_331ACDD60B60D2E3 FilingAndOffset; // 0x20
		::Il2CppArray<::Struct_2_331ACDD60B60D2E3>* CustomColor; // 0x30
		::System::Boolean HideLeftEye; // 0x38
		::System::Boolean HideRightEye; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_EYEDECAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB833E12B8B4E3D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuanMadeCakeFeature_EyeDecal*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuanMadeCakeFeature_EyeDecal*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_EYEDECAL_METHOD_3_CB833E12B8B4E3D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3E16CDF6DCC7144B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuanMadeCakeFeature_EyeDecal* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuanMadeCakeFeature_EyeDecal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_EYEDECAL_METHOD_3_3E16CDF6DCC7144B_OFFSET))(a1, a2);
		}
	};
}
