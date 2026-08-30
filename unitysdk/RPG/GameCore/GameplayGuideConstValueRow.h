#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D13EF60)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D13F4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameplayGuideConstValueRow_TypeDefinitionIndex = 13274;

	class GameplayGuideConstValueRow : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* GameplayGuideConstValueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameplayGuideConstValueRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameplayGuideConstValueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
