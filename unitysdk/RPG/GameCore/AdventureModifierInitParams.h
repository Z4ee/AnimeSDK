#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_B086460A47690D65;

#define RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS_CLONE_OFFSET UNITYSDK_OFFSET(0xA841810)
#define RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS__CCTOR_OFFSET UNITYSDK_OFFSET(0xA8418A0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xA81B5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifierInitParams_TypeDefinitionIndex = 43495;

	class AdventureModifierInitParams : public ::System::Object
	{
	public:
		static ::RPG::GameCore::AdventureModifierInitParams** StaticGet_s_Empty()
		{
			return (::RPG::GameCore::AdventureModifierInitParams**)Il2CppClass::FromTypeDefinitionIndex(AdventureModifierInitParams_TypeDefinitionIndex)->GetStaticField(0x41730);
		}
		::Class_1_B086460A47690D65* BaseInitParams; // 0x10
		::System::Nullable_1<::System::Single> OverrideLifeTime; // 0x18
		::System::Boolean IsBuffCreate; // 0x20
		::System::Boolean IsServerSync; // 0x21
		::System::Boolean IsClientOnly; // 0x22
		::System::UInt32 SkillSeqID; // 0x24
		::System::UInt32 InitLvl; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS__CCTOR_OFFSET))();
		}

		::RPG::GameCore::AdventureModifierInitParams* Clone()
		{
			return ((::RPG::GameCore::AdventureModifierInitParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS_CLONE_OFFSET))(this);
		}
	};
}
