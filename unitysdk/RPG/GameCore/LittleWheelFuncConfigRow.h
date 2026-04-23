#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleWheelType.h"
#include "unitysdk/RPG/GameCore/ShortCutWheelGotoType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A6FCC0)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A702F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleWheelFuncConfigRow_TypeDefinitionIndex = 12601;

	class LittleWheelFuncConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::ShortCutWheelGotoType LittleWheelFuncID; // 0x18
		::RPG::GameCore::LittleWheelType Type; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LittleWheelFuncConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleWheelFuncConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
