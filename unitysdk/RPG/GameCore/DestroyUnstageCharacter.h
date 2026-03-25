#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DESTROYUNSTAGECHARACTER_METHOD_3_45DCFEE5EB1347B6_OFFSET UNITYSDK_OFFSET(0x171550E0)
#define RPG_GAMECORE_DESTROYUNSTAGECHARACTER_METHOD_3_C243B4182E4038EC_OFFSET UNITYSDK_OFFSET(0x17155060)
#define RPG_GAMECORE_DESTROYUNSTAGECHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x171550B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyUnstageCharacter_TypeDefinitionIndex = 20942;

	class DestroyUnstageCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::String* ReasonKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYUNSTAGECHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C243B4182E4038EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyUnstageCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyUnstageCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYUNSTAGECHARACTER_METHOD_3_C243B4182E4038EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_45DCFEE5EB1347B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyUnstageCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyUnstageCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYUNSTAGECHARACTER_METHOD_3_45DCFEE5EB1347B6_OFFSET))(a1, a2);
		}
	};
}
