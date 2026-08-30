#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RuanMadeCakeFeatureConfig.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RUANMADECAKEFEATURE_TAILDECAL_METHOD_3_B699DA33B313E792_OFFSET UNITYSDK_OFFSET(0x1D4B9DA0)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_TAILDECAL_METHOD_3_C6007CAE66AFB55F_OFFSET UNITYSDK_OFFSET(0x1D4B9D60)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_TAILDECAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B9D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RuanMadeCakeFeature_TailDecal_TypeDefinitionIndex = 17269;

	class RuanMadeCakeFeature_TailDecal : public ::RPG::GameCore::RuanMadeCakeFeatureConfig
	{
	public:
		::System::String* DecalTex; // 0x18
		::Struct_2_331ACDD60B60D2E3 FilingAndOffset; // 0x20
		::Il2CppArray<::Struct_2_331ACDD60B60D2E3>* CustomColor; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_TAILDECAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C6007CAE66AFB55F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuanMadeCakeFeature_TailDecal*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuanMadeCakeFeature_TailDecal*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_TAILDECAL_METHOD_3_C6007CAE66AFB55F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B699DA33B313E792(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuanMadeCakeFeature_TailDecal* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuanMadeCakeFeature_TailDecal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_TAILDECAL_METHOD_3_B699DA33B313E792_OFFSET))(a1, a2);
		}
	};
}
