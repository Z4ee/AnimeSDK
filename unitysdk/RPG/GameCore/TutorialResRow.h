#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALRESROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B06F4E0)
#define RPG_GAMECORE_TUTORIALRESROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B06FF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialResRow_TypeDefinitionIndex = 14777;

	class TutorialResRow : public ::System::Object
	{
	public:
		::System::String* ContentPath; // 0x10
		::System::String* TextPath; // 0x18
		::System::String* KeyMapPath; // 0x20
		::System::String* PrefabPath; // 0x28
		::System::Int32 ID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TutorialResRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TutorialResRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
