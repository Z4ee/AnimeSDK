#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SUMMONUNITBLOCKBASEDEFFECT_METHOD_2_28BDB93E13437B4B_OFFSET UNITYSDK_OFFSET(0x1D584300)
#define RPG_GAMECORE_SUMMONUNITBLOCKBASEDEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D584650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitBlockBasedEffect_TypeDefinitionIndex = 17398;

	class SummonUnitBlockBasedEffect : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 UnitSize; // 0x10
		::System::Single SoftRadius; // 0x1C
		::System::Single VerticalVisibleRange; // 0x20
		::System::Single RootBlockRadius; // 0x24
		::System::String* RootBlockEffect; // 0x28
		::System::Single VisibleRadius; // 0x30
		::Il2CppArray<::System::String*>* EffectPool; // 0x38
		::RPG::GameCore::EntityPosAdaptionConfig* PosAdaption; // 0x40
		::System::Single EfxPosJitterFactor; // 0x48
		::System::Single EfxRotJitterFactor; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITBLOCKBASEDEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_28BDB93E13437B4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonUnitBlockBasedEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonUnitBlockBasedEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITBLOCKBASEDEFFECT_METHOD_2_28BDB93E13437B4B_OFFSET))(a1, a2);
		}
	};
}
