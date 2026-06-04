#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_2FD33788640A7CFD;

#define RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS_CLONE_OFFSET UNITYSDK_OFFSET(0xCCE4520)
#define RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS__CCTOR_OFFSET UNITYSDK_OFFSET(0xCCE45B0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xCCBE8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifierInitParams_TypeDefinitionIndex = 50859;

	class AdventureModifierInitParams : public ::System::Object
	{
	public:
		static ::RPG::GameCore::AdventureModifierInitParams** StaticGet_s_Empty()
		{
			return (::RPG::GameCore::AdventureModifierInitParams**)Il2CppClass::FromTypeDefinitionIndex(AdventureModifierInitParams_TypeDefinitionIndex)->GetStaticField(0x63950);
		}
		::Class_1_2FD33788640A7CFD* BaseInitParams; // 0x10
		::System::UInt32 InitLvl; // 0x18
		::System::Nullable_1<::System::Single> OverrideLifeTime; // 0x1C
		::System::UInt32 SkillSeqID; // 0x24
		::System::Boolean IsServerSync; // 0x28
		::System::Boolean IsClientOnly; // 0x29
		::System::Boolean IsBuffCreate; // 0x2A

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
