#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RuanMadeCakeFeatureConfig.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RUANMADECAKEFEATURE_HATDECAL_METHOD_3_50F2A57A1B0A8730_OFFSET UNITYSDK_OFFSET(0x18DDCE30)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_HATDECAL_METHOD_3_8571EDEAFC071DD9_OFFSET UNITYSDK_OFFSET(0x18DDC890)
#define RPG_GAMECORE_RUANMADECAKEFEATURE_HATDECAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDC880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RuanMadeCakeFeature_HatDecal_TypeDefinitionIndex = 16576;

	class RuanMadeCakeFeature_HatDecal : public ::RPG::GameCore::RuanMadeCakeFeatureConfig
	{
	public:
		::System::String* DecalTex; // 0x18
		::Struct_2_331ACDD60B60D2E3 FilingAndOffset; // 0x20
		::Il2CppArray<::Struct_2_331ACDD60B60D2E3>* CustomColor; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_HATDECAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_50F2A57A1B0A8730(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuanMadeCakeFeature_HatDecal*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuanMadeCakeFeature_HatDecal*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_HATDECAL_METHOD_3_50F2A57A1B0A8730_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8571EDEAFC071DD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RuanMadeCakeFeature_HatDecal* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RuanMadeCakeFeature_HatDecal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RUANMADECAKEFEATURE_HATDECAL_METHOD_3_8571EDEAFC071DD9_OFFSET))(a1, a2);
		}
	};
}
