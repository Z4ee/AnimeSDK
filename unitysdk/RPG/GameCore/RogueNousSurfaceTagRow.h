#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUENOUSSURFACETAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D54FE0)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D55640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousSurfaceTagRow_TypeDefinitionIndex = 14115;

	class RogueNousSurfaceTagRow : public ::System::Object
	{
	public:
		::System::UInt32 TagID; // 0x10
		::System::UInt32 Sort; // 0x14
		::RPG::Client::TextID TagName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueNousSurfaceTagRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousSurfaceTagRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
