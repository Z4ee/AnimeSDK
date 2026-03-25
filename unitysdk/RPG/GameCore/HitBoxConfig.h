#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterCollisionType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HITBOXCONFIG_METHOD_2_A1ACCA43DC9C20FC_OFFSET UNITYSDK_OFFSET(0x172B13F0)
#define RPG_GAMECORE_HITBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172B1630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HitBoxConfig_TypeDefinitionIndex = 15117;

	class HitBoxConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CharacterCollisionType HitBoxType; // 0x10
		::System::Single HitBoxWidth; // 0x14
		::System::Single HitBoxLength; // 0x18
		::System::Single HitBoxHeight; // 0x1C
		::RPG::MVector3 HitBoxOffset; // 0x20
		::System::String* HitBoxAttachPoint; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITBOXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A1ACCA43DC9C20FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HitBoxConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HitBoxConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITBOXCONFIG_METHOD_2_A1ACCA43DC9C20FC_OFFSET))(a1, a2);
		}
	};
}
