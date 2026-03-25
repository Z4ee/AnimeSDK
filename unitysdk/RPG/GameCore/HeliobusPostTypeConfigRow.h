#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeliobusPostType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HELIOBUSPOSTTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172A3EB0)
#define RPG_GAMECORE_HELIOBUSPOSTTYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x172A4560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPostTypeConfigRow_TypeDefinitionIndex = 12589;

	class HeliobusPostTypeConfigRow : public ::System::Object
	{
	public:
		::System::String* PostTypeIconPath; // 0x10
		::System::String* PostTypeIconPathUnselected; // 0x18
		::RPG::GameCore::HeliobusPostType PostType; // 0x20
		::RPG::Client::TextID PostTypeName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTTYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeliobusPostTypeConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusPostTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTTYPECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
