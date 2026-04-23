#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCLAYERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D0D170)
#define RPG_GAMECORE_ROGUEDLCLAYERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D0D870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCLayerRow_TypeDefinitionIndex = 13970;

	class RogueDLCLayerRow : public ::System::Object
	{
	public:
		::System::String* LayerIcon; // 0x10
		::RPG::Client::TextID LayerNameID; // 0x18
		::RPG::Client::TextID LayerNumID; // 0x28
		::System::UInt32 LayerID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCLAYERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCLayerRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCLayerRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCLAYERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
