#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleWheelType.h"
#include "unitysdk/RPG/GameCore/ShortCutWheelGotoType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DD6FD40)
#define RPG_GAMECORE_LITTLEWHEELFUNCCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD70390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleWheelFuncConfigRow_TypeDefinitionIndex = 13219;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleWheelFuncConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleWheelFuncConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEWHEELFUNCCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
