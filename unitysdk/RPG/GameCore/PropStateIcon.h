#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPropStateIconCategory.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PROPSTATEICON_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9A3EF0)
#define RPG_GAMECORE_PROPSTATEICON__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9A4050)
#define RPG_GAMECORE_PROPSTATEICON__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A4040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateIcon_TypeDefinitionIndex = 12067;

	class PropStateIcon : public ::System::Object
	{
	public:
		static ::RPG::GameCore::PropStateIcon** StaticGet_INVALID()
		{
			return (::RPG::GameCore::PropStateIcon**)Il2CppClass::FromTypeDefinitionIndex(PropStateIcon_TypeDefinitionIndex)->GetStaticField(0x49EC0);
		}
		::System::String* TimeRewindState; // 0x10
		::System::String* Color; // 0x18
		::System::String* AnchorKey; // 0x20
		::RPG::GameCore::PropState State; // 0x28
		::RPG::GameCore::LevelPropStateIconCategory Category; // 0x2C
		::UnityEngine::Color ColorResult; // 0x30
		::System::Boolean ColorInited; // 0x40
		::System::UInt32 IconID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEICON__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEICON__CCTOR_OFFSET))();
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStateIcon*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStateIcon*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEICON_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
