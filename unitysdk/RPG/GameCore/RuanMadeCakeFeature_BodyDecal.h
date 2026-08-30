#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RuanMadeCakeFeatureConfig.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RUANMADECAKEFEATURE_BODYDECAL_METHOD_3_DEFDF91091FE0544_OFFSET UNITYSDK_OFFSET(0x1D4B95F0)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_BODYDECAL_METHOD_3_F6042FB43756DA85_OFFSET UNITYSDK_OFFSET(0x1D4B95B0)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_BODYDECAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B95E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RuanMadeCakeFeature_BodyDecal_TypeDefinitionIndex = 17266;

	class RuanMadeCakeFeature_BodyDecal : public ::RPG::GameCore::RuanMadeCakeFeatureConfig
	{
	public:
		::System::String* DecalTex; // 0x18
		::Struct_2_331ACDD60B60D2E3 FilingAndOffset; // 0x20
		::Il2CppArray<::Struct_2_331ACDD60B60D2E3>* CustomColor; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_BODYDECAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F6042FB43756DA85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuanMadeCakeFeature_BodyDecal*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuanMadeCakeFeature_BodyDecal*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_BODYDECAL_METHOD_3_F6042FB43756DA85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DEFDF91091FE0544(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuanMadeCakeFeature_BodyDecal* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuanMadeCakeFeature_BodyDecal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_BODYDECAL_METHOD_3_DEFDF91091FE0544_OFFSET))(a1, a2);
		}
	};
}
