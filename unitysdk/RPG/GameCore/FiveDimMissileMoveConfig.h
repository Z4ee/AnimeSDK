#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropMoveConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMISSILEMOVECONFIG_METHOD_3_CA0381944462CE70_OFFSET UNITYSDK_OFFSET(0x171FB660)
#define RPG_GAMECORE_FIVEDIMMISSILEMOVECONFIG_METHOD_3_EC174D50DEF97035_OFFSET UNITYSDK_OFFSET(0x171FB6B0)
#define RPG_GAMECORE_FIVEDIMMISSILEMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171FB6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMissileMoveConfig_TypeDefinitionIndex = 15297;

	class FiveDimMissileMoveConfig : public ::RPG::GameCore::FiveDimPropMoveConfig
	{
	public:
		::RPG::MVector3 ColliderCenter; // 0x40
		::System::Boolean OverrideJumpParams; // 0x4C
		::System::Single TrampolineJumpHeight; // 0x50
		::System::String* OnBurstEvent; // 0x58
		::System::String* GlobalMoveHitEvent; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSILEMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CA0381944462CE70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMissileMoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMissileMoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSILEMOVECONFIG_METHOD_3_CA0381944462CE70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC174D50DEF97035(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMissileMoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMissileMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSILEMOVECONFIG_METHOD_3_EC174D50DEF97035_OFFSET))(a1, a2);
		}
	};
}
