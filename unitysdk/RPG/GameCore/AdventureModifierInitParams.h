#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_B086460A47690D65;

#define RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS_CLONE_OFFSET UNITYSDK_OFFSET(0xB584E40)
#define RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS__CCTOR_OFFSET UNITYSDK_OFFSET(0xB584EE0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xB584ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifierInitParams_TypeDefinitionIndex = 50192;

	class AdventureModifierInitParams : public ::System::Object
	{
	public:
		static ::RPG::GameCore::AdventureModifierInitParams** StaticGet_s_Empty()
		{
			return (::RPG::GameCore::AdventureModifierInitParams**)Il2CppClass::FromTypeDefinitionIndex(AdventureModifierInitParams_TypeDefinitionIndex)->GetStaticField(0x3FED0);
		}
		::Class_1_B086460A47690D65* BaseInitParams; // 0x10
		::System::Nullable_1<::System::Single> OverrideLifeTime; // 0x18
		::System::UInt32 InitLvl; // 0x20
		::System::Boolean IsClientOnly; // 0x24
		::System::Boolean IsServerSync; // 0x25
		::System::Boolean IsBuffCreate; // 0x26
		::System::UInt32 SkillSeqID; // 0x28

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
