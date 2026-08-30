#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DESTROYUNSTAGECHARACTER_METHOD_3_45DCFEE5EB1347B6_OFFSET UNITYSDK_OFFSET(0x1D818110)
#define RPG_GAMECORE_DESTROYUNSTAGECHARACTER_METHOD_3_5594AABC38CD51A1_OFFSET UNITYSDK_OFFSET(0x1D8180D0)
#define RPG_GAMECORE_DESTROYUNSTAGECHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D818100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyUnstageCharacter_TypeDefinitionIndex = 22494;

	class DestroyUnstageCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::String* ReasonKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYUNSTAGECHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5594AABC38CD51A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyUnstageCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyUnstageCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYUNSTAGECHARACTER_METHOD_3_5594AABC38CD51A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_45DCFEE5EB1347B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyUnstageCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyUnstageCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYUNSTAGECHARACTER_METHOD_3_45DCFEE5EB1347B6_OFFSET))(a1, a2);
		}
	};
}
