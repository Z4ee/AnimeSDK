#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MarbleEffectType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLEEFFECT_METHOD_2_A45D17AD26C6E668_OFFSET UNITYSDK_OFFSET(0x1D4A76D0)
#define RPG_GAMECORE_MARBLEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A7C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleEffect_TypeDefinitionIndex = 16714;

	class MarbleEffect : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MarbleEffectType Type; // 0x10
		::System::String* EffectPath; // 0x18
		::System::Single EffectScale; // 0x20
		::System::String* AttachPoint; // 0x28
		::System::Boolean IsAttach; // 0x30
		::System::Boolean UseHitParam; // 0x31
		::System::Boolean IsMatEffect; // 0x32
		::System::Boolean ManualRemove; // 0x33
		::System::Boolean IgnoreIceLevel; // 0x34
		::System::Int32 TimeSlowPriority; // 0x38
		::System::Single TimeSlowFactor; // 0x3C
		::System::Single TimeSlowDuration; // 0x40
		::System::String* CameraShakeTemplate; // 0x48
		::System::Boolean AttenuateSpeed; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A45D17AD26C6E668(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEFFECT_METHOD_2_A45D17AD26C6E668_OFFSET))(a1, a2);
		}
	};
}
