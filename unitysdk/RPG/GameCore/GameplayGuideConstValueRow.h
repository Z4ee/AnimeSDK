#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17242C10)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17243170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameplayGuideConstValueRow_TypeDefinitionIndex = 12223;

	class GameplayGuideConstValueRow : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* GameplayGuideConstValueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GameplayGuideConstValueRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameplayGuideConstValueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
