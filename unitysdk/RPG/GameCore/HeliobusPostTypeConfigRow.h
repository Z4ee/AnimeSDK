#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeliobusPostType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HELIOBUSPOSTTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189F8B30)
#define RPG_GAMECORE_HELIOBUSPOSTTYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189F91E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPostTypeConfigRow_TypeDefinitionIndex = 13026;

	class HeliobusPostTypeConfigRow : public ::System::Object
	{
	public:
		::System::String* PostTypeIconPath; // 0x10
		::System::String* PostTypeIconPathUnselected; // 0x18
		::RPG::Client::TextID PostTypeName; // 0x20
		::RPG::GameCore::HeliobusPostType PostType; // 0x30

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
