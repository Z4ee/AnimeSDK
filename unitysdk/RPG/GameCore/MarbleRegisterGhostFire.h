#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE_METHOD_3_5D29468529BE0D19_OFFSET UNITYSDK_OFFSET(0x1D817D70)
#define RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE_METHOD_3_D55D667DD4072A3D_OFFSET UNITYSDK_OFFSET(0x1D817DD0)
#define RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D817DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleRegisterGhostFire_TypeDefinitionIndex = 16855;

	class MarbleRegisterGhostFire : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Int32 GhostFireCount; // 0x10
		::System::String* GhostFireCountDynamic; // 0x18
		::System::Single GhostFireRadius; // 0x20
		::System::String* GhostFireRadiusDynamic; // 0x28
		::System::UInt32 GhostFireSkill; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5D29468529BE0D19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleRegisterGhostFire*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRegisterGhostFire*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE_METHOD_3_5D29468529BE0D19_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D55D667DD4072A3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleRegisterGhostFire* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRegisterGhostFire*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREGISTERGHOSTFIRE_METHOD_3_D55D667DD4072A3D_OFFSET))(a1, a2);
		}
	};
}
